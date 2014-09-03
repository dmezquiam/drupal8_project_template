<?php
/**
 * @file
 * fe_admin_dashboards.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fe_admin_dashboards_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header for content pages from the editor\'s Dashboard';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'dashboard_content_header';
  $fe_block_boxes->body = '<p>Here you can add or edit content. Use the filters to get quicker access to what you&#39;re looking for, &nbsp;or go back to the <a href="/admin/dashboard">Dashboard</a>.&nbsp;</p>
';

  $export['dashboard_content_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header of the Staff member page from the editor\'s Dashboard';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'dashboard_staff_member_header';
  $fe_block_boxes->body = '<p>Here you can add or edit staff members. To see them in the <a href="../../about">About page</a>&nbsp;they need to be added to que corresponding nodequeue. Use the filters to get quicker access to what you&#39;re looking for, &nbsp;or go back to the <a href="../dashboard">Dashboard</a>.</p>
';

  $export['dashboard_staff_member_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header of the Taxonomies page from the editor\'s Dashboard';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'dashboard_taxonomies_header';
  $fe_block_boxes->body = '<p>Here you can add or edit terms. Use the filters to get quicker access to what you&#39;re looking for, &nbsp;or go back to the <a href="../dashboard">Dashboard</a>.&nbsp;</p>
';

  $export['dashboard_taxonomies_header'] = $fe_block_boxes;

  return $export;
}
