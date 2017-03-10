<?php
/**
 * @file
 * fe_admin_dashboards.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fe_admin_dashboards_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access_site_dashboard'.
  $permissions['access_site_dashboard'] = array(
    'name' => 'access_site_dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'blogger' => 'blogger',
      'editor' => 'editor',
    ),
    'module' => 'fe_admin_dashboards',
  );

  return $permissions;
}
