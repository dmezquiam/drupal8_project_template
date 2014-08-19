<?php
/**
 * @file
 * fe_news.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function fe_news_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'browse_by';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'BROWSE BY';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'news_search_block',
      'display' => 'browse_by_category',
      'args' => '',
      'title' => 'TOPIC',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'bid' => 'fe_news_delta_last_posts_authors',
      'hide_title' => 1,
      'title' => 'AUTHOR',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('AUTHOR');
  t('BROWSE BY');
  t('TOPIC');

  $export['browse_by'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'top_stories_on_ijnet';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'TOP STORIES ON IJNET';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'news',
      'display' => 'news_teaser_list',
      'args' => '',
      'title' => 'RECENT',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'news',
      'display' => 'news_popular',
      'args' => '',
      'title' => 'POPULAR',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('POPULAR');
  t('RECENT');
  t('TOP STORIES ON IJNET');

  $export['top_stories_on_ijnet'] = $quicktabs;

  return $export;
}
