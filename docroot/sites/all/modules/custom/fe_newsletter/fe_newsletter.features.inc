<?php
/**
 * @file
 * fe_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fe_newsletter_node_info() {
  $items = array(
    'bulletin_email' => array(
      'name' => t('Bulletin email'),
      'base' => 'node_content',
      'description' => t('Use this content type to create newsletters that will be sent to IJNET user.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
