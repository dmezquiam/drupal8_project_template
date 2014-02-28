<?php
/**
 * @file
 * fe_videos.features.inc
 */

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
