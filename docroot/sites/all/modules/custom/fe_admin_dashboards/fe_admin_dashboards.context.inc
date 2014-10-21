<?php
/**
 * @file
 * fe_admin_dashboards.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_admin_dashboards_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard_taxonomies_manager';
  $context->description = '';
  $context->tag = 'fe_admin_dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/structure/taxonomy_manager/voc/*' => 'admin/structure/taxonomy_manager/voc/*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'admin/dashboard',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_admin_dashboard');
  $export['dashboard_taxonomies_manager'] = $context;

  return $export;
}
