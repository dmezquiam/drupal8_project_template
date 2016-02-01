<?php
  
  $current_dir = __DIR__;
  $filename = glob("$current_dir/data/opportunity.json");
  $data = file_get_contents($filename[0]);
  $data = json_decode($data);
  
  foreach ($data as $nid => $value) {
    $node = node_load($nid);
    if ($node) {
      $lang = $node->language;
      $node->field_deadline[$lang][0]['value'] = $value->new_deadline;
      $node->field_deadline[$lang][0]['timezone'] = 'America/New_York';
      $node->field_deadline[$lang][0]['offset'] = -18000;
      $node->field_deadline[$lang][0]['timezone_db'] = 'America/New_York';
      $node->field_deadline[$lang][0]['date_type'] = 'datestamp';

      node_save($node);
    }
  }
