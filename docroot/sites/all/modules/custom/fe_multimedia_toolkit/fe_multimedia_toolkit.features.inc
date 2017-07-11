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

/**
 * Implements hook_paragraphs_info().
 */
function fe_multimedia_toolkit_paragraphs_info() {
  $items = array(
    'toolkit_resources' => array(
      'name' => 'Toolkit Resources',
      'bundle' => 'toolkit_resources',
      'locked' => '1',
    ),
    'toolkit_resources_group' => array(
      'name' => 'Toolkit Resources Group',
      'bundle' => 'toolkit_resources_group',
      'locked' => '1',
    ),
  );
  return $items;
}
