<?php
/**
 * @file
 * fe_opportunity.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_opportunity_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fe_opportunities_detail';
  $context->description = '';
  $context->tag = 'fe_opportunity';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'training_opportunity' => 'training_opportunity',
      ),
      'options' => array(
        'node_form' => '1',
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
        'views-a66f88ddd5cdac2f4431afb3349ecc92' => array(
          'module' => 'views',
          'delta' => 'a66f88ddd5cdac2f4431afb3349ecc92',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_opportunity');
  $export['fe_opportunities_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fe_opportunities_ending_soon';
  $context->description = '';
  $context->tag = 'fe_opportunity';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'opportunities/ending-soon' => 'opportunities/ending-soon',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5a74a557add7142cb4c834387df35b61' => array(
          'module' => 'views',
          'delta' => '5a74a557add7142cb4c834387df35b61',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_opportunity');
  $export['fe_opportunities_ending_soon'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fe_opportunities_landing';
  $context->description = '';
  $context->tag = 'fe_opportunity';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'opportunities*' => 'opportunities*',
        '~opportunities/ending-soon' => '~opportunities/ending-soon',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-7ac668674197309dfe2ee4f316d2672d' => array(
          'module' => 'views',
          'delta' => '7ac668674197309dfe2ee4f316d2672d',
          'region' => 'content',
          'weight' => '-9',
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
        'views-15275b6301e5dc10a482387ea39a018c' => array(
          'module' => 'views',
          'delta' => '15275b6301e5dc10a482387ea39a018c',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_opportunity');
  $export['fe_opportunities_landing'] = $context;

  return $export;
}
