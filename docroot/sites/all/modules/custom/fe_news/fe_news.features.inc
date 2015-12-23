<?php
/**
 * @file
 * fe_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
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
function fe_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fe_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_large.
  $styles['news_large'] = array(
    'label' => 'News Large',
    'effects' => array(
      25 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_medium.
  $styles['news_medium'] = array(
    'label' => 'News Medium',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 372,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_small.
  $styles['news_small'] = array(
    'label' => 'News Small',
    'effects' => array(
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 186,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_square.
  $styles['news_square'] = array(
    'label' => 'news_square',
    'effects' => array(
      37 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 306,
          'height' => 294,
          'keepproportions' => 1,
          'style_name' => 'news_square',
        ),
        'weight' => 0,
      ),
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => ' 306',
          'height' => 294,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: news_wide.
  $styles['news_wide'] = array(
    'label' => 'news_wide',
    'effects' => array(
      30 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 629,
          'height' => 305,
          'keepproportions' => 1,
          'style_name' => 'news_wide',
        ),
        'weight' => 0,
      ),
      33 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 629,
          'height' => 305,
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
function fe_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A typical article'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
