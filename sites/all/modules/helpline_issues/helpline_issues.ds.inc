<?php
/**
 * @file
 * helpline_issues.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function helpline_issues_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|issues|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'issues';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
  );
  $export['node|issues|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function helpline_issues_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|issues|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'issues';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'submitted_by',
        1 => 'field_issue_category',
        2 => 'field_priority',
        3 => 'body',
        4 => 'flippy_pager',
        5 => 'comments',
      ),
    ),
    'fields' => array(
      'submitted_by' => 'ds_content',
      'field_issue_category' => 'ds_content',
      'field_priority' => 'ds_content',
      'body' => 'ds_content',
      'flippy_pager' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|issues|default'] = $ds_layout;

  return $export;
}
