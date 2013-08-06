<?php
/**
 * @file
 * helpline_q_a_display.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function helpline_q_a_display_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content_preface',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar',
          'weight' => '-13',
        ),
        'views-question_categories-block' => array(
          'module' => 'views',
          'delta' => 'question_categories-block',
          'region' => 'sidebar',
          'weight' => '-12',
        ),
        'views-question_categories-block_1' => array(
          'module' => 'views',
          'delta' => 'question_categories-block_1',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['site_wide'] = $context;

  return $export;
}
