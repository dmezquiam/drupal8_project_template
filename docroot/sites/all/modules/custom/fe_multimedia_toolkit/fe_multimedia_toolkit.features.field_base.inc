<?php
/**
 * @file
 * fe_multimedia_toolkit.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fe_multimedia_toolkit_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_multimedia_image'.
  $field_bases['field_multimedia_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_multimedia_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_multimedia_resources'.
  $field_bases['field_multimedia_resources'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_multimedia_resources',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'advertisement' => 0,
        'banner' => 0,
        'bulletin_email' => 0,
        'chat' => 0,
        'feed' => 0,
        'feed_item' => 0,
        'multimedia' => 0,
        'multimedia_toolkit' => 0,
        'news' => 'news',
        'page' => 0,
        'staff_member' => 0,
        'training_opportunity' => 0,
        'video' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  return $field_bases;
}
