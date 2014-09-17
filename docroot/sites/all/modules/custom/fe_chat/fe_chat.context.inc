<?php
/**
 * @file
 * fe_chat.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_chat_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'chat_detail';
  $context->description = '';
  $context->tag = 'fe_chats';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'chat' => 'chat',
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
        'jsonblocks-winship-legacy' => array(
          'module' => 'jsonblocks',
          'delta' => 'winship-legacy',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-chats-upcomming_chats' => array(
          'module' => 'views',
          'delta' => 'chats-upcomming_chats',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-chats-past_chats' => array(
          'module' => 'views',
          'delta' => 'chats-past_chats',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_chats');
  $export['chat_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'chat_landing';
  $context->description = '';
  $context->tag = 'fe_chats';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'chats' => 'chats',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-chats-chats_landing_block' => array(
          'module' => 'views',
          'delta' => 'chats-chats_landing_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'jsonblocks-social-block' => array(
          'module' => 'jsonblocks',
          'delta' => 'social-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'jsonblocks-winship-legacy' => array(
          'module' => 'jsonblocks',
          'delta' => 'winship-legacy',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-chats-upcomming_chats' => array(
          'module' => 'views',
          'delta' => 'chats-upcomming_chats',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-chats-past_chats' => array(
          'module' => 'views',
          'delta' => 'chats-past_chats',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_chats');
  $export['chat_landing'] = $context;

  return $export;
}
