<?php
/**
 * @file
 * This alters the menu settings on the node add/Edit page.
 */

/**
 * Implements hook_form_ID_alter().
 *
 * Removes the ('disabled' links on the node edit form.)
 */
function i18n_menu_overview_form_node_form_alter(&$form, $form_state, $form_id) {
  if ($form['#node_edit_form'] && strpos($form_id, '_node_form') !== FALSE) {

    if(isset($form['menu']['link']['parent'])) {
      foreach ($form['menu']['link']['parent']['#options'] as $index => $option) {
        if (strpos($option, 'disabled') !== FALSE) {
          unset($form['menu']['link']['parent']['#options'][$index]);
        }
      }
    }

   $hide_menu_links =  variable_get('i18n_menu_overview_hide_menu_links_on_node_form', FALSE);

    if ($hide_menu_links) {
      $form['menu']['#access'] = FALSE;
    }
  }
}
