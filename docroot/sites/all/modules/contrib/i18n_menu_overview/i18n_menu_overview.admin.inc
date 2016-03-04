<?php
/**
 * @file
 * Admin page callbacks for the menu language module.
 */

 /**
  * Builds a form with all the menus to be enabled/disabled.
  */
function i18n_menu_overview_settings() {
  $menus = menu_get_menus();

  foreach ($menus as $menu => $localized_name) {
    $var_name_mnu = 'i18n_menu_overview_' . str_replace(' ', '_', $menu);
    $form[$var_name_mnu] = array(
      '#type' => 'checkbox',
      '#title' => t('Do you want to manage') . ' ' . $menu,
      '#default_value' => variable_get($var_name_mnu, FALSE),
    );
  }

  $form[I18N_MENU_OVERVIEW_ADMIN_SETTING_STUCTURE_OVERVIEW] = array(
    '#type' => 'select',
    '#title' => t('What kind of menu listing do you want at : /admin/structure?') ,
    '#description' => t('Default means: You will have an link for each menu
    and each language at the admin/structure page on the menu per language
    page you will also have the tabbed navigation to quickly switch between
    languages for that menu. The Small version will only have the tabbed
    navigation and one menu entry at /admin/structure.'),
    '#options' => array(
      I18N_MENU_OVERVIEW_DEFAULT_NAME => t('Default'),
      'small' => t('Small'),
      I18N_MENU_OVERVIEW_LOCAL_ACTION => t('Local action'),
    ),
    '#default_value' => variable_get(I18N_MENU_OVERVIEW_ADMIN_SETTING_STUCTURE_OVERVIEW, I18N_MENU_OVERVIEW_LOCAL_ACTION),
  );

  $form[I18N_MENU_OVERVIEW_ADMIN_SETTING_DETAIL_MENU] = array(
    '#type' => 'select',
    '#title' => t('What kind of menu detail do you want at : /admin/structure/[your-menu]?') ,
    '#options' => array(
      I18N_MENU_OVERVIEW_DEFAULT_NAME => t('Default (Tabs as in screenshots)'),
    //  I18N_MENU_OVERVIEW_MENU_LISTING => t('Menu of all other languages'),
      I18N_MENU_OVERVIEW_LOCAL_ACTION => t('Local action links'),
    ),
    '#default_value' => variable_get(I18N_MENU_OVERVIEW_ADMIN_SETTING_DETAIL_MENU, I18N_MENU_OVERVIEW_DEFAULT_NAME),
  );

  $form['i18n_menu_overview_hide_menu_links_on_node_form'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide the menu links on the node edit form?') ,
    '#default_value' => variable_get('i18n_menu_overview_hide_menu_links_on_node_form', FALSE),
  );

  $form['i18n_menu_overview_active_trail_fix'] = array(
    '#type' => 'checkbox',
    '#title' => t('If you have problems with the active trail of menu links,
      try this.') ,
    '#default_value' => variable_get('i18n_menu_overview_active_trail_fix', FALSE),
  );

  $jquery_update_link = l('Jquery update',
    'https://www.drupal.org/project/jquery_update',
      array('attributes' => array('target' => '_blank')));

  $form['i18n_menu_overview_show_filter'] = array(
    '#type' => 'checkbox',
    '#title' => t('If you want a filter to be available on the menu table,
      select this. Image: @image', array('@image' => I18N_MENU_OVERVIEW_FILTER_IMAGE)) ,
    '#default_value' => variable_get('i18n_menu_overview_show_filter', TRUE),
    '#description' => t('For this to work you will need to have @jq
      installed with at least version 1.7 selected for the administrative
      pages.', array('@jq' => $jquery_update_link))
  );

  $form['i18n_menu_overview_show_collapse'] = array(
    '#type' => 'checkbox',
    '#title' => t('If you want a collapse to be available on the menu table,
      select this. Image: @image', array('@image' => I18N_MENU_OVERVIEW_COLLAPSE_IMAGE)) ,
    '#default_value' => variable_get('i18n_menu_overview_show_collapse', TRUE),
    '#description' => t('For this to work you will need to have @jq
      installed with at least version 1.7 selected for the administrative pages.',
      array('@jq' => $jquery_update_link))
  );

  $form['#submit'][] = 'i18n_menu_overview_settings_form_submit';

  return system_settings_form($form);
}

 /**
  * Submit function that states flush caches.
  *
  * form @param $form the form.
  * form @param $form_state the form_state.
  */
function i18n_menu_overview_settings_form_submit($form, &$form_state) {
  drupal_set_message(t('Please flush caches when you have changed a setting :') . ' ' . l(t('Flush all caches'), 'admin/config/development/performance'));
  drupal_set_message(t('Please make this menu translatable at :') . ' ' . l(t('Menu overview'), 'admin/structure/menu'));
}
