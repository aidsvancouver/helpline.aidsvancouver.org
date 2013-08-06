<?php
/**
 * @file
 * helpline_q_a_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helpline_q_a_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function helpline_q_a_display_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function helpline_q_a_display_node_info() {
  $items = array(
    'helpline_post' => array(
      'name' => t('Helpline Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
