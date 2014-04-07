<?php
/**
 * @file
 * fe_opportunity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_opportunity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fe_opportunity_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fe_opportunity_node_info() {
  $items = array(
    'training_opportunity' => array(
      'name' => t('Opportunity'),
      'base' => 'node_content',
      'description' => t('An ICFJ Training Opportunity.  For example, a local workshop, seminar, or course.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
