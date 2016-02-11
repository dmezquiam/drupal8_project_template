<?php

  $results = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('type', 'training_opportunity', '=')
    ->execute()
    ->fetchAll();

  $data_opportunity = array();
  foreach ($results as $key => $opportunity) {
    $node = node_load($opportunity->nid);
    $lang = $node->language;
    if(isset($node->field_deadline[$lang][0]['value'])) {
      $deadline = $node->field_deadline[$lang][0]['value'];
      $tz =  $node->field_deadline[$lang][0]['timezone_db'];
      $offset = _fe_opportunity_offset_tz($tz);
      $new_deadline = $deadline - $offset;

      $data_opportunity[$node->nid]['new_deadline'] = $new_deadline;
    }
  }

  $data = json_encode($data_opportunity);
  $current_dir = __DIR__;
  file_put_contents("$current_dir/data/opportunity.json", $data);
