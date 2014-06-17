<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function ijnet_brick_66_33_panels_layouts() {
  $items['brick_66_33'] = array(
    'title' => t('IJNET 66/33 brick'),
    'category' => t('AT Responsive Panels - 2 column'),
    'icon' => 'brick_66_33.png',
    'theme' => 'brick_66_33',
    'admin css' => 'brick_66_33.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'brick_66_33_first'       => t('Left'),
      'brick_66_33_second'      => t('Right'),
      'brick_66_33_left_below'  => t('Left below'),
      'brick_66_33_right_below' => t('Right below'),
    ),
    // AT Core
    'type' => 'two',
    'options' => array(
      'two-66-33' => 'default',
      'two-66-33-stack' => 'stack',
    ),
    'styles' => array(
      'two-66-33' => array(
        'css' => array(
          '66' => array('.two-66-33 > .region-two-66-33-first' => 'width:66.666666%'),
          '33' => array('.two-66-33 > .region-two-66-33-second' => 'width:330.333333px'),
        ),
      ),
      'two-66-33-stack' => array(
        'css' => array(
          'fdw' => array('.two-66-33 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for two-66-33.php
 */
function template_preprocess_brick_66_33(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
