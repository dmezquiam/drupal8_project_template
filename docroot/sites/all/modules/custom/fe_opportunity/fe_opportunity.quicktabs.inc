<?php
/**
 * @file
 * fe_opportunity.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function fe_opportunity_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'opportunities_for_journalists';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'OPPORTUNITIES FOR JOURNALISTS';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'opportunities_views',
      'display' => 'recent_opportunities_home',
      'args' => '',
      'title' => 'RECENT',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'opportunities_views',
      'display' => 'opportunities_ending_soon_block',
      'args' => '',
      'title' => 'ENDING SOON',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('ENDING SOON');
  t('OPPORTUNITIES FOR JOURNALISTS');
  t('RECENT');

  $export['opportunities_for_journalists'] = $quicktabs;

  return $export;
}
