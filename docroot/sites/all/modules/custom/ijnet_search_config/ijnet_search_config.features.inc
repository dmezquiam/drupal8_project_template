<?php
/**
 * @file
 * ijnet_search_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ijnet_search_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
