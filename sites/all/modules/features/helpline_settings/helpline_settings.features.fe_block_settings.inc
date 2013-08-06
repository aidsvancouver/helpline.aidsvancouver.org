<?php
/**
 * @file
 * helpline_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function helpline_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-disclaimer'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'disclaimer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'bourbon_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bourbon_subtheme',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Disclaimer',
    'visibility' => '0',
  );

  $export['block-footer_message'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'footer_message',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'bourbon_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bourbon_subtheme',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
