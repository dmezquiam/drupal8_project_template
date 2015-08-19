<?php
/**
 * @file
 * fe_database_backup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_database_backup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
