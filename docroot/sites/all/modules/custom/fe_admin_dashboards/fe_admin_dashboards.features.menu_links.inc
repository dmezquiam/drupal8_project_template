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

  // Exported menu link: menu-dashboard_basic-pages:admin/dashboard/basic-pages
  $menu_links['menu-dashboard_basic-pages:admin/dashboard/basic-pages'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/basic-pages',
    'router_path' => 'admin/dashboard/basic-pages',
    'link_title' => 'Basic Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_basic-pages:admin/dashboard/basic-pages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_create-content:admin/dashboard
  $menu_links['menu-dashboard_create-content:admin/dashboard'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Create content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_create-content:admin/dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-dashboard_nodequeues:admin/dashboard/nodequeues
  $menu_links['menu-dashboard_nodequeues:admin/dashboard/nodequeues'] = array(
    'menu_name' => 'menu-dashboard',
    'link_path' => 'admin/dashboard/nodequeues',
    'router_path' => 'admin/dashboard/nodequeues',
    'link_title' => 'Nodequeues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-dashboard_nodequeues:admin/dashboard/nodequeues',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
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
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
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
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Pages');
  t('Create content');
  t('Nodequeues');
  t('Staff Members');
  t('Taxonomies');


  return $menu_links;
}
