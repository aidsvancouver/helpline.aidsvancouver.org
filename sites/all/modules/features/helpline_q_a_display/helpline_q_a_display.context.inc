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
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'preface',
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
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'postscript',
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
