<?php
/**
 * @file
 * fe_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fe_user_user_default_roles() {
  $roles = array();

  // Exported role: blogger.
  $roles['blogger'] = array(
    'name' => 'blogger',
    'weight' => 4,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}
