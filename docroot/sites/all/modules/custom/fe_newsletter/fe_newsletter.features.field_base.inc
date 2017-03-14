<?php
/**
 * @file
 * fe_newsletter.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fe_newsletter_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_advertisements'.
  $field_bases['field_advertisements'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_advertisements',
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
        'advertisement' => 'advertisement',
        'article' => 0,
        'banner' => 0,
        'bulletin_email' => 0,
        'chat' => 0,
        'feed' => 0,
        'feed_item' => 0,
        'news' => 0,
        'page' => 0,
        'training_opportunity' => 0,
        'video' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 1,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_comments'.
  $field_bases['field_comments'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_comments',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'comment_node_advertisement' => 'comment_node_advertisement',
          'comment_node_banner' => 'comment_node_banner',
          'comment_node_bulletin_email' => 'comment_node_bulletin_email',
          'comment_node_chat' => 'comment_node_chat',
          'comment_node_feed' => 'comment_node_feed',
          'comment_node_feed_item' => 'comment_node_feed_item',
          'comment_node_multimedia' => 'comment_node_multimedia',
          'comment_node_news' => 'comment_node_news',
          'comment_node_page' => 'comment_node_page',
          'comment_node_staff_member' => 'comment_node_staff_member',
          'comment_node_training_opportunity' => 'comment_node_training_opportunity',
          'comment_node_video' => 'comment_node_video',
        ),
      ),
      'target_type' => 'comment',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_from_date'.
  $field_bases['field_from_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_from_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => 'optional',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_multimedia'.
  $field_bases['field_multimedia'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_multimedia',
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
        'multimedia' => 'multimedia',
        'news' => 0,
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

  // Exported field_base: 'field_number_of_advertisements'.
  $field_bases['field_number_of_advertisements'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number_of_advertisements',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_opportunities'.
  $field_bases['field_opportunities'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opportunities',
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
        'article' => 0,
        'banner' => 0,
        'bulletin_email' => 0,
        'chat' => 0,
        'feed' => 0,
        'feed_item' => 0,
        'news' => 0,
        'page' => 0,
        'profile' => 0,
        'training_opportunity' => 'training_opportunity',
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

  // Exported field_base: 'field_other_content'.
  $field_bases['field_other_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_content',
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
        'article' => 0,
        'banner' => 0,
        'bulletin_email' => 0,
        'chat' => 0,
        'feed' => 0,
        'feed_item' => 0,
        'news' => 'news',
        'page' => 0,
        'training_opportunity' => 0,
        'video' => 'video',
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
