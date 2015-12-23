<?php
/**
 * @file
 * fe_site_config.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fe_site_config_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us';
  $page->task = 'page';
  $page->admin_title = 'About Us';
  $page->admin_description = 'The about us page';
  $page->path = 'about';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
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
  );
  $display = new panels_display();
  $display->layout = 'brick_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'brick_66_33_first' => NULL,
      'brick_66_33_second' => NULL,
      'brick_66_33_left_below' => NULL,
      'brick_66_33_right_below' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1a558c10-00c4-4a1e-966a-85972a1b70f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9c433602-66f6-4b4b-8d0a-e78f683e7ab0';
    $pane->panel = 'brick_66_33_first';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '28',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '9c433602-66f6-4b4b-8d0a-e78f683e7ab0';
    $display->content['new-9c433602-66f6-4b4b-8d0a-e78f683e7ab0'] = $pane;
    $display->panels['brick_66_33_first'][0] = 'new-9c433602-66f6-4b4b-8d0a-e78f683e7ab0';
    $pane = new stdClass();
    $pane->pid = 'new-7f6a9de6-e44d-4b1b-8ffa-ec3f5233d0a2';
    $pane->panel = 'brick_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'views-staff-block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7f6a9de6-e44d-4b1b-8ffa-ec3f5233d0a2';
    $display->content['new-7f6a9de6-e44d-4b1b-8ffa-ec3f5233d0a2'] = $pane;
    $display->panels['brick_66_33_first'][1] = 'new-7f6a9de6-e44d-4b1b-8ffa-ec3f5233d0a2';
    $pane = new stdClass();
    $pane->pid = 'new-541a5ec9-17e5-4a62-9d8c-736a9ce85514';
    $pane->panel = 'brick_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'jsonblocks-contact-form';
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
    $pane->uuid = '541a5ec9-17e5-4a62-9d8c-736a9ce85514';
    $display->content['new-541a5ec9-17e5-4a62-9d8c-736a9ce85514'] = $pane;
    $display->panels['brick_66_33_first'][2] = 'new-541a5ec9-17e5-4a62-9d8c-736a9ce85514';
    $pane = new stdClass();
    $pane->pid = 'new-dcb3e0c9-50c7-4de2-b9a5-f479fb2600dd';
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
    $pane->uuid = 'dcb3e0c9-50c7-4de2-b9a5-f479fb2600dd';
    $display->content['new-dcb3e0c9-50c7-4de2-b9a5-f479fb2600dd'] = $pane;
    $display->panels['brick_66_33_second'][0] = 'new-dcb3e0c9-50c7-4de2-b9a5-f479fb2600dd';
    $pane = new stdClass();
    $pane->pid = 'new-b61e0ab8-5019-41d2-af8b-e25f268273f9';
    $pane->panel = 'brick_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'views-banner-banner_partners';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b61e0ab8-5019-41d2-af8b-e25f268273f9';
    $display->content['new-b61e0ab8-5019-41d2-af8b-e25f268273f9'] = $pane;
    $display->panels['brick_66_33_second'][1] = 'new-b61e0ab8-5019-41d2-af8b-e25f268273f9';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-9c433602-66f6-4b4b-8d0a-e78f683e7ab0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'landing_page';
  $page->task = 'page';
  $page->admin_title = 'Landing page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'brick_66_33';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'top_sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'TOP',
        'width' => '71.40571900644213',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'top-region',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_regon',
          1 => 'content_sidebar',
        ),
        'parent' => 'main',
        'class' => 'content-panel',
      ),
      'content_regon' => array(
        'type' => 'region',
        'title' => 'Content-regon',
        'width' => '71.4821527623329',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'content-region',
      ),
      'top_sidebar' => array(
        'type' => 'region',
        'title' => 'Top sidebar',
        'width' => '28.594280993557877',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'top-region-sidebar',
      ),
      'content_sidebar' => array(
        'type' => 'region',
        'title' => 'Content sidebar',
        'width' => '28.517847237667098',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'conten-sidebar',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'center' => NULL,
      'content_regon' => NULL,
      'top_sidebar' => NULL,
      'content_sidebar' => NULL,
      'brick_66_33_first' => NULL,
      'brick_66_33_second' => NULL,
      'brick_66_33_left_below' => NULL,
      'brick_66_33_right_below' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Landing page';
  $display->uuid = '922079d8-750e-423d-b480-57c9bcf4bc2b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c0238527-c20a-45f8-a37b-5974099e38b5';
    $pane->panel = 'brick_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'views-news-top_story_home';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c0238527-c20a-45f8-a37b-5974099e38b5';
    $display->content['new-c0238527-c20a-45f8-a37b-5974099e38b5'] = $pane;
    $display->panels['brick_66_33_first'][0] = 'new-c0238527-c20a-45f8-a37b-5974099e38b5';
    $pane = new stdClass();
    $pane->pid = 'new-16d43a4f-2abd-4fb1-a9b8-6b4dc3d9eba3';
    $pane->panel = 'brick_66_33_left_below';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-top_stories_on_ijnet';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16d43a4f-2abd-4fb1-a9b8-6b4dc3d9eba3';
    $display->content['new-16d43a4f-2abd-4fb1-a9b8-6b4dc3d9eba3'] = $pane;
    $display->panels['brick_66_33_left_below'][0] = 'new-16d43a4f-2abd-4fb1-a9b8-6b4dc3d9eba3';
    $pane = new stdClass();
    $pane->pid = 'new-0981a783-8cb5-409a-908a-f7b000fce199';
    $pane->panel = 'brick_66_33_left_below';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-opportunities_for_journalists';
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
    $pane->uuid = '0981a783-8cb5-409a-908a-f7b000fce199';
    $display->content['new-0981a783-8cb5-409a-908a-f7b000fce199'] = $pane;
    $display->panels['brick_66_33_left_below'][1] = 'new-0981a783-8cb5-409a-908a-f7b000fce199';
    $pane = new stdClass();
    $pane->pid = 'new-052e5e5e-bf5b-469f-9a15-c05feca1fb88';
    $pane->panel = 'brick_66_33_right_below';
    $pane->type = 'block';
    $pane->subtype = 'jsonblocks-latest-posts';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '052e5e5e-bf5b-469f-9a15-c05feca1fb88';
    $display->content['new-052e5e5e-bf5b-469f-9a15-c05feca1fb88'] = $pane;
    $display->panels['brick_66_33_right_below'][0] = 'new-052e5e5e-bf5b-469f-9a15-c05feca1fb88';
    $pane = new stdClass();
    $pane->pid = 'new-2a35932f-486a-413d-a177-9f2e0427d5d7';
    $pane->panel = 'brick_66_33_right_below';
    $pane->type = 'block';
    $pane->subtype = 'views-advertisement-block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2a35932f-486a-413d-a177-9f2e0427d5d7';
    $display->content['new-2a35932f-486a-413d-a177-9f2e0427d5d7'] = $pane;
    $display->panels['brick_66_33_right_below'][1] = 'new-2a35932f-486a-413d-a177-9f2e0427d5d7';
    $pane = new stdClass();
    $pane->pid = 'new-b08c06cb-bae9-45ba-834a-ef97c06d1062';
    $pane->panel = 'brick_66_33_right_below';
    $pane->type = 'block';
    $pane->subtype = 'views-twitter-tweets_home_block';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b08c06cb-bae9-45ba-834a-ef97c06d1062';
    $display->content['new-b08c06cb-bae9-45ba-834a-ef97c06d1062'] = $pane;
    $display->panels['brick_66_33_right_below'][2] = 'new-b08c06cb-bae9-45ba-834a-ef97c06d1062';
    $pane = new stdClass();
    $pane->pid = 'new-89fb2a80-d79b-4637-9d94-9428e93c0f16';
    $pane->panel = 'brick_66_33_right_below';
    $pane->type = 'block';
    $pane->subtype = 'views-cima-cima_home';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '89fb2a80-d79b-4637-9d94-9428e93c0f16';
    $display->content['new-89fb2a80-d79b-4637-9d94-9428e93c0f16'] = $pane;
    $display->panels['brick_66_33_right_below'][3] = 'new-89fb2a80-d79b-4637-9d94-9428e93c0f16';
    $pane = new stdClass();
    $pane->pid = 'new-b3a5bf3f-c708-4176-9df3-11dee567fe2f';
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3a5bf3f-c708-4176-9df3-11dee567fe2f';
    $display->content['new-b3a5bf3f-c708-4176-9df3-11dee567fe2f'] = $pane;
    $display->panels['brick_66_33_second'][0] = 'new-b3a5bf3f-c708-4176-9df3-11dee567fe2f';
    $pane = new stdClass();
    $pane->pid = 'new-5bada2ff-8940-4fc4-9d2a-84d652a8bd84';
    $pane->panel = 'brick_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'jsonblocks-facebook-like';
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
    $pane->uuid = '5bada2ff-8940-4fc4-9d2a-84d652a8bd84';
    $display->content['new-5bada2ff-8940-4fc4-9d2a-84d652a8bd84'] = $pane;
    $display->panels['brick_66_33_second'][1] = 'new-5bada2ff-8940-4fc4-9d2a-84d652a8bd84';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['landing_page'] = $page;

  return $pages;

}
