<?php
/**
 * @file
 * fe_banner.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fe_banner_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-banner-banner_partners'] = array(
    'cache' => -1,
    'css_class' => 'block-default',
    'custom' => 0,
    'delta' => 'banner-banner_partners',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'ijnet' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ijnet',
        'weight' => 0,
      ),
      'shiny' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'shiny',
        'weight' => 0,
      ),
      'shinytech' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'shinytech',
        'weight' => 0,
      ),
      'subtheme_adminimal_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subtheme_adminimal_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Our partners',
    'visibility' => 0,
  );

  return $export;
}
