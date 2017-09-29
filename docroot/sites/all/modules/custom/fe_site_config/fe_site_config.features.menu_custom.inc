<?php
/**
 * @file
 * fe_site_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fe_site_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');

  return $menus;
}
