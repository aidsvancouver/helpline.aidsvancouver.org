<?php
/**
 * @file
 * helpline_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function helpline_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_additional_resources.
  $permissions['create field_additional_resources'] = array(
    'name' => 'create field_additional_resources',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_answer.
  $permissions['create field_answer'] = array(
    'name' => 'create field_answer',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create helpline_post content.
  $permissions['create helpline_post content'] = array(
    'name' => 'create helpline_post content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: create issues content.
  $permissions['create issues content'] = array(
    'name' => 'create issues content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any helpline_post content.
  $permissions['delete any helpline_post content'] = array(
    'name' => 'delete any helpline_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any issues content.
  $permissions['delete any issues content'] = array(
    'name' => 'delete any issues content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own helpline_post content.
  $permissions['delete own helpline_post content'] = array(
    'name' => 'delete own helpline_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own issues content.
  $permissions['delete own issues content'] = array(
    'name' => 'delete own issues content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any helpline_post content.
  $permissions['edit any helpline_post content'] = array(
    'name' => 'edit any helpline_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any issues content.
  $permissions['edit any issues content'] = array(
    'name' => 'edit any issues content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_additional_resources.
  $permissions['edit field_additional_resources'] = array(
    'name' => 'edit field_additional_resources',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_answer.
  $permissions['edit field_answer'] = array(
    'name' => 'edit field_answer',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own field_additional_resources.
  $permissions['edit own field_additional_resources'] = array(
    'name' => 'edit own field_additional_resources',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_answer.
  $permissions['edit own field_answer'] = array(
    'name' => 'edit own field_answer',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own helpline_post content.
  $permissions['edit own helpline_post content'] = array(
    'name' => 'edit own helpline_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own issues content.
  $permissions['edit own issues content'] = array(
    'name' => 'edit own issues content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: publish any content.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any helpline_post content.
  $permissions['publish any helpline_post content'] = array(
    'name' => 'publish any helpline_post content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any issues content.
  $permissions['publish any issues content'] = array(
    'name' => 'publish any issues content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable helpline_post content.
  $permissions['publish editable helpline_post content'] = array(
    'name' => 'publish editable helpline_post content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable issues content.
  $permissions['publish editable issues content'] = array(
    'name' => 'publish editable issues content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own helpline_post content.
  $permissions['publish own helpline_post content'] = array(
    'name' => 'publish own helpline_post content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own issues content.
  $permissions['publish own issues content'] = array(
    'name' => 'publish own issues content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: unpublish any content.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any helpline_post content.
  $permissions['unpublish any helpline_post content'] = array(
    'name' => 'unpublish any helpline_post content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any issues content.
  $permissions['unpublish any issues content'] = array(
    'name' => 'unpublish any issues content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable helpline_post content.
  $permissions['unpublish editable helpline_post content'] = array(
    'name' => 'unpublish editable helpline_post content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable issues content.
  $permissions['unpublish editable issues content'] = array(
    'name' => 'unpublish editable issues content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own helpline_post content.
  $permissions['unpublish own helpline_post content'] = array(
    'name' => 'unpublish own helpline_post content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own issues content.
  $permissions['unpublish own issues content'] = array(
    'name' => 'unpublish own issues content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: use text format markdown.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: view field_additional_resources.
  $permissions['view field_additional_resources'] = array(
    'name' => 'view field_additional_resources',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_answer.
  $permissions['view field_answer'] = array(
    'name' => 'view field_answer',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_additional_resources.
  $permissions['view own field_additional_resources'] = array(
    'name' => 'view own field_additional_resources',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_answer.
  $permissions['view own field_answer'] = array(
    'name' => 'view own field_answer',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view rate results page.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rate',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
