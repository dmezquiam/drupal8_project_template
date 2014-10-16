<?php
/**
 * @file
 * fe_videos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_videos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video_detail';
  $context->description = '';
  $context->tag = 'Video';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'videos/*' => 'videos/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fe_news-field_topic_block' => array(
          'module' => 'fe_news',
          'delta' => 'field_topic_block',
          'region' => 'highlighted',
          'weight' => '-10',
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
  $export['video_detail'] = $context;

  return $export;
}
