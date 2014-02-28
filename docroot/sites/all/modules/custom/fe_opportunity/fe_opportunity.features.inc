<?php
/**
 * @file
 * fe_opportunity.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fe_opportunity_node_info() {
  $items = array(
    'training_opportunity' => array(
      'name' => t('Opportunity'),
      'base' => 'node_content',
      'description' => t('An ICFJ Training Opportunity.  For example, a local workshop, seminar, or course.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
