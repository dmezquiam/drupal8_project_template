<?php
/**
 * @file
 * fe_admin_dashboards.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fe_admin_dashboards_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-dashboard_basic-pages:admin/dashboard/content/basic-pages
  $menu_links['menu-dashboard_basic-pages:admin/dashboard/content/basic-pages'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/basic-pages',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'Basic Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_basic-pages:admin/dashboard/content/basic-pages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_news:admin/dashboard/content/news
  $menu_links['menu-dashboard_news:admin/dashboard/content/news'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/news',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_news:admin/dashboard/content/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_other-content:<nolink>
  $menu_links['menu-dashboard_other-content:<nolink>'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Other content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_other-content:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_staff-members:admin/dashboard/staff
  $menu_links['menu-dashboard_staff-members:admin/dashboard/staff'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/staff',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Staff Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_staff-members:admin/dashboard/staff',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-dashboard_other-content:<nolink>',
  );
  // Exported menu link: menu-dashboard_taxonomies:admin/dashboard/taxonomies
  $menu_links['menu-dashboard_taxonomies:admin/dashboard/taxonomies'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/taxonomies',
    'router_path' => 'admin/dashboard/taxonomies',
    'link_title' => 'Taxonomies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_taxonomies:admin/dashboard/taxonomies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-dashboard_other-content:<nolink>',
  );
  // Exported menu link: menu-dashboard_videos:admin/dashboard/content/videos
  $menu_links['menu-dashboard_videos:admin/dashboard/content/videos'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/videos',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_videos:admin/dashboard/content/videos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Pages');
  t('News');
  t('Other content');
  t('Staff Members');
  t('Taxonomies');
  t('Videos');


  return $menu_links;
}
