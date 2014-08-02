<?php

function _ijnet_migrate_register_node_migrations($connection_args) {
  // Common arguments to all node migrations
  $connection_args += array(
    'group_name' => 'NodesLegacyToDrupal7',
    'user_migration' => 'User',
    'default_uid' => 0,
  );

  $machine_name = 'Image';
  Migration::registerMigration(
    'IJNetImageMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Image nodes into image managed files'),
      'source_dir' => '../legacy-files/',
      // 'source_dir' => 'https://ijnet.org/sites/default/files/',
      'destination_dir' => 'public://images/migrate',
    )
  );

  $machine_name = 'Chat';
  Migration::registerMigration(
    'IJNetChatMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Chat nodes'),
      'source_type' => 'chat',
      'destination_type' => 'chat',
    )
  );

  $machine_name = 'Advertisement';
  Migration::registerMigration(
    'IJNetAdvertisementMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Advertisement nodes'),
      'source_type' => 'advertisement',
      'destination_type' => 'advertisement',
    )
  );

  $machine_name = 'Video';
  Migration::registerMigration(
    'IJNetVideoMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Video nodes'),
      'source_type' => 'video',
      'destination_type' => 'video',
    )
  );

  $machine_name = 'BlogPost';
  Migration::registerMigration(
    'IJNetBlogPostMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Blog Post nodes'),
      'source_type' => 'post',
      'destination_type' => 'news',
    )
  );

  $machine_name = 'Story';
  Migration::registerMigration(
    'IJNetStoryMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Story nodes'),
      'source_type' => 'story',
      'destination_type' => 'news',
      'dependencies' => array('BlogPost'),
    )
  );

  $machine_name = 'Opportunity';
  Migration::registerMigration(
    'IJNetOpportunityMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Opportunity nodes'),
      'source_type' => 'training_opportunity',
      'destination_type' => 'training_opportunity',
      'dependencies' => array('Story', 'BlogPost'),
    )
  );

  $machine_name = 'BulletinEmail';
  Migration::registerMigration(
    'IJNetBulletinEmailMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Bulletin Email nodes'),
      'source_type' => 'bulletin_email',
      'destination_type' => 'bulletin_email',
      'dependencies' => array('Opportunity', 'Story', 'BlogPost', 'Video', 'Advertisement'),
    )
  );
}

class IJNetImageMigration extends DrupalFile6Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->source = new MigrateSourceSQL($this->query(), $this->sourceFields, NULL, $this->sourceOptions);

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'nid' => array(
          'alias' => 'n',
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Source node ID',
        ),
      ),
      MigrateDestinationFile::getKeySchema()
    );

    $this->removeFieldMapping('destination_file');
    $this->removeFieldMapping(NULL, 'filename');
    $this->addFieldMapping('destination_file', 'filename');
  }

  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.type', 'image');

    $query->join('content_field_image', 'fi', 'n.nid = fi.nid');
    $query->join('files', 'f', 'fi.field_image_fid = f.fid');
    $query->fields('f', array('fid', 'uid', 'filepath', 'timestamp', 'filename'));
    $query->condition('fi.delta', 0); // Added this becuase some images have multiple values

    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->filename = date('Y-m-d', $row->timestamp) . '/' . $row->filename;
  }

  public static function get_destination_fid($sourceid) {
    $result = Database::getConnection('default')
      ->select('migrate_map_image', 'n')
      ->condition('n.sourceid1', $sourceid)
      ->fields('n', array('destid1'))
      ->execute()
      ->fetchAssoc();

    return $result;
  }

  public static function get_view_mode($image_style) {
    $map_view_modes_image_styles = array(
      'small' => 'media_small',
      'medium' => 'custom_media_medium',
      'main' => 'custom_media_medium',
      'large' => 'media_large'
    );

    return $map_view_modes_image_styles[$image_style];
  }
}

class IJNetNodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    // Add custom mappings for the format filters
    $arguments['format_mappings'] = array(
      '1' => 'filtered_html',
      '2' => 'filtered_html',
      '3' => 'full_html',
      '4' => 'filtered_html',
      '5' => 'filtered_html',
    );
    parent::__construct($arguments);

    // Set the body language, first remove the mapping to avoid warning
    $this->removeFieldMapping('body:language');
    $this->addFieldMapping('body:language', 'language');
  }

  protected function query() {
    $query = parent::query();

    // Use here inverse logic since we dont want apply the filter in two nodes
    // So, if not setted the "node_status" apply the filter with value 1
    // If "node_status" is setted, for now only need not apply the filter
    if (!isset($this->node_status)) {
      // We don't want any unpublished nodes, because most of them are just spam
      $query->condition('status', 1);
    }

    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $parsedown = new Parsedown();
    $row->body = $parsedown->text($row->body);
    $row->teaser = $parsedown->text($row->teaser);
  }

  /**
   * The following function makes it easier to define the mappings for
   * taxonomy term reference fields.
   */
  protected function pre_parent_tax_ref($new_field) {
    $this->sourceFields["${new_field}_source_type"] = t('constant: tid');
    $this->sourceFields["${new_field}_create_term"] = t('constant: TRUE/FALSE');
    $this->sourceFields["${new_field}_ignore_case"] = t('constant: TRUE/FALSE');
  }

  /**
   * Discard invalid related nodes
   */
  protected function get_valid_related_nodes($source_nids, $status, $created = 0) {
    $valid_nodes = array();
    if (isset($source_nids)) {
      foreach ($source_nids as $nid) {
        $result = Database::getConnection('default', $this->sourceConnection)
          ->select('node', 'n')
          ->fields('n', array('nid'))
          ->condition('n.nid', $nid)
          ->condition('n.status', $status)
          ->condition('n.created', $created, '>')
          ->execute()
          ->fetchAssoc();

        if ($result) { // If the node exist then is a valid node
          $valid_nodes[] = $nid;
        }
      }
    }

    return $valid_nodes;
  }
}

