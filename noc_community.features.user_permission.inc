<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function noc_community_user_default_permissions() {
  $permissions = array();

  // Exported permission: create community content
  $permissions['create community content'] = array(
    'name' => 'create community content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any community content
  $permissions['delete any community content'] = array(
    'name' => 'delete any community content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own community content
  $permissions['delete own community content'] = array(
    'name' => 'delete own community content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit any community content
  $permissions['edit any community content'] = array(
    'name' => 'edit any community content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own community content
  $permissions['edit own community content'] = array(
    'name' => 'edit own community content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view users outside groups
  $permissions['view users outside groups'] = array(
    'name' => 'view users outside groups',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
