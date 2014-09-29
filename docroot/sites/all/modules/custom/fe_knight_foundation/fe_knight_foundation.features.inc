<?php
/**
 * @file
 * fe_knight_foundation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_knight_foundation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
