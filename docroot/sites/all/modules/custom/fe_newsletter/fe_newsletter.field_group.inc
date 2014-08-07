<?php
/**
 * @file
 * fe_newsletter.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fe_newsletter_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_content|node|bulletin_email|form';
  $field_group->group_name = 'group_newsletter_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bulletin_email';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_newsletter_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'field_opportunities',
      2 => 'field_number_of_advertisements',
      3 => 'field_other_content',
      4 => 'field_advertisements',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-newsletter-content field-group-tab',
        'description' => 'Specify what content you would like to include in the newsletter.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_newsletter_content|node|bulletin_email|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_dates|node|bulletin_email|form';
  $field_group->group_name = 'group_newsletter_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bulletin_email';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_newsletter_tabs';
  $field_group->data = array(
    'label' => 'Dates',
    'weight' => '11',
    'children' => array(
      0 => 'field_from_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-newsletter-dates field-group-tab',
        'description' => 'Include news and videos from the range of specified dates.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_newsletter_dates|node|bulletin_email|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_tabs|node|bulletin_email|form';
  $field_group->group_name = 'group_newsletter_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bulletin_email';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_newsletter_dates',
      1 => 'group_newsletter_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-newsletter-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_newsletter_tabs|node|bulletin_email|form'] = $field_group;

  return $export;
}
