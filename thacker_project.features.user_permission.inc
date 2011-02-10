<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function thacker_project_user_default_permissions() {
  $permissions = array();

  // Exported permission: create dt_project content
  $permissions['create dt_project content'] = array(
    'name' => 'create dt_project content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own dt_project content
  $permissions['delete own dt_project content'] = array(
    'name' => 'delete own dt_project content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own dt_project content
  $permissions['edit own dt_project content'] = array(
    'name' => 'edit own dt_project content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
