<?php
/**
 * @file
 * helpline_q_a_display.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function helpline_q_a_display_taxonomy_default_vocabularies() {
  return array(
    'question_categories' => array(
      'name' => 'Question Categories',
      'machine_name' => 'question_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
