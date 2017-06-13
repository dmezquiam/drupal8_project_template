<?php
/**
 * @file
 * fe_multimedia_toolkit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_multimedia_toolkit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fe_multimedia_toolkit_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fe_multimedia_toolkit_node_info() {
  $items = array(
    'multimedia_toolkit' => array(
      'name' => t('Multimedia Toolkit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
