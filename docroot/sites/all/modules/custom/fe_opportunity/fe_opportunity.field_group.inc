<?php
/**
 * @file
 * fe_opportunity.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fe_opportunity_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorization|node|training_opportunity|form';
  $field_group->group_name = 'group_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '17',
    'children' => array(
      0 => 'field_category',
      1 => 'field_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categorization field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categorization|node|training_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|training_opportunity|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '16',
    'children' => array(
      0 => 'body',
      1 => 'field_organization',
      2 => 'field_cost',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|training_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|training_opportunity|form';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Date',
    'weight' => '15',
    'children' => array(
      0 => 'field_date',
      1 => 'field_deadline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_date|node|training_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|training_opportunity|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '18',
    'children' => array(
      0 => 'field_related_content',
      1 => 'field_document',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|training_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|training_opportunity|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_date',
      1 => 'group_content',
      2 => 'group_categorization',
      3 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_tabs|node|training_opportunity|form'] = $field_group;

  return $export;
}
