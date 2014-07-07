<?php



  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', array('news', 'video'), 'IN')
    ->propertyCondition('status', 1)
    ->propertyCondition('created', 1403717661, '<=')
    ->propertyCondition('created', 1395071160, '>=')
    //->fieldCondition('field_photo', 'fid', 'NULL', '!=')
    ->propertyOrderBy('created', 'DESC')
    ->range(0, 10);
  $result = $query->execute();
  if (isset($result['node'])) {
    $item_nids = array_keys($result['node']);
    $items = entity_load('node', $item_nids);
    foreach($items as $node) {
      print "$node->created [$node->type] $node->title\n";
    }
  }

return;

$cc = constant_contact_create_object();
$cc->set_action_type('contact');
//$contact = $cc->query_contacts('miquel@easytech.com.ar');
$contact = $cc->query_contacts('mfernandez@icfj.org');

var_dump($contact);

