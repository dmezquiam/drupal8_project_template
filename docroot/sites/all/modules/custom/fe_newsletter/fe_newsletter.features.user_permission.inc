<?php
/**
 * @file
 * fe_newsletter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fe_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp',
  );

  return $permissions;
}
