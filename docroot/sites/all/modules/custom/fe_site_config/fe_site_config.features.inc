<?php
/**
 * @file
 * fe_site_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_site_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fe_site_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fe_site_config_image_default_styles() {
  $styles = array();

  // Exported image style: avatar_img.
  $styles['avatar_img'] = array(
    'label' => 'avatar_img',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 183,
          'height' => 172,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: avatar_small_img.
  $styles['avatar_small_img'] = array(
    'label' => 'avatar_small_img',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_img.
  $styles['featured_img'] = array(
    'label' => 'featured_img',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 628,
          'height' => 305,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_small_img.
  $styles['featured_small_img'] = array(
    'label' => 'featured_small_img',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 262,
          'height' => 132,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: item_list_img.
  $styles['item_list_img'] = array(
    'label' => 'item_list_img',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 157,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: item_list_img_mobile_landscape.
  $styles['item_list_img_mobile_landscape'] = array(
    'label' => 'item_list_img_mobile_landscape',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 731,
          'height' => 357,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: item_video_list_img.
  $styles['item_video_list_img'] = array(
    'label' => 'item_video_list_img',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 259,
          'height' => 194,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'sites/default/files/player_icon.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
