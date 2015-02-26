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
    'name' => 'advertisement',
    'label' => 'Advertisement',
    'effects' => array(
      45 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
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
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
