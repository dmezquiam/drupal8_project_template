<?php
/**
 * @file
 * fe_chat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_chat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function fe_chat_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fe_chat_node_info() {
  $items = array(
    'chat' => array(
      'name' => t('Chat'),
      'base' => 'node_content',
      'description' => t('A page for event participants to use while an event is taking place.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
