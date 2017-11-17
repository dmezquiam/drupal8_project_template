<?php
/**
 * @file
 * fe_database_backup.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fe_database_backup_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'quick_backup',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'backup_migrate',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
