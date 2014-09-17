<?php

function _ijnet_migrate_register_user_migrations($connection_args) {
  $machine_name = 'UserPictures';
  Migration::registerMigration(
    'IJNetFileMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of user pictures'),
      'group_name' => 'UsersLegacyToDrupal7',
      'default_uid' => 1,
      'source_dir' => 'https://ijnet.org/sites/default/files/',
      'destination_dir' => 'public://user-pictures',
      'fid_column' => 'field_profile_image_fid'
    )
  );

  $machine_name = 'User';
  $connection_args['source_version'] = 'IJNetUser6';
  Migration::registerMigration(
    'IJNetUserMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of users from Drupal 6'),
      'group_name' => 'UsersLegacyToDrupal7',
      'picture_migration' => 'UserPictures',
    )
  );
}

/**
* This class migrates files linked to user profiles.
* The 'fid_column' argument is the column in the content_type_profile table
* were the fids are stored.
*/
class IJNetFileMigration extends DrupalFile6Migration {
  public function __construct(array $arguments) {
    $this->fidColumn = $arguments['fid_column'];
    parent::__construct($arguments);

    // We don't want to respect the old directory structure
    $this->removeFieldMapping('destination_file');
    $this->removeFieldMapping(NULL, 'filename');
    $this->addFieldMapping('destination_file', 'filename');

    // We should import the files before the users.
    $this->addUnmigratedSources(array('uid'));
  }

  /**
   * We add an inner join to get only the files we want.
   * The distinct clause is because there were a couple of repeated rows.
   */
  protected function query() {
    $query = parent::query();

    $query->distinct();

    $join_on = 'f.fid = p.' . $this->fidColumn;
    $query->innerJoin('content_type_profile', 'p', $join_on);

    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->filename = date('Y-m-d', $row->timestamp) . '/' . $row->filename;
  }
}

class IJNetUserMigration extends DrupalUser6Migration {
  public function __construct($arguments) {
    $this->roleMigration = TRUE;

    // Define sources we'll fill in prepareRow
    $this->sourceFields["mapped_roles"] = t('Roles mapped to the new ones');
    $this->sourceFields["city"] = t('City location');
    $this->sourceFields["province"] = t('Province location');
    $this->sourceFields["country"] = t('Country location');

    parent::__construct($arguments);

    $this->pictureMigration = $arguments['picture_migration'];

    $this->pre_parent_tax_ref('field_topic');
    _ijnet_migrate_post_parent_tax_ref($this, 'field_topic', 1, 'Topic');

    // ========================================
    // Your profile
    // ========================================
    // The picture is in the content type, so we have to explicitly map it
    $this->removeFieldMapping('picture', 'picture');
    $this->addFieldMapping('picture', 'field_profile_image')
      ->sourceMigration($this->pictureMigration);

    $this->addFieldMapping('field_screen_name', 'field_screen_name');

    $this->addFieldMapping('field_location')
      ->defaultValue(FALSE);
    $this->addFieldMapping('field_location:city', 'city');
    $this->addFieldMapping('field_location:province', 'province');
    $this->addFieldMapping('field_location:country', 'country');

    // ========================================
    // Your Work
    // ========================================
    $this->addFieldMapping('field_job_title', 'field_title');
    $this->addFieldMapping('field_organization_name','field_organization_name');
    $this->addFieldMapping('field_organization_website','field_organization_website');

    // ========================================
    // Your Background
    // ========================================
    $this->addFieldMapping('field_bio', 'field_bio');
    $this->addFieldMapping('field_bio:format', 'field_bio:format')
       ->callbacks('_ijnet_migrate_map_format_callback');

    $this->addFieldMapping('field_blog', 'field_blog');
    $this->addFieldMapping('field_blog:title', 'field_blog:link-title');

    // ========================================
    // Your Preferences
    // ========================================
    $this->addFieldMapping('field_subscribe','field_subscribe')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_languages_spoken','field_languages_spoken');

    // We don't have a role migration, so remove the field mapping
    $this->removeFieldMapping('roles');
    $this->removeFieldMapping('role_names');
    // $this->addFieldMapping('roles', 'roles_mapeados');
    // mapped_roles maps the old roles ids to the news roles names
    $this->addFieldMapping('role_names', 'mapped_roles');

    // Custom mappings for the values we are manually migrating
    $this->roles_map = array(
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'blogger',
      '4' => 'blogger',
      '5' => 'administrator',
      '6' => 'editor',
      '7' => 'member',
    );
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if (empty($row->field_screen_name)) {
      $row->field_screen_name = $row->name;
    }

    if (isset($row->roles)) {
      $mapped_roles = array();
      foreach ($row->roles as $rid) {
        if (!in_array($this->roles_map[$rid], $mapped_roles)) { // Do not add duplicateds
          $mapped_roles[] = $this->roles_map[$rid];
        }
      }
      $row->mapped_roles = $mapped_roles;
    }

    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('users', 'u');
    $query->join('node', 'n', 'u.uid = n.uid');
    $query->join('location_instance', 'li', 'n.nid = li.nid');
    $query->join('location', 'l', 'li.lid = l.lid');
    $query->fields('l', array('city', 'province', 'country'));
    $query->condition('n.type', 'profile');
    $query->condition('u.uid', $row->uid);
    $query = $query->execute()->fetchAssoc();

    if (isset($query)) {
      $row->city = $query['city'];
      $row->province = $query['province'];
      $row->country = $query['country'];
    }
  }

  /* The following function makes it easier to define the mappings for
   * taxonomy term reference fields. */
  private function pre_parent_tax_ref($new_field){
    $this->sourceFields["${new_field}_source_type"] = t('constant: tid');
    $this->sourceFields["${new_field}_create_term"] = t('constant: TRUE/FALSE');
    $this->sourceFields["${new_field}_ignore_case"] = t('constant: TRUE/FALSE');
  }
}

class DrupalVersionIJNetUser6 extends DrupalVersion6 {
  protected function populateSourceFieldInfo($entity_type, $bundle, $include_title_body = FALSE) {
    parent::populateSourceFieldInfo($entity_type, $bundle, $include_title_body);

    if (isset($this->sourceFieldInfo['field_blog']['columns']['field_blog:title'])) {
      $value = $this->sourceFieldInfo['field_blog']['columns']['field_blog:title'];
      unset($this->sourceFieldInfo['field_blog']['columns']['field_blog:title']); // unset the auto detected field
      $this->sourceFieldInfo['field_blog']['columns']['field_blog:link-title'] = $value; // add the field but use link-title instead of title
    }
  }
}
