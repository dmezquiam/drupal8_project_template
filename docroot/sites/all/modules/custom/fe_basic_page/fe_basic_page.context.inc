<?php
/**
 * @file
 * fe_basic_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_basic_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fe_basic_pages_detail';
  $context->description = '';
  $context->tag = 'Basic Pages';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~knight-media-innovators' => '~knight-media-innovators',
        '~chats' => '~chats',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'jsonblocks-social-block' => array(
          'module' => 'jsonblocks',
          'delta' => 'social-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news-top_story' => array(
          'module' => 'views',
          'delta' => 'news-top_story',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Pages');
  $export['fe_basic_pages_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'knight_media_innovators';
  $context->description = '';
  $context->tag = 'Basic Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'knight-media-innovators' => 'knight-media-innovators',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'jsonblocks-social-block' => array(
          'module' => 'jsonblocks',
          'delta' => 'social-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'jsonblocks-knight-foundation' => array(
          'module' => 'jsonblocks',
          'delta' => 'knight-foundation',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'quicktabs-knight_foundation' => array(
          'module' => 'quicktabs',
          'delta' => 'knight_foundation',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Pages');
  $export['knight_media_innovators'] = $context;

  return $export;
}
