<?php
/**
 * @file
 * helpline_q_a_display.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function helpline_q_a_display_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ask_question'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'ask_question',
    'module' => 'block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-disclaimer'] = array(
    'cache' => -1,
    'custom' => 0,
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
    'title' => 'Disclaimer',
    'visibility' => 0,
  );

  $export['block-footer_message'] = array(
    'cache' => -1,
    'custom' => 0,
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

  $export['views-question_categories-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'question_categories-block',
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
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-unanswered_questions-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'unanswered_questions-block',
    'module' => 'views',
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
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
