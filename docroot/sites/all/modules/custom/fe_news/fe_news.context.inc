<?php
/**
 * @file
 * fe_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_detail';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
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
          'weight' => '-9',
        ),
        'views-b24c105b349e450c23451f9278b6d44c' => array(
          'module' => 'views',
          'delta' => 'b24c105b349e450c23451f9278b6d44c',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'jsonblocks-latest-posts' => array(
          'module' => 'jsonblocks',
          'delta' => 'latest-posts',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_landing';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news*' => 'news*',
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
        'jsonblocks-latest-posts' => array(
          'module' => 'jsonblocks',
          'delta' => 'latest-posts',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video_search';
  $context->description = '';
  $context->tag = 'Video';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'videos/topic*' => 'videos/topic*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-10',
        ),
        'fe_videos-fe_videos_search' => array(
          'module' => 'fe_videos',
          'delta' => 'fe_videos_search',
          'region' => 'content',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-8',
        ),
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
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Video');
  $export['video_search'] = $context;

  return $export;
}
