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
    'name' => 'featured_newsletter_img',
    'label' => 'featured_newsletter_img',
    'effects' => array(
      28 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 130,
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
