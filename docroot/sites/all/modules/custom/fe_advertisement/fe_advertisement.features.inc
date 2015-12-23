<?php
/**
 * @file
 * fe_advertisement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_advertisement_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fe_advertisement_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fe_advertisement_image_default_styles() {
  $styles = array();

  // Exported image style: advertisement.
  $styles['advertisement'] = array(
    'label' => 'Advertisement',
    'effects' => array(
      45 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 100,
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'advertisement',
        ),
        'weight' => 0,
      ),
      47 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fe_advertisement_node_info() {
  $items = array(
    'advertisement' => array(
      'name' => t('Advertisement'),
      'base' => 'node_content',
      'description' => t('An Advertisement contains a title, body and summary and optionally an image. A list of Advertisements will be shown on the Homepage. To make sure your Advertisement gets there you have to add it to the queue once it\'s been created.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
