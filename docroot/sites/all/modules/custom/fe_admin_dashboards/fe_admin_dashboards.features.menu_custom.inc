<?php
/**
 * @file
 * fe_admin_dashboards.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fe_admin_dashboards_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-dashboard.
  $menus['menu-dashboard'] = array(
    'menu_name' => 'menu-dashboard',
    'title' => 'Dashboard menu (editor)',
    'description' => 'Displays possible actions: create content, edit queues.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-dashboard-short.
  $menus['menu-dashboard-short'] = array(
    'menu_name' => 'menu-dashboard-short',
    'title' => 'Dashboard menu (blogger)',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-toolbar.
  $menus['menu-toolbar'] = array(
    'menu_name' => 'menu-toolbar',
    'title' => 'Toolbar',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard menu (blogger)');
  t('Dashboard menu (editor)');
  t('Displays possible actions: create content, edit queues.');
  t('Toolbar');


  return $menus;
}
