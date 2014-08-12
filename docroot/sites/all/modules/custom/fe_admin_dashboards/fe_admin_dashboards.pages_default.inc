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
  $display->content = array();
  $display->panels = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da16754d-ad0f-4ef7-8be3-347ab674a45d';
    $display->content['new-da16754d-ad0f-4ef7-8be3-347ab674a45d'] = $pane;
    $display->panels['center'][0] = 'new-da16754d-ad0f-4ef7-8be3-347ab674a45d';
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
    $pane->uuid = 'ac97258c-11b6-4473-8816-2269291a8451';
    $display->content['new-ac97258c-11b6-4473-8816-2269291a8451'] = $pane;
    $display->panels['center'][1] = 'new-ac97258c-11b6-4473-8816-2269291a8451';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da16754d-ad0f-4ef7-8be3-347ab674a45d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['curstomized_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_basic_pages';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Basic Pages';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/basic-pages';
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
  $handler->name = 'page_dashboard_basic_pages_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_basic_pages';
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
  $display->title = 'Basic Pages';
  $display->uuid = 'c5f092a0-fd17-46e7-93ea-42ff0bb3f3ef';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f64f2444-bb6f-4266-95b3-ade01f8cfa2b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-12';
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
    $pane->uuid = 'f64f2444-bb6f-4266-95b3-ade01f8cfa2b';
    $display->content['new-f64f2444-bb6f-4266-95b3-ade01f8cfa2b'] = $pane;
    $display->panels['center'][0] = 'new-f64f2444-bb6f-4266-95b3-ade01f8cfa2b';
    $pane = new stdClass();
    $pane->pid = 'new-f9dea4c9-51de-4103-9a69-ed2cf4b14eb9';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-64f0e23d3fe27a31b7c1ae60f305b693';
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
    $pane->uuid = 'f9dea4c9-51de-4103-9a69-ed2cf4b14eb9';
    $display->content['new-f9dea4c9-51de-4103-9a69-ed2cf4b14eb9'] = $pane;
    $display->panels['center'][1] = 'new-f9dea4c9-51de-4103-9a69-ed2cf4b14eb9';
    $pane = new stdClass();
    $pane->pid = 'new-73fab0f2-85c5-4978-822a-edfd933a7efe';
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
    $pane->uuid = '73fab0f2-85c5-4978-822a-edfd933a7efe';
    $display->content['new-73fab0f2-85c5-4978-822a-edfd933a7efe'] = $pane;
    $display->panels['side'][0] = 'new-73fab0f2-85c5-4978-822a-edfd933a7efe';
    $pane = new stdClass();
    $pane->pid = 'new-3e9a03f6-db32-49c2-8621-07649b2a82f5';
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
    $pane->uuid = '3e9a03f6-db32-49c2-8621-07649b2a82f5';
    $display->content['new-3e9a03f6-db32-49c2-8621-07649b2a82f5'] = $pane;
    $display->panels['side'][1] = 'new-3e9a03f6-db32-49c2-8621-07649b2a82f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_basic_pages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_nodequeues';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Nodequeues';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/nodequeues';
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
  $handler->name = 'page_dashboard_nodequeues_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_nodequeues';
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
  $display->title = 'Nodequeues';
  $display->uuid = 'c5f092a0-fd17-46e7-93ea-42ff0bb3f3ef';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3c06f5ce-5a04-4e22-b962-ea51092e23f5';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
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
    $pane->uuid = '3c06f5ce-5a04-4e22-b962-ea51092e23f5';
    $display->content['new-3c06f5ce-5a04-4e22-b962-ea51092e23f5'] = $pane;
    $display->panels['center'][0] = 'new-3c06f5ce-5a04-4e22-b962-ea51092e23f5';
    $pane = new stdClass();
    $pane->pid = 'new-fb121e10-75aa-4ca6-89cb-934b934986bf';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-dashboard_nodequeues_quicktab';
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
    $pane->uuid = 'fb121e10-75aa-4ca6-89cb-934b934986bf';
    $display->content['new-fb121e10-75aa-4ca6-89cb-934b934986bf'] = $pane;
    $display->panels['center'][1] = 'new-fb121e10-75aa-4ca6-89cb-934b934986bf';
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
  $pages['dashboard_nodequeues'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_staff_members';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: Staff Members';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/staff';
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
  $handler->name = 'page_dashboard_staff_members_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_staff_members';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4250e2d0-ce4d-4c8c-b25a-c3760089ed55';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-13';
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
    $pane->uuid = '4250e2d0-ce4d-4c8c-b25a-c3760089ed55';
    $display->content['new-4250e2d0-ce4d-4c8c-b25a-c3760089ed55'] = $pane;
    $display->panels['center'][0] = 'new-4250e2d0-ce4d-4c8c-b25a-c3760089ed55';
    $pane = new stdClass();
    $pane->pid = 'new-9465233b-dc90-49e7-b8ca-54d4b442bc4a';
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
    $pane->uuid = '9465233b-dc90-49e7-b8ca-54d4b442bc4a';
    $display->content['new-9465233b-dc90-49e7-b8ca-54d4b442bc4a'] = $pane;
    $display->panels['center'][1] = 'new-9465233b-dc90-49e7-b8ca-54d4b442bc4a';
    $pane = new stdClass();
    $pane->pid = 'new-73fab0f2-85c5-4978-822a-edfd933a7efe';
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
    $pane->uuid = '73fab0f2-85c5-4978-822a-edfd933a7efe';
    $display->content['new-73fab0f2-85c5-4978-822a-edfd933a7efe'] = $pane;
    $display->panels['side'][0] = 'new-73fab0f2-85c5-4978-822a-edfd933a7efe';
    $pane = new stdClass();
    $pane->pid = 'new-3e9a03f6-db32-49c2-8621-07649b2a82f5';
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
    $pane->uuid = '3e9a03f6-db32-49c2-8621-07649b2a82f5';
    $display->content['new-3e9a03f6-db32-49c2-8621-07649b2a82f5'] = $pane;
    $display->panels['side'][1] = 'new-3e9a03f6-db32-49c2-8621-07649b2a82f5';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c38516c2-bd86-4f14-b0a7-7717d0c89ae5';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
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
    $pane->uuid = 'c38516c2-bd86-4f14-b0a7-7717d0c89ae5';
    $display->content['new-c38516c2-bd86-4f14-b0a7-7717d0c89ae5'] = $pane;
    $display->panels['center'][0] = 'new-c38516c2-bd86-4f14-b0a7-7717d0c89ae5';
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

  return $pages;

}
