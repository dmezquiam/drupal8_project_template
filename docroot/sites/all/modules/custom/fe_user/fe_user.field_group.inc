<?php
/**
 * @file
 * fe_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fe_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|user|user|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'account',
      1 => 'group_your_background',
      2 => 'group_your_preferences',
      3 => 'group_your_profile',
      4 => 'group_your_work',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-general field-group-tabs',
      ),
    ),
  );
  $export['group_general|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_background|user|user|form';
  $field_group->group_name = 'group_your_background';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Your Background',
    'weight' => '4',
    'children' => array(
      0 => 'field_resume',
      1 => 'field_bio',
      2 => 'field_blog',
      3 => 'field_languages_spoken',
      4 => 'field_short_bio',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_your_background|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_preferences|user|user|form';
  $field_group->group_name = 'group_your_preferences';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Your Preferences',
    'weight' => '5',
    'children' => array(
      0 => 'field_subscribe',
      1 => 'field_topic',
      2 => 'field_show_profile',
      3 => 'timezone',
      4 => 'contact',
      5 => 'locale',
      6 => 'wysiwyg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_your_preferences|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_profile|user|user|form';
  $field_group->group_name = 'group_your_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Your profile settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_screen_name',
      1 => 'field_twitter',
      2 => 'field_location',
      3 => 'picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Your profile settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_your_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_work|user|user|form';
  $field_group->group_name = 'group_your_work';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Your Work',
    'weight' => '3',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_organization_name',
      2 => 'field_organization_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_your_work|user|user|form'] = $field_group;

  return $export;
}
