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
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-b24c105b349e450c23451f9278b6d44c' => array(
          'module' => 'views',
          'delta' => 'b24c105b349e450c23451f9278b6d44c',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'sidebar_second',
          'weight' => '-7',
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
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_second',
          'weight' => '-20',
        ),
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'sidebar_second',
          'weight' => '-19',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_landing'] = $context;

  return $export;
}
