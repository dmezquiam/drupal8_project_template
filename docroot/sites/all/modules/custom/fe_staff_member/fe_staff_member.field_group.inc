<?php
/**
 * @file
 * fe_staff_member.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fe_staff_member_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|staff_member|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_member';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Member\'s information',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
      1 => 'field_bio',
      2 => 'field_job_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Member\'s information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-information field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_information|node|staff_member|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|staff_member|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_member';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_tabs|node|staff_member|form'] = $field_group;

  return $export;
}
