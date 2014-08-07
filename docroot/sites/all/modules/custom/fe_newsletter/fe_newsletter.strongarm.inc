<?php
/**
 * @file
 * fe_newsletter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fe_newsletter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_extra_fields';
  $strongarm->value = array(
    0 => 'First Name',
    1 => 'Middle Name',
    2 => 'Last Name',
    3 => 'Job Title',
    4 => 'Company Name',
    5 => 'Home Phone',
    6 => 'Work Phone',
    7 => 'Addr1',
    8 => 'Addr2',
    9 => 'Addr3',
    10 => 'City',
    11 => 'State Code',
    12 => 'State Name',
    13 => 'Country Code',
    14 => 'Country Name',
    15 => 'Postal Code',
    16 => 'Sub Postal Code',
    17 => 'Note',
    18 => 'CustomField1',
    19 => 'CustomField2',
    20 => 'CustomField3',
    21 => 'CustomField4',
    22 => 'CustomField5',
    23 => 'CustomField6',
    24 => 'CustomField7',
    25 => 'CustomField8',
    26 => 'CustomField9',
    27 => 'CustomField10',
    28 => 'CustomField11',
    29 => 'CustomField12',
    30 => 'CustomField13',
    31 => 'CustomField14',
    32 => 'CustomField15',
  );
  $export['cc_extra_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_extra_field_mappings';
  $strongarm->value = 'FirstName:field_first_name, MiddleName:field_middle_name, LastName:field_last_name, JobTitle:field_job_title, CompanyName:field_company_name, HomePhone:field_home_phone, WorkPhone:field_work_phone, Addr1:field_addr1, Addr2:field_addr2, Addr3:field_addr3, City:field_city, StateCode:field_state_code, StateName:field_state_name, CountryCode:field_country_code, CountryName:field_country_name, PostalCode:field_postal_code, SubPostalCode:field_sub_postal_code, Note:field_note, CustomField1:field_customfield1, CustomField2:field_customfield2, CustomField3:field_customfield3, CustomField4:field_customfield4, CustomField5:field_customfield5, CustomField6:field_customfield6, CustomField7:field_customfield7, CustomField8:field_customfield8, CustomField9:field_customfield9, CustomField10:field_customfield10, CustomField11:field_customfield11, CustomField12:field_customfield12, CustomField13:field_customfield13, CustomField14:field_customfield14, CustomField15:field_customfield15';
  $export['cc_extra_field_mappings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_password';
  $strongarm->value = 'qwerty123';
  $export['cc_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_path';
  $strongarm->value = 'sites/all/modules/contrib/constant_contact';
  $export['cc_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_username';
  $strongarm->value = 'miquel@easytech.com.ar';
  $export['cc_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_bulletin_email';
  $strongarm->value = 0;
  $export['comment_anonymous_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_bulletin_email';
  $strongarm->value = '1';
  $export['comment_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_bulletin_email';
  $strongarm->value = 0;
  $export['comment_default_mode_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_bulletin_email';
  $strongarm->value = '50';
  $export['comment_default_per_page_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_bulletin_email';
  $strongarm->value = 0;
  $export['comment_form_location_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_bulletin_email';
  $strongarm->value = '0';
  $export['comment_preview_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_bulletin_email';
  $strongarm->value = 0;
  $export['comment_subject_field_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__bulletin_email';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'short_teaser' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_bulletin_email';
  $strongarm->value = '1';
  $export['i18n_node_extended_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_bulletin_email';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_bulletin_email';
  $strongarm->value = '2';
  $export['language_content_type_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_bulletin_email';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_bulletin_email';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_bulletin_email';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_bulletin_email';
  $strongarm->value = '0';
  $export['node_preview_bulletin_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_bulletin_email';
  $strongarm->value = 1;
  $export['node_submitted_bulletin_email'] = $strongarm;

  return $export;
}
