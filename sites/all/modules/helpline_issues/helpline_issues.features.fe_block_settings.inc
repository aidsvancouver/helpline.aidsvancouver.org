<?php
/**
 * @file
 * helpline_issues.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function helpline_issues_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-support_form'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'support_form',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'Helpline Administrator' => 5,
      'Helpline Volunteer' => 4,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bourbon_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bourbon_subtheme',
        'weight' => 0,
      ),
      'helpline' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'helpline',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-question_categories-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'question_categories-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bourbon_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bourbon_subtheme',
        'weight' => 0,
      ),
      'helpline' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'helpline',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
