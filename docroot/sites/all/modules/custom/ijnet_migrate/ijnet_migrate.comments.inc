<?php

function _ijnet_migrate_register_comments_migrations($connection_args) {
  // Common arguments to all comments migrations
  $connection_args += array(
    'group_name' => 'CommentsLegacyToDrupal7',
    'user_migration' => 'User',
    'default_uid' => 0
  );

  $machine_name = 'ChatComment';
  Migration::registerMigration(
    'IJNetCommentMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Chat comments'),
      'source_type' => 'chat',
      'destination_type' => 'chat',
      'node_migration' => 'Chat'
    )
  );

  $machine_name = 'VideoComment';
  Migration::registerMigration(
    'IJNetCommentMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Video comments'),
      'source_type' => 'video',
      'destination_type' => 'video',
      'node_migration' => 'Video'
    )
  );

  $machine_name = 'BlogPostComment';
  Migration::registerMigration(
    'IJNetCommentMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Blog Post comments'),
      'source_type' => 'post',
      'destination_type' => 'news',
      'node_migration' => 'BlogPost'
    )
  );

  $machine_name = 'StoryComment';
  Migration::registerMigration(
    'IJNetCommentMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Story comments'),
      'source_type' => 'story',
      'destination_type' => 'news',
      'node_migration' => 'Story'
    )
  );

  $machine_name = 'OpportunityComment';
  Migration::registerMigration(
    'IJNetOpportunityCommentMigration',
    $machine_name,
    $connection_args + array(
      'machine_name' => $machine_name,
      'description' => t('Migration of Opportunity comments'),
      'source_type' => 'training_opportunity',
      'destination_type' => 'training_opportunity',
      'node_migration' => 'Opportunity'
    )
  );
}

class IJNetCommentMigration extends DrupalComment6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // Set the language, first remove the mapping to avoid warning
    $this->removeFieldMapping('language');
    $this->addSimpleMappings(array('language'));

    // Set the comment body language, first remove the mapping to avoid warning
    $this->removeFieldMapping('comment_body:language');
    $this->addFieldMapping('comment_body:language', 'language');
  }

  protected function query(){
    $query = parent::query();

    $query->fields('n', array('language'));

    // We don't want any comment from unpublished nodes
    $query->condition('n.status', 1);

    // We don't want any unpublished comments
    $query->condition('c.status', 0);
    return $query;
  }
}

class IJNetOpportunityCommentMigration extends IJNetCommentMigration {
  protected function query(){
    $query = parent::query();

    $from_time = time() - (5 * 365 * 24 * 60 * 60) + 3600; // 5 years old - 1 hour by the time elapsed migratin opportunity node
    $query->condition('n.created', $from_time, '>'); // Only migrate comments for 5 years old opportunities

    return $query;
  }
}