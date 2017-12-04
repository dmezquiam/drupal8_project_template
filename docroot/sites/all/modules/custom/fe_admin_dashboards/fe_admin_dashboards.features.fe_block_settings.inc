<?php
/**
 * @file
 * fe_admin_dashboards.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fe_admin_dashboards_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-dashboard_content_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'dashboard_content_header',
    'module' => 'block',
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
    'title' => 'Content Header',
    'visibility' => 0,
  );

  $export['block-dashboard_staff_member_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'dashboard_staff_member_header',
    'module' => 'block',
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
    'title' => 'Staff member header',
    'visibility' => 0,
  );

  $export['block-dashboard_taxonomies_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'dashboard_taxonomies_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin/dashboard/taxonomies',
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
    'title' => 'Taxonomies',
    'visibility' => 1,
  );

  $export['menu-menu-dashboard'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-dashboard',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu',
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
    'title' => 'Available actions',
    'visibility' => 0,
  );

  $export['menu-menu-dashboard-short'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-dashboard-short',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-toolbar'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-toolbar',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['quicktabs-dashboard_available_actions_quic'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dashboard_available_actions_quic',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-64f0e23d3fe27a31b7c1ae60f305b693'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '64f0e23d3fe27a31b7c1ae60f305b693',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-f930ac3e5ff3b8d26889295145938d8d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f930ac3e5ff3b8d26889295145938d8d',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'blogger' => 5,
    ),
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
        'weight' => -39,
      ),
      'subtheme_adminimal_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subtheme_adminimal_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-last_content-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'last_content-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-last_content-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'last_content-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-last_content-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'last_content-block_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-user_information-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user_information-block',
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
    'title' => 'Your information',
    'visibility' => 0,
  );

  return $export;
}
