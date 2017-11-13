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
  $quicktabs->machine_name = 'dashboard_available_actions_quic';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Available actions';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'editor_content_view',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Latest content',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'last_content',
      'display' => 'block_4',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Advertisements',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'last_content',
      'display' => 'block_7',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Banners',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'last_content',
      'display' => 'block_8',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Bulletin Emails',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'last_content',
      'display' => 'block_6',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Chats',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'last_content',
      'display' => 'dashboard_toolkits_view',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Multimedia Toolkit',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'last_content',
      'display' => 'block_3',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'News',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'last_content',
      'display' => 'block_5',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Opportunities',
      'weight' => '-93',
      'type' => 'view',
    ),
    8 => array(
      'vid' => 'last_content',
      'display' => 'dashboard_resources_view',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Resources',
      'weight' => '-92',
      'type' => 'view',
    ),
    9 => array(
      'vid' => 'last_content',
      'display' => 'block_2',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Videos',
      'weight' => '-91',
      'type' => 'view',
    ),
    10 => array(
      'vid' => 'last_content',
      'display' => 'block_10',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Administer comments',
      'weight' => '-90',
      'type' => 'view',
    ),
    11 => array(
      'vid' => 'last_content',
      'display' => 'block_9',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Scheduled content',
      'weight' => '-89',
      'type' => 'view',
    ),
    12 => array(
      'vid' => 'last_content',
      'display' => 'editors_basic_pages_block',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Basic Pages',
      'weight' => '-88',
      'type' => 'view',
    ),
    13 => array(
      'vid' => 'last_content',
      'display' => 'block_1',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Staff Members',
      'weight' => '-87',
      'type' => 'view',
    ),
    14 => array(
      'machine_name' => 'dashboard_taxonomies_quicktab',
      'title' => 'Taxonomies',
      'weight' => '-86',
      'type' => 'qtabs',
    ),
    15 => array(
      'path' => 'admin/config/regional/translate/translate',
      'use_title' => TRUE,
      'title' => 'Translate interface',
      'weight' => '-85',
      'type' => 'callback',
    ),
    16 => array(
      'vid' => 'user_information',
      'display' => 'block_1',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Listed users',
      'weight' => '-84',
      'type' => 'view',
    ),
    17 => array(
      'path' => 'admin/dashboard/content-statistics',
      'use_title' => TRUE,
      'title' => 'Content statistics',
      'weight' => '-83',
      'type' => 'callback',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Administer comments');
  t('Advertisements');
  t('Available actions');
  t('Banners');
  t('Basic Pages');
  t('Bulletin Emails');
  t('Chats');
  t('Content statistics');
  t('Latest content');
  t('Listed users');
  t('Multimedia Toolkit');
  t('News');
  t('Opportunities');
  t('Resources');
  t('Scheduled content');
  t('Staff Members');
  t('Taxonomies');
  t('Translate interface');
  t('Videos');

  $export['dashboard_available_actions_quic'] = $quicktabs;

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
    2 => array(
      'vid' => 'taxonomies_editor',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Tags',
      'weight' => '-98',
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
  t('Tags');
  t('Topics');

  $export['dashboard_taxonomies_quicktab'] = $quicktabs;

  return $export;
}
