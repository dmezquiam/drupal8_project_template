<?php
/**
 * @file
 * fe_knight_foundation.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function fe_knight_foundation_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'knight_foundation';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Knight Foundation';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'fe_knight_foundation_delta_knight_authors_tab',
      'hide_title' => 1,
      'title' => 'AUTHOR',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'twitter',
      'display' => 'knight_foundation_tweets',
      'args' => '',
      'title' => 'TWEETS',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('AUTHOR');
  t('Knight Foundation');
  t('TWEETS');

  $export['knight_foundation'] = $quicktabs;

  return $export;
}
