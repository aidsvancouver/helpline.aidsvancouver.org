<?php
/**
 * @file
 * helpline_issues.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function helpline_issues_taxonomy_default_vocabularies() {
  return array(
    'issue_types' => array(
      'name' => 'Issue Types',
      'machine_name' => 'issue_types',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
