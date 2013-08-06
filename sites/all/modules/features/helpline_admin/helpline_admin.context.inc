<?php
/**
 * @file
 * helpline_admin.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function helpline_admin_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'helpline_admin';
  $context->description = '';
  $context->tag = 'admin';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Helpline Administrator' => 'Helpline Administrator',
        'Helpline Volunteer' => 'Helpline Volunteer',
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('admin');
  $export['helpline_admin'] = $context;

  return $export;
}
