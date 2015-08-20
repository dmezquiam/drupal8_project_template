<?php

// Get nodes
$result = db_select('migrate_map_story', 'ms')
  ->fields('ms', array('destid1'))
  ->execute()
  ->fetchAll();

foreach ($result as $row) {
  $node = node_load($row->destid1);
  if ($node) {
    $node->pathauto_perform_alias = TRUE;
    node_save($node);
  }
}