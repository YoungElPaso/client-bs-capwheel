<?php
/**
 * @file
 * basic_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function basic_content_types_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Basic Page content type.'),
      'has_title' => '1',
      'title_label' => t('Page Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('FAQ Content Type.'),
      'has_title' => '1',
      'title_label' => t('FAQ Title'),
      'help' => '',
    ),
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Job content type.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
    'press_and_news' => array(
      'name' => t('Press and News'),
      'base' => 'node_content',
      'description' => t('Press and News Content Type.'),
      'has_title' => '1',
      'title_label' => t('Press or News Title'),
      'help' => '',
    ),
    'ticket' => array(
      'name' => t('Ticket'),
      'base' => 'node_content',
      'description' => t('Ticket content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter the information for a ticket here.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
