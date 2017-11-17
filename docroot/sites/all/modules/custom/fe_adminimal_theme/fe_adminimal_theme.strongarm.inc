<?php
/**
 * @file
 * fe_adminimal_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fe_adminimal_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  return $export;
}


// Configurar el tema Adminimal por default.
variable_set('admin_theme', 'adminimal');
