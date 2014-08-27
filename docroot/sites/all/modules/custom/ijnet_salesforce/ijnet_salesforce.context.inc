<?php
/**
 * @file
 * ijnet_salesforce.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ijnet_salesforce_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ijnet_salesforce';
  $context->description = '';
  $context->tag = 'contact form';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact-ijnet' => 'contact-ijnet',
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
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('contact form');
  $export['ijnet_salesforce'] = $context;

  return $export;
}
