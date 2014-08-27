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

  // Exported menu link: menu-dashboard_advertisements:admin/dashboard/content/advertisements
  $menu_links['menu-dashboard_advertisements:admin/dashboard/content/advertisements'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/advertisements',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'Advertisements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_advertisements:admin/dashboard/content/advertisements',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_banners:admin/dashboard/content/banners
  $menu_links['menu-dashboard_banners:admin/dashboard/content/banners'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/banners',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'Banners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_banners:admin/dashboard/content/banners',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
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
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-dashboard_other-content:<nolink>',
  );
  // Exported menu link: menu-dashboard_bulletin-emails:admin/dashboard/content/bulletins
  $menu_links['menu-dashboard_bulletin-emails:admin/dashboard/content/bulletins'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/bulletins',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'Bulletin Emails',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_bulletin-emails:admin/dashboard/content/bulletins',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_chats:admin/dashboard/content/chats
  $menu_links['menu-dashboard_chats:admin/dashboard/content/chats'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/chats',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'Chats',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_chats:admin/dashboard/content/chats',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
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
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_opportunities:admin/dashboard/content/opportunities
  $menu_links['menu-dashboard_opportunities:admin/dashboard/content/opportunities'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/content/opportunities',
    'router_path' => 'admin/dashboard/content',
    'link_title' => 'Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_opportunities:admin/dashboard/content/opportunities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
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
    'weight' => -42,
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
    'weight' => -49,
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
    'weight' => -48,
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
  t('Advertisements');
  t('Banners');
  t('Basic Pages');
  t('Bulletin Emails');
  t('Chats');
  t('News');
  t('Opportunities');
  t('Other content');
  t('Staff Members');
  t('Taxonomies');
  t('Videos');


  return $menu_links;
}
