<?php
/**
 * @file
 * helpline_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function helpline_admin_user_default_roles() {
  $roles = array();

  // Exported role: Helpline Administrator.
  $roles['Helpline Administrator'] = array(
    'name' => 'Helpline Administrator',
    'weight' => '4',
  );

  // Exported role: Helpline Volunteer.
  $roles['Helpline Volunteer'] = array(
    'name' => 'Helpline Volunteer',
    'weight' => '3',
  );

  return $roles;
}