class IJNetChatMigration extends IJNetNodeMigration {
  public function __construct(array $arguments) {
    $this->node_status = 0; // Tell to IJNetNodeMigration that get back all nodes
    parent::__construct($arguments);
    // Update custom mappings for the format filters
    $this->arguments['format_mappings']['2'] = 'full_html'; // Raw text / HTML
    $this->arguments['format_mappings']['5'] = 'full_html'; // Filtered HTML -embed
    $this->formatMappings = $this->arguments['format_mappings'];

    $this->addFieldMapping('field_date', 'field_date');
    $this->addFieldMapping('field_date:to', 'field_date:value2');

    $this->addFieldMapping('field_chat_description', 'field_description');
  }
}

class IJNetAdvertisementMigration extends IJNetNodeMigration {
  public function __construct(array $arguments) {
    $this->node_status = 0; // Tell to IJNetNodeMigration that get back all nodes
    parent::__construct($arguments);

    $this->addFieldMapping('field_image_ad', 'field_image_reference')
      ->sourceMigration('Image');
    $this->addFieldMapping('field_image_ad:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image_ad:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_image_show', "field_image_show");

    // "3" for taxonomy region and "5" for taxonomy tags
    $this->addUnmigratedSources(array('field_image_show'));
  }
}

class IJNetVideoMigration extends IJNetNodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->pre_parent_tax_ref("field_category");
    _ijnet_migrate_post_parent_tax_ref($this, "field_category", 1, "TermsTopic");

    $this->addFieldMapping('field_video', 'field_video:value');

    // "3" for taxonomy region and "5" for taxonomy tags
    $this->addUnmigratedSources(array('3', '5'));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // field_video:value have the youtube id, so harcoe the youtube url with the id
    $field_video_value = 'field_video:value';    
    $video_value = $row->$field_video_value;
    $row->$field_video_value = array('http://www.youtube.com/watch?v=' . $video_value[0]);
  }
}

class IJNetNewsMigration extends IJNetNodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_byline', "field_byline")
      ->sourceMigration('User');
    $this->addFieldMapping('field_attribution', "field_attribution");

    $this->addFieldMapping('field_image', 'field_image_reference')
      ->sourceMigration('Image');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_image_show', "field_image_show");

    $this->pre_parent_tax_ref("field_topic");
    _ijnet_migrate_post_parent_tax_ref($this, "field_topic", 1, "TermsTopic");

    // "3" for taxonomy region and "5" for taxonomy tags
    $this->addUnmigratedSources(array('field_video_reference', '3', '5'));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if (isset($row->field_image_reference[0])) { // If have at least one image
      $row->field_image_reference = array($row->field_image_reference[0]); // Only keep the first image
    }

    // If the user in field_byline is 1 (admin), change to user 100 (IJNet)
    if (isset($row->field_byline) && $row->field_byline[0] == 1) {
      $row->field_byline = 100;
    }

    // Replace in the body string the old media string [image: ...]
    // with the new one [[{"type": ...]] and the updated image data
    $body_string = $row->body;
    while (strpos($body_string, '[image') !== FALSE) {
      $first_pos = strpos($body_string, '[image');
      $last_pos = strpos($body_string, ']', $first_pos) + 1;
      $image_string = substr($body_string, $first_pos, $last_pos - $first_pos);
      $image_attr = explode(',', substr($body_string, $first_pos+1, $last_pos - $first_pos - 2));

      $node_image_id = substr($image_attr[0], 7);
      $fid = IJNetImageMigration::get_destination_fid($node_image_id);
      $view_mode = IJNetImageMigration::get_view_mode(trim($image_attr[2])); // Map source image style with destination view mode

      $new_string = '[[{"type":"media","view_mode":"'.$view_mode.'","fid":"'.$fid['destid1'].'","attributes":{}}]]';
      $row->body = str_replace($image_string, $new_string, $row->body);

      $body_string = substr($body_string, $last_pos); // Update the cicled string
    }
  }
}

class IJNetBlogPostMigration extends IJNetNewsMigration {
}

