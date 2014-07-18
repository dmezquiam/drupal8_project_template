<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.
 */


function ijnet_pager_first(&$variables) {
	$variables['text'] = '';
	return theme_pager_first($variables);
}

function ijnet_pager_last(&$variables) {
	$variables['text'] = '';
	return theme_pager_last($variables);
}

function ijnet_pager_previous(&$variables) {
	if (!is_numeric($variables['text'])) {
		$variables['text'] = t('Prev');
	}
	return theme_pager_previous($variables);
}

function ijnet_pager_next(&$variables) {
	if (!is_numeric($variables['text'])) {
		$variables['text'] = t('Next');
	}
	return theme_pager_next($variables);
}


/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
function adaptivetheme_subtheme_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function adaptivetheme_subtheme_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_page(&$vars) {
}
function adaptivetheme_subtheme_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_node(&$vars) {
}
function adaptivetheme_subtheme_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_comment(&$vars) {
}
function adaptivetheme_subtheme_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_block(&$vars) {
}
function adaptivetheme_subtheme_process_block(&$vars) {
}
// */

function ijnet_theme_pager_first(&$variables) {
	kpr($variables);
	die('xxxxxx');
}

function ijnet_preprocess_comment(&$variables) {
  $variables['created'] = date('m/d/y', $variables['elements']['#node']->created);
  $variables['changed'] = date('m/d/y', $variables['elements']['#node']->created);

  $user = _ijnet_preprocess_comment(user_load($variables['comment']->uid));

  if ($variables['comment']->pid == 0) {
    $variables['submitted'] = 'Submitted by ' . $user . ' on ' . $variables['created'];
  }
  else {
    $parent = comment_load($variables['comment']->pid);
    if ($parent) {
      global $language;

      $variables['submitted'] = 'Submitted by ' . $user . ' on ' . $variables['created'] . ' in response to ';

      $parent_user = _ijnet_preprocess_comment(user_load($parent->uid));
      $variables['submitted'] .= '<a href="/' . $language->language . '/user/' . $parent->cid . '" title="View user profile." rel="author" class="username" typeof="sioc:UserAccount" property="foaf:name" datatype>' . $parent_user . '</a>';
    }
    else {
      $variables['submitted'] = 'Submitted by ' . $user . ' on ' . $variables['created']; 
    }
  }
}

/**
 * Returns the author name linked to it's profile in a string equal to $variables['author'], only that instead of returning it with the username it does it with the screen name
 */
function _ijnet_preprocess_comment($user) {

  return l($user->field_screen_name[LANGUAGE_NONE][0]['value'],'user/'.$user->uid, array('attributes' =>
            array(
              'title' => "View user profile.",
              'rel' => "author",
              'class' => "username",
              'xml:lang' => "",
              'about'=> 'user/'.$user->uid, 
              'typeof' => "sioc:UserAccount",
              'property' => "foaf:name",
              'datatype' => '',
            )));
}
