<?php
/**
 * @file
 * ijnet_salesforce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ijnet_salesforce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
