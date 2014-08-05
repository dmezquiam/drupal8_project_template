<?php
/**
 * @file
 * fe_staff_member.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_staff_member_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fe_staff_member_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function fe_staff_member_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: staff
  $nodequeues['staff'] = array(
    'name' => 'staff',
    'title' => 'Staff',
    'subqueue_title' => 'Staff',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'smartqueue_language',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 'a:2:{s:9:"languages";s:7:"enabled";s:16:"language_neutral";i:0;}',
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 7,
    'types' => array(
      0 => 'staff_member',
    ),
    'roles' => array(
      0 => 'editor',
    ),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function fe_staff_member_image_default_styles() {
  $styles = array();

  // Exported image style: staff_picture.
  $styles['staff_picture'] = array(
    'name' => 'staff_picture',
    'label' => 'staff_picture',
    'effects' => array(
      22 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 110,
          'height' => 110,
          'keepproportions' => 1,
          'style_name' => 'staff_picture',
        ),
        'weight' => 0,
      ),
      23 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 110,
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
function fe_staff_member_node_info() {
  $items = array(
    'staff_member' => array(
      'name' => t('Staff member'),
      'base' => 'node_content',
      'description' => t('A staff member has a full name, picture, job title and a bio.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
