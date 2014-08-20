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
  // Translatables
  // Included for use with string extractors like potx.
  t('Staff Members');
  t('Taxonomies');


  return $menu_links;
}
