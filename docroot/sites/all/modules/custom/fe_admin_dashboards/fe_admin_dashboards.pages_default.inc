<?php
/**
 * @file
 * fe_admin_dashboards.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fe_admin_dashboards_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'curstomized_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard ';
  $page->admin_description = '';
  $page->path = 'admin/dashboard';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'menu-dashboard-nodequeues',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => '',
      'name' => 'menu-dashboard-nodequeues',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_curstomized_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'curstomized_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard',
    'panels_breadcrumbs_paths' => 'admin/dashboard',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.99963873354432',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '25.000361266455684',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => array(),
      'default' => array(),
      'sidebar' => array(),
    ),
    'style' => 'stylizer',
    'center' => array(
      'style' => 'stylizer',
    ),
    'sidebar' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = 'ed3fcf7f-ff08-4312-9aea-56b06bc3c7ca';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_curstomized_dashboard_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ac97258c-11b6-4473-8816-2269291a8451';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-0b8eb32e244af934a935b767f4e4e03f';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Latest content overview',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ac97258c-11b6-4473-8816-2269291a8451';
  $display->content['new-ac97258c-11b6-4473-8816-2269291a8451'] = $pane;
  $display->panels['center'][0] = 'new-ac97258c-11b6-4473-8816-2269291a8451';
  $pane = new stdClass();
  $pane->pid = 'new-da16754d-ad0f-4ef7-8be3-347ab674a45d';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-f930ac3e5ff3b8d26889295145938d8d';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
  );
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
  $pane->uuid = 'da16754d-ad0f-4ef7-8be3-347ab674a45d';
  $display->content['new-da16754d-ad0f-4ef7-8be3-347ab674a45d'] = $pane;
  $display->panels['center'][1] = 'new-da16754d-ad0f-4ef7-8be3-347ab674a45d';
  $pane = new stdClass();
  $pane->pid = 'new-68cd379d-89e8-4342-9cbd-e9b6b2689736';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68cd379d-89e8-4342-9cbd-e9b6b2689736';
  $display->content['new-68cd379d-89e8-4342-9cbd-e9b6b2689736'] = $pane;
  $display->panels['sidebar'][0] = 'new-68cd379d-89e8-4342-9cbd-e9b6b2689736';
  $pane = new stdClass();
  $pane->pid = 'new-7458abb8-e72c-4041-be7f-a137f5c2ac09';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7458abb8-e72c-4041-be7f-a137f5c2ac09';
  $display->content['new-7458abb8-e72c-4041-be7f-a137f5c2ac09'] = $pane;
  $display->panels['sidebar'][1] = 'new-7458abb8-e72c-4041-be7f-a137f5c2ac09';
  $pane = new stdClass();
  $pane->pid = 'new-302f6c21-94cd-46c6-867e-0733642b7eda';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard-short';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '302f6c21-94cd-46c6-867e-0733642b7eda';
  $display->content['new-302f6c21-94cd-46c6-867e-0733642b7eda'] = $pane;
  $display->panels['sidebar'][2] = 'new-302f6c21-94cd-46c6-867e-0733642b7eda';
  $pane = new stdClass();
  $pane->pid = 'new-d8567772-2692-4eb4-a823-5ccacf9874db';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard-nodequeues';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'View nodequeues',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'primary-menu-bar',
    'css_class' => 'nav clearfix responsive-menus-simple',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd8567772-2692-4eb4-a823-5ccacf9874db';
  $display->content['new-d8567772-2692-4eb4-a823-5ccacf9874db'] = $pane;
  $display->panels['sidebar'][3] = 'new-d8567772-2692-4eb4-a823-5ccacf9874db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da16754d-ad0f-4ef7-8be3-347ab674a45d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['curstomized_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_advertisements';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Advertisements';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/advertisements';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_advertisements_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_advertisements';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Advertisements',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/advertisements
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_advertisements_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5f729d43-afa9-41a9-b8f7-ebcb781a9d4d';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5f729d43-afa9-41a9-b8f7-ebcb781a9d4d';
  $display->content['new-5f729d43-afa9-41a9-b8f7-ebcb781a9d4d'] = $pane;
  $display->panels['center'][0] = 'new-5f729d43-afa9-41a9-b8f7-ebcb781a9d4d';
  $pane = new stdClass();
  $pane->pid = 'new-535d73b7-74ef-46c3-bf00-5940a828312e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '535d73b7-74ef-46c3-bf00-5940a828312e';
  $display->content['new-535d73b7-74ef-46c3-bf00-5940a828312e'] = $pane;
  $display->panels['center'][1] = 'new-535d73b7-74ef-46c3-bf00-5940a828312e';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-535d73b7-74ef-46c3-bf00-5940a828312e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_advertisements'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_banners';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Banners';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/banners';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_banners_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_banners';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Banners (Our partners)',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/banners
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_banners_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ead267c0-5e43-4698-b931-f3eef3f7c0a1';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ead267c0-5e43-4698-b931-f3eef3f7c0a1';
  $display->content['new-ead267c0-5e43-4698-b931-f3eef3f7c0a1'] = $pane;
  $display->panels['center'][0] = 'new-ead267c0-5e43-4698-b931-f3eef3f7c0a1';
  $pane = new stdClass();
  $pane->pid = 'new-39a21f53-80ea-4d91-8764-c7dca731a30b';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_7';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '39a21f53-80ea-4d91-8764-c7dca731a30b';
  $display->content['new-39a21f53-80ea-4d91-8764-c7dca731a30b'] = $pane;
  $display->panels['center'][1] = 'new-39a21f53-80ea-4d91-8764-c7dca731a30b';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-39a21f53-80ea-4d91-8764-c7dca731a30b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_banners'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_basic_pages';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Basic Pages';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/basic-pages';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_basic_pages_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_basic_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Basic Pages',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/basic-pages
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_basic_pages_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a31f5533-52c0-45fb-8d8f-c3ddf1b53481';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a31f5533-52c0-45fb-8d8f-c3ddf1b53481';
  $display->content['new-a31f5533-52c0-45fb-8d8f-c3ddf1b53481'] = $pane;
  $display->panels['center'][0] = 'new-a31f5533-52c0-45fb-8d8f-c3ddf1b53481';
  $pane = new stdClass();
  $pane->pid = 'new-8a078c6d-98e3-4a69-9c75-189549036e48';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-64f0e23d3fe27a31b7c1ae60f305b693';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '8a078c6d-98e3-4a69-9c75-189549036e48';
  $display->content['new-8a078c6d-98e3-4a69-9c75-189549036e48'] = $pane;
  $display->panels['center'][1] = 'new-8a078c6d-98e3-4a69-9c75-189549036e48';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-8a078c6d-98e3-4a69-9c75-189549036e48';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_basic_pages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_bulletin_emails';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Bulletin emails';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/bulletins';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_bulletin_emails_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_bulletin_emails';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Bulletin emails',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/bulletins
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_bulletin_emails_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ac1305e6-525d-4f01-a3d9-ac1a7f842314';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ac1305e6-525d-4f01-a3d9-ac1a7f842314';
  $display->content['new-ac1305e6-525d-4f01-a3d9-ac1a7f842314'] = $pane;
  $display->panels['center'][0] = 'new-ac1305e6-525d-4f01-a3d9-ac1a7f842314';
  $pane = new stdClass();
  $pane->pid = 'new-206d6eda-6929-4cdb-b9ef-a4fed8400b20';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_8';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '206d6eda-6929-4cdb-b9ef-a4fed8400b20';
  $display->content['new-206d6eda-6929-4cdb-b9ef-a4fed8400b20'] = $pane;
  $display->panels['center'][1] = 'new-206d6eda-6929-4cdb-b9ef-a4fed8400b20';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-206d6eda-6929-4cdb-b9ef-a4fed8400b20';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_bulletin_emails'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_chats';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Chats';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/chats';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_chats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_chats';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Chats',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/chats
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_chats_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dd1fa2b4-6a66-4122-bd2e-84d36957906f';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd1fa2b4-6a66-4122-bd2e-84d36957906f';
  $display->content['new-dd1fa2b4-6a66-4122-bd2e-84d36957906f'] = $pane;
  $display->panels['center'][0] = 'new-dd1fa2b4-6a66-4122-bd2e-84d36957906f';
  $pane = new stdClass();
  $pane->pid = 'new-51d9d954-89ee-48ef-9e99-5c623e84f5cd';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '51d9d954-89ee-48ef-9e99-5c623e84f5cd';
  $display->content['new-51d9d954-89ee-48ef-9e99-5c623e84f5cd'] = $pane;
  $display->panels['center'][1] = 'new-51d9d954-89ee-48ef-9e99-5c623e84f5cd';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-51d9d954-89ee-48ef-9e99-5c623e84f5cd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_chats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_comments';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Comments';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/comments';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_comments_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_comments';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Comments',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/comments
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_comments_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2164c797-4678-4502-a283-e06600e242d1';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_10';
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
  $pane->uuid = '2164c797-4678-4502-a283-e06600e242d1';
  $display->content['new-2164c797-4678-4502-a283-e06600e242d1'] = $pane;
  $display->panels['center'][0] = 'new-2164c797-4678-4502-a283-e06600e242d1';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2164c797-4678-4502-a283-e06600e242d1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_comments'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_news';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - News';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
News',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/news
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_news_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4';
  $display->content['new-1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4'] = $pane;
  $display->panels['center'][0] = 'new-1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4';
  $pane = new stdClass();
  $pane->pid = 'new-0056204b-3fad-41ac-95d0-ec216833fbda';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '0056204b-3fad-41ac-95d0-ec216833fbda';
  $display->content['new-0056204b-3fad-41ac-95d0-ec216833fbda'] = $pane;
  $display->panels['center'][1] = 'new-0056204b-3fad-41ac-95d0-ec216833fbda';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-0056204b-3fad-41ac-95d0-ec216833fbda';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_news'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_opportunities';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Opportunities';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/opportunities';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_opportunities_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_opportunities';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Opportunities',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/opportunities
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_opportunities_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3eb4f2fa-97c6-4a6f-b76d-fd283a16cffb';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3eb4f2fa-97c6-4a6f-b76d-fd283a16cffb';
  $display->content['new-3eb4f2fa-97c6-4a6f-b76d-fd283a16cffb'] = $pane;
  $display->panels['center'][0] = 'new-3eb4f2fa-97c6-4a6f-b76d-fd283a16cffb';
  $pane = new stdClass();
  $pane->pid = 'new-6c9ad09a-d915-4141-975b-1010896cf3a5';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '6c9ad09a-d915-4141-975b-1010896cf3a5';
  $display->content['new-6c9ad09a-d915-4141-975b-1010896cf3a5'] = $pane;
  $display->panels['center'][1] = 'new-6c9ad09a-d915-4141-975b-1010896cf3a5';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6c9ad09a-d915-4141-975b-1010896cf3a5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_opportunities'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_resources';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Resources';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/resources';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_resources__panel_context_588e1faa-72ae-4149-bc67-28f69760af94';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_resources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Resources',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/resources
',
    'panels_breadcrumbs_home' => 1,
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_resources__panel_context_588e1faa-72ae-4149-bc67-28f69760af94';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4';
  $display->content['new-1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4'] = $pane;
  $display->panels['center'][0] = 'new-1e0b09f8-f4bf-4fcc-ac22-ccf736ef7da4';
  $pane = new stdClass();
  $pane->pid = 'new-f49954ae-e8c2-47f2-8817-2c0504b37e10';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-c2b63e9b0d36036ae73aae41a0ae6d41';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f49954ae-e8c2-47f2-8817-2c0504b37e10';
  $display->content['new-f49954ae-e8c2-47f2-8817-2c0504b37e10'] = $pane;
  $display->panels['center'][1] = 'new-f49954ae-e8c2-47f2-8817-2c0504b37e10';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-f49954ae-e8c2-47f2-8817-2c0504b37e10';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodes_videos';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodes - Videos';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/videos';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_nodes_videos_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodes_videos';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Videos',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/videos
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_nodes_videos_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-36bb4aa7-413b-4a2d-a30e-7b8e1bdbef74';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '36bb4aa7-413b-4a2d-a30e-7b8e1bdbef74';
  $display->content['new-36bb4aa7-413b-4a2d-a30e-7b8e1bdbef74'] = $pane;
  $display->panels['center'][0] = 'new-36bb4aa7-413b-4a2d-a30e-7b8e1bdbef74';
  $pane = new stdClass();
  $pane->pid = 'new-920909b6-3c60-4e2d-aa1b-30430b1a91d0';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '920909b6-3c60-4e2d-aa1b-30430b1a91d0';
  $display->content['new-920909b6-3c60-4e2d-aa1b-30430b1a91d0'] = $pane;
  $display->panels['center'][1] = 'new-920909b6-3c60-4e2d-aa1b-30430b1a91d0';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-920909b6-3c60-4e2d-aa1b-30430b1a91d0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_nodes_videos'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_scheduled_content';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Scheduled content';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/content/scheduled';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_scheduled_content_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_scheduled_content';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nodes Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Scheduled',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/content/scheduled
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.96751965502874',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => '25.03248034497126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd320a1b0-81f3-4133-b44f-be1ed2a67dd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_scheduled_content_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c318b74a-0002-42c3-8d48-b7e4855e4be4';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_9';
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
  $pane->uuid = 'c318b74a-0002-42c3-8d48-b7e4855e4be4';
  $display->content['new-c318b74a-0002-42c3-8d48-b7e4855e4be4'] = $pane;
  $display->panels['center'][0] = 'new-c318b74a-0002-42c3-8d48-b7e4855e4be4';
  $pane = new stdClass();
  $pane->pid = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86919b4e-dc99-4604-8396-4042a317178a';
  $display->content['new-86919b4e-dc99-4604-8396-4042a317178a'] = $pane;
  $display->panels['side'][0] = 'new-86919b4e-dc99-4604-8396-4042a317178a';
  $pane = new stdClass();
  $pane->pid = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->content['new-df6e07d7-533a-403a-a037-0d66af4daa6e'] = $pane;
  $display->panels['side'][1] = 'new-df6e07d7-533a-403a-a037-0d66af4daa6e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-c318b74a-0002-42c3-8d48-b7e4855e4be4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_scheduled_content'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_staff_members';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Staff Members';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/staff';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_staff_members_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_staff_members';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Staff members',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/staff',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 75,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'side',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Staff members';
  $display->uuid = 'c5f092a0-fd17-46e7-93ea-42ff0bb3f3ef';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_staff_members_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fb4de888-e93d-4917-aab9-72f80ee558d6';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fb4de888-e93d-4917-aab9-72f80ee558d6';
  $display->content['new-fb4de888-e93d-4917-aab9-72f80ee558d6'] = $pane;
  $display->panels['center'][0] = 'new-fb4de888-e93d-4917-aab9-72f80ee558d6';
  $pane = new stdClass();
  $pane->pid = 'new-8e5df2de-013a-40f8-82de-618a5460c46c';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-last_content-block_1';
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
  $pane->uuid = '8e5df2de-013a-40f8-82de-618a5460c46c';
  $display->content['new-8e5df2de-013a-40f8-82de-618a5460c46c'] = $pane;
  $display->panels['center'][1] = 'new-8e5df2de-013a-40f8-82de-618a5460c46c';
  $pane = new stdClass();
  $pane->pid = 'new-6b4a7258-67bf-4c75-95af-ceb7beda4dcc';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6b4a7258-67bf-4c75-95af-ceb7beda4dcc';
  $display->content['new-6b4a7258-67bf-4c75-95af-ceb7beda4dcc'] = $pane;
  $display->panels['side'][0] = 'new-6b4a7258-67bf-4c75-95af-ceb7beda4dcc';
  $pane = new stdClass();
  $pane->pid = 'new-47a06095-6bba-43bd-87b8-6ceb089f7bf0';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '47a06095-6bba-43bd-87b8-6ceb089f7bf0';
  $display->content['new-47a06095-6bba-43bd-87b8-6ceb089f7bf0'] = $pane;
  $display->panels['side'][1] = 'new-47a06095-6bba-43bd-87b8-6ceb089f7bf0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_staff_members'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_taxonomies';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Taxonomies';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/taxonomies';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_dashboard_taxonomies_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_taxonomies';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel Taxonomies',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Taxonomies',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/taxonomies',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 75,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'side',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'side' => array(
        'type' => 'region',
        'title' => 'Side',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Taxonomies';
  $display->uuid = 'c5f092a0-fd17-46e7-93ea-42ff0bb3f3ef';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_taxonomies_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2cadd4c9-9204-4776-90c3-e6f9b9182b7e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2cadd4c9-9204-4776-90c3-e6f9b9182b7e';
  $display->content['new-2cadd4c9-9204-4776-90c3-e6f9b9182b7e'] = $pane;
  $display->panels['center'][0] = 'new-2cadd4c9-9204-4776-90c3-e6f9b9182b7e';
  $pane = new stdClass();
  $pane->pid = 'new-5c3a5042-614e-4e3a-b686-fab230d2f756';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-dashboard_taxonomies_quicktab';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5c3a5042-614e-4e3a-b686-fab230d2f756';
  $display->content['new-5c3a5042-614e-4e3a-b686-fab230d2f756'] = $pane;
  $display->panels['center'][1] = 'new-5c3a5042-614e-4e3a-b686-fab230d2f756';
  $pane = new stdClass();
  $pane->pid = 'new-6b4a7258-67bf-4c75-95af-ceb7beda4dcc';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6b4a7258-67bf-4c75-95af-ceb7beda4dcc';
  $display->content['new-6b4a7258-67bf-4c75-95af-ceb7beda4dcc'] = $pane;
  $display->panels['side'][0] = 'new-6b4a7258-67bf-4c75-95af-ceb7beda4dcc';
  $pane = new stdClass();
  $pane->pid = 'new-47a06095-6bba-43bd-87b8-6ceb089f7bf0';
  $pane->panel = 'side';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '47a06095-6bba-43bd-87b8-6ceb089f7bf0';
  $display->content['new-47a06095-6bba-43bd-87b8-6ceb089f7bf0'] = $pane;
  $display->panels['side'][1] = 'new-47a06095-6bba-43bd-87b8-6ceb089f7bf0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5c3a5042-614e-4e3a-b686-fab230d2f756';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_taxonomies'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_users';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Users';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/users';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access_site_dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'menu-dashboard-nodequeues',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => '',
      'name' => 'menu-dashboard-nodequeues',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_users_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_users';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Dashboard
Users',
    'panels_breadcrumbs_paths' => 'admin/dashboard
admin/dashboard/users',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.99963873354432',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '25.000361266455684',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => array(),
      'default' => array(),
      'sidebar' => array(),
    ),
    'style' => 'stylizer',
    'center' => array(
      'style' => 'stylizer',
    ),
    'sidebar' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = 'Users';
  $display->uuid = 'ed3fcf7f-ff08-4312-9aea-56b06bc3c7ca';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_users_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e51d5bb-e87d-402f-9100-f03285e03940';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block_1';
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
  $pane->uuid = '6e51d5bb-e87d-402f-9100-f03285e03940';
  $display->content['new-6e51d5bb-e87d-402f-9100-f03285e03940'] = $pane;
  $display->panels['center'][0] = 'new-6e51d5bb-e87d-402f-9100-f03285e03940';
  $pane = new stdClass();
  $pane->pid = 'new-68cd379d-89e8-4342-9cbd-e9b6b2689736';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views-user_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68cd379d-89e8-4342-9cbd-e9b6b2689736';
  $display->content['new-68cd379d-89e8-4342-9cbd-e9b6b2689736'] = $pane;
  $display->panels['sidebar'][0] = 'new-68cd379d-89e8-4342-9cbd-e9b6b2689736';
  $pane = new stdClass();
  $pane->pid = 'new-7458abb8-e72c-4041-be7f-a137f5c2ac09';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dashboard';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Available actions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7458abb8-e72c-4041-be7f-a137f5c2ac09';
  $display->content['new-7458abb8-e72c-4041-be7f-a137f5c2ac09'] = $pane;
  $display->panels['sidebar'][1] = 'new-7458abb8-e72c-4041-be7f-a137f5c2ac09';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_users'] = $page;

  return $pages;

}
