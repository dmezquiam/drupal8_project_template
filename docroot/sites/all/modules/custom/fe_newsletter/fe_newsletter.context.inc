<?php
/**
 * @file
 * fe_newsletter.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_newsletter_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newsletter_archive';
  $context->description = '';
  $context->tag = 'fe_newsletter';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'email-bulletin-archive' => 'email-bulletin-archive',
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
          'weight' => '-62',
        ),
        'views-7425eddb505641c7704c002db7c1bdc0' => array(
          'module' => 'views',
          'delta' => '7425eddb505641c7704c002db7c1bdc0',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_newsletter');
  $export['newsletter_archive'] = $context;

  return $export;
}
