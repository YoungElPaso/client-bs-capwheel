<?php
/**
 * @file
 * cap_wheel_slick.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cap_wheel_slick_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-3c07d29d0d7888124392329227f97d75'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3c07d29d0d7888124392329227f97d75',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vader' => array(
        'region' => 'main_top',
        'status' => 1,
        'theme' => 'vader',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
