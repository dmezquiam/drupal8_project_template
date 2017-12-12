<?php
/**
 * @file
 * fe_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function fe_newsletter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fe_newsletter_image_default_styles() {
  $styles = array();

  // Exported image style: featured_newsletter_img.
  $styles['featured_newsletter_img'] = array(
    'label' => 'Newsletter images',
    'effects' => array(
      34 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'newsletter_first',
          'apply_all_effects' => 1,
        ),
        'weight' => 0,
      ),
      33 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: newsletter_first.
  $styles['newsletter_first'] = array(
    'label' => 'Newsletter first image',
    'effects' => array(
      30 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 600,
          'height' => 420,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'newsletter_first',
        ),
        'weight' => 0,
      ),
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 420,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
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
  drupal_alter('node_info', $items);
  return $items;
}