class IJNetStoryMigration extends IJNetNewsMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // This can not be used due the Story self reference and the reference to Opportunity (not migrated yet)
    $this->addFieldMapping('field_related_content', 'field_related_content');
      // ->sourceMigration(array('BlogPost', 'Opportunity', 'Story', 'Video'));
    // Instead create a map mapping source type to the associated Migration
    $this->related_content_migrations_map = array(
      'story' => 'Story',
      'post' => 'BlogPost',
      'video' => 'Video',
      'training_opportunity' => 'Opportunity'
    );

    // "4" for taxonomy story type
    $this->addUnmigratedSources(array('field_audio', 'field_document', '4'));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->field_related_content = $this->get_valid_related_nodes($row->field_related_content, 1);

    // This is needed because the multi-type node reference
    // Instead of use "sourceMigration" in the field mapping, we need call "handleSourceMigration"
    // with the right migration type, ie, for a related node of type story we call with Story migration
    $realted_content_destid = array();
    foreach ($row->field_related_content as $nid) {
      $result = Database::getConnection('default', $this->sourceConnection)
        ->select('node', 'n')
        ->fields('n', array('type'))
        ->condition('n.nid', $nid)
        ->execute()
        ->fetchAssoc();
      $realted_nodes_dest[] = $this->handleSourceMigration($this->related_content_migrations_map[$result['type']], $nid);
    }
    $row->field_related_content = $realted_content_destid;
  }
}

class IJNetOpportunityMigration extends IJNetNodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_deadline', 'field_deadline');

    $this->addFieldMapping('field_date', 'field_date');
    $this->addFieldMapping('field_date:to', 'field_date:value2');

    $this->addFieldMapping('field_organization', 'field_organization');
    $this->addFieldMapping('field_organization:title', 'field_organization:title');

    $this->addFieldMapping('field_cost', 'field_cost');

    // The related content can be a Opportunity, a Blog Post or a Story
    $this->addFieldMapping('field_related_content', 'field_related_content')
      ->sourceMigration(array('Opportunity', 'BlogPost', 'Story'));

    $this->pre_parent_tax_ref('field_category');
    _ijnet_migrate_post_parent_tax_ref($this, 'field_category', 1, 'TermsTopic');

    $this->pre_parent_tax_ref('field_region');
    _ijnet_migrate_post_parent_tax_ref($this, 'field_region', 3, 'TermsRegion');

    // "2" for taxonomy training type
    $this->addUnmigratedSources(array('field_document', 'field_cost:currency', '2'));
  }

  protected function query(){
    $query = parent::query();

    $from_time = time() - (5 * 365 * 24 * 60 * 60); // 5 years old
    $query->condition('created', $from_time, '>');

    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->field_related_content = $this->get_valid_related_nodes($row->field_related_content, 1);
  }

  function prepare($entity, stdClass $row) {
    // Fix for far away dates that the timestamp integer exced the maximum mysql int limit of 2147483647
    $mysql_int_max = 2147483647;
    if (!empty($entity->field_date[$entity->language]) && $entity->field_date[$entity->language][0]['value'] > $mysql_int_max) {
      $entity->field_date[$entity->language][0]['value'] = $mysql_int_max;
    }
    if (!empty($entity->field_date[$entity->language]) && $entity->field_date[$entity->language][0]['value2'] > $mysql_int_max) {
      $entity->field_date[$entity->language][0]['value2'] = $mysql_int_max;
    }
    if (!empty($entity->field_deadline[$entity->language]) && $entity->field_deadline[$entity->language][0]['value'] > $mysql_int_max) {
      $entity->field_date[$entity->language][0]['value2'] = $mysql_int_max;
    }
  }
}

class IJNetBulletinEmailMigration extends IJNetNodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_from_date', 'field_date');
    $this->addFieldMapping('field_from_date:to', 'field_date:value2');
    $this->addFieldMapping('field_number_of_advertisements', 'field_ads');

    // The related content can be a Blog Post, a Story or a Video node
    $this->addFieldMapping('field_other_content', 'field_related_feature')
      ->sourceMigration(array('BlogPost', 'Story', 'Video'));

    // The related opportunities are Opportunity nodes
    $this->addFieldMapping('field_opportunities', 'field_related_opportunities')
      ->sourceMigration(array('Opportunity'));

    // The related advertisements are Advertisement nodes
    $this->addFieldMapping('field_advertisements', 'field_related_advertisements')
      ->sourceMigration(array('Advertisement'));
  }

  protected function query(){
    $query = parent::query();

    $from_time = time() - (5 * 365 * 24 * 60 * 60); // 5 years old
    $query->condition('created', $from_time, '>');

    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->field_related_feature = $this->get_valid_related_nodes($row->field_related_feature, 1);

    $row->field_related_opportunities = $this->get_valid_related_nodes($row->field_related_opportunities, 1);

    $row->field_related_advertisements = $this->get_valid_related_nodes($row->field_related_advertisements, 0);
  }
}
