<?php
/**
 * @file
 * fe_site_config.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function fe_site_config_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_comments.
  $profiles['filtered_comments'] = array(
    'format' => 'filtered_comments',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Link' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 0,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'shiny',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'forcePasteAsPlainText' => 0,
      'pasteFromWordNumberedHeadingToList' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 1,
      'pasteFromWordRemoveStyles' => 1,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 0,
      'add_to_summaries' => 1,
      'version' => '4.5.7.e98277f',
    ),
    'name' => 'formatfiltered_comments',
    'rdf_mapping' => array(),
  );

  // Exported profile: filtered_html.
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyCenter' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'BidiLtr' => 1,
          'BidiRtl' => 1,
          'Link' => 1,
          'Image' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Iframe' => 1,
          'SpellChecker' => 1,
          'Scayt' => 1,
        ),
        'elfinder' => array(
          'elfinder' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'shiny',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'forcePasteAsPlainText' => 0,
      'pasteFromWordNumberedHeadingToList' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 1,
      'pasteFromWordRemoveStyles' => 1,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 0,
      'add_to_summaries' => 1,
      'version' => '4.5.7.e98277f',
    ),
    'name' => 'formatfiltered_html',
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'BidiLtr' => 1,
          'BidiRtl' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Iframe' => 1,
        ),
        'elfinder' => array(
          'elfinder' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'shiny',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'forcePasteAsPlainText' => 0,
      'pasteFromWordNumberedHeadingToList' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 1,
      'pasteFromWordRemoveStyles' => 1,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 0,
      'add_to_summaries' => 1,
      'version' => '4.5.7.e98277f',
    ),
    'name' => 'formatfull_html',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
