<?php

function _ijnet_migrate_register_term_migrations($connection_args) {
  $d = 'Migration of Topic terms. They are used as articles Topics.';
  $mn = 'TermsTopic';   # machine_name
  # There is a d2d issue in Per language terms and translations sets
  # check it out at https://www.drupal.org/node/1990002.
  # I finnaly use #6
  Migration::registerMigration('i18nTermMigration', $mn,
    $connection_args + array(
      'group_name' => 'TermsLegacyToDrupal7',
      'description' => t($d),
      'machine_name' => $mn,
      'source_vocabulary' => '1',   # legacy vid
      'destination_vocabulary' => 'topic',
      // There are terms with equal name but different language
      'allow_duplicate_terms' => TRUE,
    )
  );

  $d = 'Migration of Region terms.';
  $mn = 'TermsRegion';   # machine_name
  Migration::registerMigration('DrupalTerm6Migration', $mn,
    $connection_args + array(
      'group_name' => 'TermsLegacyToDrupal7',
      'description' => t($d),
      'machine_name' => $mn,
      'source_vocabulary' => '3',   # legacy vid
      'destination_vocabulary' => 'region',
    )
  );
}

/* We use this class just to add two destination fields */
class i18nMigrateDestinationTerm extends MigrateDestinationTerm {
  public function fields($migration = NULL) {
    $fields = parent::fields($migration);
    if ( function_exists('i18n_taxonomy_vocabulary_mode') ) {
      $fields['language'] = t('Term: Language');
      $fields['i18n_tsid'] = t('Term: Language group');
    }
    return $fields;
  }

  /* public function findMatchingTerm($term) {
    // See if the term with the same language and parentage, already exists -
    // if so, load it
    $candidates = taxonomy_term_load_multiple
                  (array(),
                   array('name' => trim($term->name)
                        ,'vid'  => $term->vid
                        )
                  );
    foreach ($candidates as $candidate) {
      if ($term->language != $candidate->language) continue;
      $parents = taxonomy_get_parents($candidate->tid);
      // We need to set up $parents as a simple array of tids
      if (empty($parents)) {
        $parents = array(0);
      }
      else {
        // Parents array is tid => term object, make into list of tids
        $new_parents = array();
        foreach ($parents as $parent) {
          $new_parents[] = $parent->tid;
        }
        $parents = $new_parents;
      }
      if ($term->parent == $parents) {
        // We've found a matching term.
        return $candidate;
      }
    }
    return FALSE;
  } */
}

/* Handling of internationalization fields for taxonomy terms */
class i18nTermMigration extends DrupalTerm6Migration {
  public function __construct(array $arguments) {
    // $this->sourceFields['language'] = t('Language of the term');
    // $this->sourceFields['trid'] = t('Translation group');
    parent::__construct($arguments);

    // Override destination given by the parent class with our own
    $this->destination = new i18nMigrateDestinationTerm($this->destinationVocabulary, $arguments);

    $this->addFieldMapping('language', 'language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('i18n_tsid', 'trid');
  }

  /* Add the columns provided by i18n */
  protected function query() {
    $query = parent::query();
    $query->fields('td', array('language', 'trid'));
    return $query;
  }

  /* If this row belongs to a new translation set, create one */
  public function complete($entity, stdClass $row) {
    if (!is_null($entity->i18n_tsid) && 
        !i18n_translation_set_load($entity->i18n_tsid) && 
        $entity->i18n_tsid > 0) {
      $tsid = db_insert('i18n_translation_set')
        ->fields(array(
          'tsid' => $entity->i18n_tsid,
          'type' => 'taxonomy_term',
          'bundle' => $entity->vocabulary_machine_name,
          'master_id' => 0,
          'status'=> 0,
          'created' => REQUEST_TIME,
          'changed' => REQUEST_TIME,
        ))
        ->execute();
    }
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // pt-br was replaced with pt
    // if ($row->language == 'pt-br') {
      // $row->language = 'pt';
    // } elseif ($row->language == '') {
      // $row->language == NULL;
    // }
    if ($row->language == '') {
      $row->language == NULL;
    }

    return TRUE;
  }
}
