<?php
/**
 * @file
 * fe_admin_dashboards.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function fe_admin_dashboards_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashboard_taxonomies_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Dashboard: Taxonomies quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'taxonomies_editor',
      'display' => 'block',
      'args' => '',
      'title' => 'Regions',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'taxonomies_editor',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Topics',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard: Taxonomies quicktab');
  t('Regions');
  t('Topics');

  $export['dashboard_taxonomies_quicktab'] = $quicktabs;

  return $export;
}
