<?php
/**
 * @file
 * fe_videos.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fe_videos_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'videos_landing';
  $page->task = 'page';
  $page->admin_title = 'Videos Landing';
  $page->admin_description = '';
  $page->path = 'videos';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_videos_landing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'videos_landing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'videos/topic*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'brick_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'brick_66_33_first' => NULL,
      'brick_66_33_second' => NULL,
      'brick_66_33_left_below' => NULL,
      'brick_66_33_right_below' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4d3b63d4-61d4-49d7-9224-8962fdcd05c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-911c5442-5316-4441-b3a8-c4c2ec986ac2';
    $pane->panel = 'brick_66_33_first';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => 'panel-page-title',
      'override_title' => 0,
      'override_title_text' => 'xxxxxxxxxxxxxx',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '911c5442-5316-4441-b3a8-c4c2ec986ac2';
    $display->content['new-911c5442-5316-4441-b3a8-c4c2ec986ac2'] = $pane;
    $display->panels['brick_66_33_first'][0] = 'new-911c5442-5316-4441-b3a8-c4c2ec986ac2';
    $pane = new stdClass();
    $pane->pid = 'new-fd64f514-c769-4c6b-978e-bebdfb7dd85e';
    $pane->panel = 'brick_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'fe_videos-fe_videos_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fd64f514-c769-4c6b-978e-bebdfb7dd85e';
    $display->content['new-fd64f514-c769-4c6b-978e-bebdfb7dd85e'] = $pane;
    $display->panels['brick_66_33_first'][1] = 'new-fd64f514-c769-4c6b-978e-bebdfb7dd85e';
    $pane = new stdClass();
    $pane->pid = 'new-7801792b-3390-4ce6-a1f7-680d3483983f';
    $pane->panel = 'brick_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'views-videos-featured_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7801792b-3390-4ce6-a1f7-680d3483983f';
    $display->content['new-7801792b-3390-4ce6-a1f7-680d3483983f'] = $pane;
    $display->panels['brick_66_33_first'][2] = 'new-7801792b-3390-4ce6-a1f7-680d3483983f';
    $pane = new stdClass();
    $pane->pid = 'new-1cc5726e-2501-45a1-b620-f3e2b82f5f14';
    $pane->panel = 'brick_66_33_left_below';
    $pane->type = 'block';
    $pane->subtype = 'views-videos-video_landing_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1cc5726e-2501-45a1-b620-f3e2b82f5f14';
    $display->content['new-1cc5726e-2501-45a1-b620-f3e2b82f5f14'] = $pane;
    $display->panels['brick_66_33_left_below'][0] = 'new-1cc5726e-2501-45a1-b620-f3e2b82f5f14';
    $pane = new stdClass();
    $pane->pid = 'new-91049d4c-a11e-4916-9fac-92aa93e069db';
    $pane->panel = 'brick_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'jsonblocks-social-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Connect with IJNET',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'frist-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '91049d4c-a11e-4916-9fac-92aa93e069db';
    $display->content['new-91049d4c-a11e-4916-9fac-92aa93e069db'] = $pane;
    $display->panels['brick_66_33_second'][0] = 'new-91049d4c-a11e-4916-9fac-92aa93e069db';
    $pane = new stdClass();
    $pane->pid = 'new-700b1553-84c2-42ed-8b4e-f824902d8e61';
    $pane->panel = 'brick_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'views-videos-related_videos_landing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '700b1553-84c2-42ed-8b4e-f824902d8e61';
    $display->content['new-700b1553-84c2-42ed-8b4e-f824902d8e61'] = $pane;
    $display->panels['brick_66_33_second'][1] = 'new-700b1553-84c2-42ed-8b4e-f824902d8e61';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-1cc5726e-2501-45a1-b620-f3e2b82f5f14';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['videos_landing'] = $page;

  return $pages;

}
