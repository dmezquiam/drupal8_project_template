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

function ijnet_preprocess_page(&$vars) {
//  kpr($vars);
}

function ijnet_preprocess_comment(&$variables) {
  $variables['created'] = date('m/d/y', $variables['elements']['#node']->created);
  $variables['changed'] = date('m/d/y', $variables['elements']['#node']->created);

  $user = _ijnet_preprocess_comment_get_user(user_load($variables['comment']->uid));

  if ($variables['comment']->pid == 0) {
    $variables['submitted'] = 'Submitted by ' . $user . ' on ' . $variables['created'];
  }
  else {
    $parent = comment_load($variables['comment']->pid);
    if ($parent) {
      global $language;

      $variables['submitted'] = 'Submitted by ' . $user . ' on ' . $variables['created'] . ' in response to ';

      $parent_user = _ijnet_preprocess_comment_get_user(user_load($parent->uid));
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
function _ijnet_preprocess_comment_get_user($user) {

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
