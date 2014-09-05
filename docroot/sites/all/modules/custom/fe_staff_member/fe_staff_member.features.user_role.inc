<?php
/**
 * @file
 * fe_staff_member.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fe_staff_member_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}
