<?php
/**
 * @file
 * fe_adminimal_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_adminimal_theme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
