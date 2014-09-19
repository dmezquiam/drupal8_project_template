<?php
/**
 * @file
 * fe_knight_foundation.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fe_knight_foundation_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fe_knight_foundation-knight_authors_tab'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'knight_authors_tab',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'fe_knight_foundation',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['jsonblocks-knight-foundation'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'knight-foundation',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'jsonblocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['quicktabs-knight_foundation'] = array(
    'cache' => -1,
    'css_class' => 'sidebar-tabs',
    'custom' => 0,
    'delta' => 'knight_foundation',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
    ),
    'title' => ' ',
    'visibility' => 0,
  );

  return $export;
}
