<?php
/**
 * @file
 * fe_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_banner_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fe_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fe_banner_image_default_styles() {
  $styles = array();

  // Exported image style: banner_partners.
  $styles['banner_partners'] = array(
    'name' => 'banner_partners',
    'label' => 'banner_partners',
    'effects' => array(
      29 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 258,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fe_banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('An image with a mandatory link, can be shown alone at the Home Page or with some text when referring to partners at the About Page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
