<?php
/**
 * @file
 * fe_site_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fe_site_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'default';
  $context->description = 'IJNET global context';
  $context->tag = 'Global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin*' => '~admin*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'jsonblocks-top-header-menu' => array(
          'module' => 'jsonblocks',
          'delta' => 'top-header-menu',
          'region' => 'leaderboard',
          'weight' => '-10',
        ),
        'lang_dropdown-language_content' => array(
          'module' => 'lang_dropdown',
          'delta' => 'language_content',
          'region' => 'leaderboard',
          'weight' => '-9',
        ),
        'jsonblocks-login_block' => array(
          'module' => 'jsonblocks',
          'delta' => 'login_block',
          'region' => 'header',
          'weight' => '-10',
        ),
        'jsonblocks-support-ijnet' => array(
          'module' => 'jsonblocks',
          'delta' => 'support-ijnet',
          'region' => 'header',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-8',
        ),
        'jsonblocks-ijnet-footer' => array(
          'module' => 'jsonblocks',
          'delta' => 'ijnet-footer',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  t('IJNET global context');
  $export['default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'Home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'title';
  $context->description = '';
  $context->tag = 'Global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~*videos*' => '~*videos*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  $export['title'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile';
  $context->description = '';
  $context->tag = 'fe_profile';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
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
          'weight' => NULL,
        ),
        'jsonblocks-latest-posts' => array(
          'module' => 'jsonblocks',
          'delta' => 'latest-posts',
          'region' => 'sidebar_second',
          'weight' => NULL,
        ),
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'sidebar_second',
          'weight' => '-33',
        ),
        'views-news-author_latest_stories' => array(
          'module' => 'views',
          'delta' => 'news-author_latest_stories',
          'region' => 'tertiary_content',
          'weight' => '-10',
        ),
      ),
    ),
    'no_title' => array(
      'no_title' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fe_profile');
  $export['user_profile'] = $context;

  return $export;
}
