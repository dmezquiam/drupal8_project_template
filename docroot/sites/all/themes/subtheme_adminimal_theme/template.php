<?php

/**
 * @file
 * This file contains custom functions hooks and overrides for Adminimal theme.
 */

/**
 * Theme function to output tablinks for classic Quicktabs style tabs.
 *
 */
function adminimal_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => 'quicktabs-tabs quicktabs-style-' . $vars['tabset']['#options']['style'],
    ),
    'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active');
      }
      $item['data'] = drupal_render($tab);
      $variables['items'][] = $item;
    }
  }
  // Render block
  $block = module_invoke('views', 'block_view', 'user_information-block');
  $salida  = '</br><div class="dash-userinfo"><h2>Your information</h2>';
  $salida .= render($block['content']);
  $salida .= '</div>';

  $variables['items'][] .=  $salida; // add block to ul list

  drupal_add_css('css/navlist.css'); // add css
  drupal_add_js('js/quicktabs.js'); // add js

  return theme('item_list', $variables);
}
