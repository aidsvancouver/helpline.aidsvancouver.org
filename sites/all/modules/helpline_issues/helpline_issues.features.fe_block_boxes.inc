<?php
/**
 * @file
 * helpline_issues.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function helpline_issues_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Support Forum';
  $fe_block_boxes->format = 'markdown';
  $fe_block_boxes->machine_name = 'support_form';
  $fe_block_boxes->body = '<a href="http://localhost/helpline.aidsvanouver.org/public_html/issues" class="button ask-question">View the Support Forum</a>';

  $export['support_form'] = $fe_block_boxes;

  return $export;
}
