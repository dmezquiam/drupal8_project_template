<?php
/**
 * @file
 * fe_videos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_videos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fe_videos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function fe_videos_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_videos
  $nodequeues['featured_videos'] = array(
    'name' => 'featured_videos',
    'title' => 'Featured Videos',
    'subqueue_title' => 'Featured Videos %subqueue',
    'size' => 3,
    'link' => '%subqueue',
    'link_remove' => '',
    'owner' => 'smartqueue_language',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 'a:2:{s:9:"languages";s:7:"enabled";s:16:"language_neutral";i:0;}',
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 7,
    'types' => array(
      0 => 'video',
    ),
    'roles' => array(
      0 => 'editor',
    ),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function fe_videos_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Video with caption and description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
