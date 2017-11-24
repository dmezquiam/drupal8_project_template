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
  $quicktabs->machine_name = 'content_actions_dashboard';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: Content Action';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'block_10',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Administer comments',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'last_content',
      'display' => 'block_9',
      'args' => '',
      'use_title' => 0,
      'title' => 'Scheduled content',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'path' => 'admin/dashboard/content-statistics',
      'use_title' => TRUE,
      'title' => 'Content statistics',
      'weight' => '-98',
      'type' => 'callback',
    ),
    3 => array(
      'path' => 'admin/config/regional/translate/translate',
      'use_title' => TRUE,
      'title' => 'Translate interface',
      'weight' => '-97',
      'type' => 'callback',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administer comments');
  t('Content statistics');
  t('DashH: Content Action');
  t('Scheduled content');
  t('Translate interface');

  $export['content_actions_dashboard'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashboard_available_actions_quic';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Dashboard: Available actions';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'dashh_latest_content',
      'title' => 'Latest content',
      'weight' => '-100',
      'type' => 'qtabs',
    ),
    1 => array(
      'machine_name' => 'dashh_news',
      'title' => 'News',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
    2 => array(
      'machine_name' => 'resources_dashboard',
      'title' => 'Resources',
      'weight' => '-98',
      'type' => 'qtabs',
    ),
    3 => array(
      'machine_name' => 'dashh_opportunities',
      'title' => 'Opportunities',
      'weight' => '-97',
      'type' => 'qtabs',
    ),
    4 => array(
      'machine_name' => 'dashh_bulletin',
      'title' => 'Bulletin',
      'weight' => '-96',
      'type' => 'qtabs',
    ),
    5 => array(
      'machine_name' => 'other_content_dashboard',
      'title' => 'Other content',
      'weight' => '-95',
      'type' => 'qtabs',
    ),
    6 => array(
      'machine_name' => 'content_actions_dashboard',
      'title' => 'Content Actions',
      'weight' => '-94',
      'type' => 'qtabs',
    ),
    7 => array(
      'machine_name' => 'dashh_users',
      'title' => 'Users',
      'weight' => '-89',
      'type' => 'qtabs',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Navlist';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Bulletin');
  t('Content Actions');
  t('Dashboard: Available actions');
  t('Latest content');
  t('News');
  t('Opportunities');
  t('Other content');
  t('Resources');
  t('Users');

  $export['dashboard_available_actions_quic'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashboard_taxonomies_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 999999;
  $quicktabs->title = 'DashH: Taxonomies quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'taxonomies_editor',
      'display' => 'block',
      'args' => '',
      'use_title' => 0,
      'title' => 'Regions',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'taxonomies_editor',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'Topics',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'taxonomies_editor',
      'display' => 'block_2',
      'args' => '',
      'use_title' => 0,
      'title' => 'Tags',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DashH: Taxonomies quicktab');
  t('Regions');
  t('Tags');
  t('Topics');

  $export['dashboard_taxonomies_quicktab'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashh_bulletin';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: Bulletin';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'block_8',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Bulletin',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bulletin');
  t('DashH: Bulletin');

  $export['dashh_bulletin'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashh_latest_content';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: Latest Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'editor_content_view',
      'args' => '',
      'use_title' => 0,
      'title' => 'Latest content',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DashH: Latest Content');
  t('Latest content');

  $export['dashh_latest_content'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashh_news';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: News';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'block_3',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'News',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DashH: News');
  t('News');

  $export['dashh_news'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashh_opportunities';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: Opportunities';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'block_5',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Opportunities',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DashH: Opportunities');
  t('Opportunities');

  $export['dashh_opportunities'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashh_users';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: Users';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'user_information',
      'display' => 'block_1',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Users',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DashH: Users');
  t('Users');

  $export['dashh_users'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'other_content_dashboard';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: Other content ';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'block_4',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Advertisements',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'last_content',
      'display' => 'block_7',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Banners',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'last_content',
      'display' => 'block_6',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Chats',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'last_content',
      'display' => 'block_2',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Videos',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'last_content',
      'display' => 'editors_basic_pages_block',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Basic Pages',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'last_content',
      'display' => 'block_1',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Staff Members',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'machine_name' => 'dashboard_taxonomies_quicktab',
      'title' => 'Taxonomies',
      'weight' => '-94',
      'type' => 'qtabs',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Advertisements');
  t('Banners');
  t('Basic Pages');
  t('Chats');
  t('DashH: Other content ');
  t('Staff Members');
  t('Taxonomies');
  t('Videos');

  $export['other_content_dashboard'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'resources_dashboard';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'DashH: Resources';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'last_content',
      'display' => 'dashboard_resources_view',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Resources view',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'last_content',
      'display' => 'dashboard_toolkits_view',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Multimedia Toolkit view',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DashH: Resources');
  t('Multimedia Toolkit view');
  t('Resources view');

  $export['resources_dashboard'] = $quicktabs;

  return $export;
}
