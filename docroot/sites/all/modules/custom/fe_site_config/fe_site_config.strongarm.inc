<?php
/**
 * @file
 * fe_site_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fe_site_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lang_dropdown_167';
  $strongarm->value = array(
    'showall' => 0,
    'tohome' => 0,
    'width' => 165,
    'display' => 1,
    'widget' => 0,
    'msdropdown' => array(
      'visible_rows' => NULL,
      'rounded' => NULL,
      'animation' => NULL,
      'event' => NULL,
      'skin' => NULL,
      'custom_skin' => NULL,
    ),
    'chosen' => array(
      'disable_search' => NULL,
      'no_results_text' => NULL,
    ),
    'ddslick' => array(
      'ddslick_height' => NULL,
      'showSelectedHTML' => 1,
      'imagePosition' => 'left',
      'skin' => NULL,
      'custom_skin' => NULL,
    ),
    'languageicons' => array(
      'flag_position' => 1,
    ),
  );
  $export['lang_dropdown_167'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lang_dropdown_language_content';
  $strongarm->value = array(
    'showall' => 0,
    'tohome' => 0,
    'width' => 165,
    'display' => 1,
    'widget' => 3,
    'msdropdown' => array(
      'visible_rows' => 5,
      'rounded' => 1,
      'animation' => 'slideDown',
      'event' => 'click',
      'skin' => 'ldsSkin',
      'custom_skin' => '',
    ),
    'chosen' => array(
      'disable_search' => 1,
      'no_results_text' => 'No language match',
    ),
    'ddslick' => array(
      'ddslick_height' => 0,
      'showSelectedHTML' => 1,
      'imagePosition' => 'left',
      'skin' => 'custom',
      'custom_skin' => 'ijnet-language-dropdown',
    ),
    'languageicons' => array(
      'flag_position' => 1,
    ),
  );
  $export['lang_dropdown_language_content'] = $strongarm;

  return $export;
}
