<?php
/**
 * @file
 * helpline_issues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helpline_issues_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function helpline_issues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function helpline_issues_node_info() {
  $items = array(
    'issues' => array(
      'name' => t('Issues'),
      'base' => 'node_content',
      'description' => t('Bug reports, feature requests or general inquiries.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
