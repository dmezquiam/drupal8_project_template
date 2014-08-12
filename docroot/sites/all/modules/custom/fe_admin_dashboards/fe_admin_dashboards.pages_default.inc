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

  return $pages;

}
