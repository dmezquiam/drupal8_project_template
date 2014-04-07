<?php
/**
 * @file
 * fe_site_config.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function fe_site_config_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['global']['default'] = array(
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  'additional_settings__active_tab_chat' => 'edit-workflow',
  'additional_settings__active_tab_news' => 'edit-workflow',
  'additional_settings__active_tab_page' => 'edit-workflow',
  'additional_settings__active_tab_profile' => 'edit-display',
  'additional_settings__active_tab_training_opportunity' => 'edit-workflow',
  'additional_settings__active_tab_video' => 'edit-workflow',
  'admin_theme' => 'shinytech',
  'anonymous' => 'Anonymous',
  'blockify_blocks' => array(
    'blockify-page-title' => 'blockify-page-title',
    'blockify-messages' => 'blockify-messages',
    'blockify-logo' => 0,
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-breadcrumb' => 0,
    'blockify-tabs' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  ),
  'browscap_imported' => 1386772390,
  'browscap_version' => 5020,
  'clean_url' => 1,
  'comment_anonymous_chat' => 0,
  'comment_anonymous_news' => 0,
  'comment_anonymous_page' => 0,
  'comment_anonymous_profile' => 0,
  'comment_anonymous_training_opportunity' => 0,
  'comment_anonymous_video' => 0,
  'comment_chat' => 1,
  'comment_default_mode_chat' => 1,
  'comment_default_mode_news' => 1,
  'comment_default_mode_page' => 1,
  'comment_default_mode_profile' => 1,
  'comment_default_mode_training_opportunity' => 1,
  'comment_default_mode_video' => 1,
  'comment_default_per_page_chat' => 50,
  'comment_default_per_page_news' => 50,
  'comment_default_per_page_page' => 50,
  'comment_default_per_page_profile' => 50,
  'comment_default_per_page_training_opportunity' => 50,
  'comment_default_per_page_video' => 50,
  'comment_form_location_chat' => 1,
  'comment_form_location_news' => 1,
  'comment_form_location_page' => 1,
  'comment_form_location_profile' => 1,
  'comment_form_location_training_opportunity' => 1,
  'comment_form_location_video' => 1,
  'comment_news' => 2,
  'comment_page' => 0,
  'comment_preview_chat' => 1,
  'comment_preview_news' => 1,
  'comment_preview_page' => 1,
  'comment_preview_profile' => 1,
  'comment_preview_training_opportunity' => 1,
  'comment_preview_video' => 1,
  'comment_profile' => 2,
  'comment_subject_field_chat' => 1,
  'comment_subject_field_news' => 1,
  'comment_subject_field_page' => 1,
  'comment_subject_field_profile' => 1,
  'comment_subject_field_training_opportunity' => 1,
  'comment_subject_field_video' => 1,
  'comment_training_opportunity' => 0,
  'comment_video' => 2,
  'context_block_rebuild_needed' => TRUE,
  'cron_key' => 'ZsdZGwSanoksmaRD67RsusqCU1O68jt52BK4BpnBxLk',
  'cron_last' => 1396888988,
  'css_js_query_string' => 'n3o9v4',
  'ctools_last_cron' => 1396878074,
  'custom_search_criteria_negative_display' => 0,
  'custom_search_criteria_negative_label' => 'Containing none of the words',
  'custom_search_criteria_negative_region' => 'block',
  'custom_search_criteria_negative_weight' => 8,
  'custom_search_criteria_or_display' => 0,
  'custom_search_criteria_or_label' => 'Containing any of the words',
  'custom_search_criteria_or_region' => 'block',
  'custom_search_criteria_or_weight' => 6,
  'custom_search_criteria_phrase_display' => 0,
  'custom_search_criteria_phrase_label' => 'Containing the phrase',
  'custom_search_criteria_phrase_region' => 'block',
  'custom_search_criteria_phrase_weight' => 7,
  'custom_search_custom_paths_region' => 'block',
  'custom_search_custom_paths_weight' => 9,
  'custom_search_delta' => '',
  'custom_search_hint_text' => 'Enter the terms you wish to search for.',
  'custom_search_image' => '',
  'custom_search_image_path' => 'public://custom_search/search_bt.png',
  'custom_search_label' => '',
  'custom_search_label_visibility' => 0,
  'custom_search_max_length' => 128,
  'custom_search_order' => array(
    'search_box' => array(
      'sort' => -1,
      'region' => 'block',
    ),
    'criteria_or' => array(
      'sort' => 6,
      'region' => 'block',
    ),
    'criteria_phrase' => array(
      'sort' => 7,
      'region' => 'block',
    ),
    'criteria_negative' => array(
      'sort' => 8,
      'region' => 'block',
    ),
    'custom_paths' => array(
      'sort' => 9,
      'region' => 'block',
    ),
    'submit_button' => array(
      'sort' => 10,
      'region' => 'block',
    ),
  ),
  'custom_search_paths' => '',
  'custom_search_paths_selector' => 'select',
  'custom_search_paths_selector_label' => 'Customize your search',
  'custom_search_paths_selector_label_visibility' => 1,
  'custom_search_search_box_region' => 'block',
  'custom_search_search_box_weight' => -1,
  'custom_search_size' => 15,
  'custom_search_submit_button_region' => 'block',
  'custom_search_submit_button_weight' => 10,
  'custom_search_submit_text' => 'Search',
  'custom_search_text' => 'Search the site...',
  'date_api_version' => 7.2,
  'date_db_tz_support' => FALSE,
  'date_default_timezone' => 'America/New_York',
  'date_format_video_short_format' => 'F d, Y',
  'default_field_group' => array(
    'group_profile|node|profile|form' => FALSE,
    'group_work|node|profile|form' => FALSE,
    'group_background|node|profile|form' => FALSE,
    'group_preferences|node|profile|form' => FALSE,
    'group_your_profile|user|user|form' => FALSE,
    'group_your_work|user|user|form' => FALSE,
    'group_your_background|user|user|form' => FALSE,
    'group_your_preferences|user|user|form' => FALSE,
  ),
  'default_nodes_main' => 10,
  'default_page_manager_pages' => array(
    'landing_page_clone' => TRUE,
  ),
  'drupal_http_request_fails' => FALSE,
  'drupal_private_key' => '-hyLEsx6bI1k8kyQLlm6SwatyREzNQasXAkqt-DkkA8',
  'elfinder_settings_filesystem_dirperm' => '0777',
  'elfinder_settings_filesystem_fileperm' => '0666',
  'elfinder_settings_filesystem_fileurl' => 'true',
  'elfinder_settings_filesystem_mimedetect' => 'auto',
  'elfinder_settings_filesystem_root' => 'custom',
  'elfinder_settings_filesystem_root_custom' => 'sites/default/files/upload',
  'elfinder_settings_filesystem_url_custom' => '/%files/upload',
  'elfinder_settings_misc_rememberlastdir' => 'true',
  'elfinder_settings_misc_usesystemjquery' => 'true',
  'elfinder_settings_thumbnail_dirname' => 'thumbnails',
  'elfinder_settings_thumbnail_imglib' => 'auto',
  'elfinder_settings_thumbnail_size' => 48,
  'email__active_tab' => 'edit-email-admin-created',
  'entity_translation_comment_filter_chat' => 0,
  'entity_translation_comment_filter_news' => 0,
  'entity_translation_comment_filter_page' => 0,
  'entity_translation_comment_filter_profile' => 0,
  'entity_translation_comment_filter_training_opportunity' => 0,
  'entity_translation_comment_filter_video' => 0,
  'entity_translation_entity_types' => array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'comment' => 0,
    'user' => 0,
  ),
  'entity_translation_hide_translation_links_chat' => 0,
  'entity_translation_hide_translation_links_news' => 0,
  'entity_translation_hide_translation_links_page' => 1,
  'entity_translation_hide_translation_links_profile' => 0,
  'entity_translation_hide_translation_links_training_opportunity' => 0,
  'entity_translation_hide_translation_links_video' => 0,
  'entity_translation_node_metadata_chat' => 0,
  'entity_translation_node_metadata_news' => 0,
  'entity_translation_node_metadata_page' => 0,
  'entity_translation_node_metadata_profile' => 0,
  'entity_translation_node_metadata_training_opportunity' => 0,
  'entity_translation_node_metadata_video' => 0,
  'entity_translation_settings_node__page' => array(
    'default_language' => 'und',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_taxonomy_term__category' => array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_taxonomy_term__tags' => array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_taxonomy_term__topic' => array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_shared_labels' => 1,
  'entity_translation_workflow_enabled' => 0,
  'features_codecache' => array(
    'fe_news' => array(
      'field_base' => '23d614c495070b4d9efd9902d5eb7008',
      'field_instance' => 'ccd51084fa50886da679ca0ed5356569',
      'dependencies' => '2e1c5d38c9840df3a46ca2d6e9527228',
      'node' => 'e36dbfbb9b5cbcdd4a75ea75bcb84e3e',
      'taxonomy' => '55d6f5fb045f9cc20bc148a480ac8d10',
      'quicktabs' => '7f362f5684f8651e1bdb3753434ab93a',
      'context' => '3a58bc06eaa65b775f4fabecbff43f35',
      'views_view' => '401d43a431f99ab95e762fe7f02979c3',
    ),
    'fe_videos' => array(
      'field_base' => '9b72f8e7e34909cd3b3dd431b6a44001',
      'field_instance' => 'cc6b7b7f740c659170ae5b501f7cf064',
      'dependencies' => '3bffea4ab74037fcd75b5a8cf0159f27',
      'node' => '26371fd84c7cc2cdf9c0ee4725eccb74',
      'fe_nodequeue' => '73a62d76fa8f455a694bd1860a48fb69',
      'context' => '8aaa6cb09f94221eab8d101e2a1a5eb1',
      'views_view' => 'd29bb812596344350443e058a3a7d63f',
      'page_manager_pages' => 'f008d7bde586db7684620a195cb19955',
      'vef_video_styles' => '62d242a3119b4261ad36f0c4c13fa62e',
    ),
    'fe_chat' => array(
      'field_base' => 'eed917efe1445d022d6f4c733099ee38',
      'field_instance' => 'ddff9f9f627ce0f1b1616a0fad0ec00d',
      'dependencies' => '278eb0c44d7e0bbeb4c50c7c03034528',
      'node' => '583e1a5ee92605565ffaff5b2f647871',
      'context' => '8fa33df9a76e1864593c2a94eef498d6',
    ),
    'fe_opportunity' => array(
      'field_base' => '30af72eeabe8db460dd413a54875a30f',
      'field_instance' => '6a647a529537db3545c86ad144c0ba6d',
      'dependencies' => 'aabb96942b0a8bce295214e98a540aef',
      'node' => 'be2fd66ae85fa184378d9a7dfd27afe5',
      'taxonomy' => '95d331fb275fce60e77a6b2353cc6e54',
      'context' => '4e373c620614980942236f6047cddbf0',
      'quicktabs' => 'e11e799f77b91e861a457f3c5c95e114',
      'views_view' => 'c4a0a6daebd63949f3af3de600097141',
    ),
    'fe_site_config' => array(
      'variable_realm' => '8989b5da0f74e3dbf80bc905dcba43f8',
      'ckeditor_profile' => '390411b15c72a5d461cd29a117094df7',
      'fe_block_boxes' => FALSE,
      'field_base' => '04dafd6b4b0c3b0ab1f24c0c314551ad',
      'field_instance' => 'dc15b8d0d8cba71240a71ce464d0b455',
      'filter' => '481a1f072ba5fde84629e6b03fa1b49a',
      'language' => 'dddd43728b6dacdee1f75c95d1ce43a6',
      'menu_custom' => '42d52b5ef049f69fb8e95e5bf4430fca',
      'taxonomy' => '924a22b8d7de53dcec2e4e13b79424a3',
      'user_role' => '57d23ee3deb6e9262fa3b2617586b072',
    ),
  ),
  'features_ignored_orphans' => array(),
  'features_semaphore' => array(),
  'field_bundle_settings_comment__comment_node_news' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'author' => array(
          'weight' => -2,
        ),
        'subject' => array(
          'weight' => -1,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__chat' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 5,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__news' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 12,
        ),
        'language' => array(
          'weight' => 1,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__page' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'language' => array(
          'weight' => 1,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__profile' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => -5,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__training_opportunity' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 11,
        ),
        'language' => array(
          'weight' => 10,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__video' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 3,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_user__user' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => 4,
        ),
        'account' => array(
          'weight' => 0,
        ),
        'timezone' => array(
          'weight' => 3,
        ),
        'picture' => array(
          'weight' => 2,
        ),
        'locale' => array(
          'weight' => 1,
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => 5,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  ),
  'file_temporary_path' => '/tmp',
  'filter_fallback_format' => 'plain_text',
  'fontyourface_css_md5' => 'd41d8cd98f00b204e9800998ecf8427e',
  'fontyourface_short_preview_text' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit...',
  'i18n_string_allowed_formats' => array(
    'filtered_html' => 'filtered_html',
    'full_html' => 'full_html',
    'plain_text' => 'plain_text',
  ),
  'i18n_string_source_language' => 'en',
  'install_profile' => 'standard',
  'install_task' => 'done',
  'install_time' => 1374774924,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'sites/all/modules/contrib/jquery_update/replace/jquery/1.7/jquery.min.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/modules/contrib/panels/js/panels.js',
    4 => 'sites/all/modules/contrib/devel/devel_krumo_path.js',
    5 => 'sites/all/modules/contrib/custom_search/js/custom_search.js',
    6 => 'sites/all/modules/contrib/features/features.js',
    7 => 'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js',
    8 => 'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.min.js',
    9 => 'misc/form.js',
    10 => 'misc/progress.js',
    11 => 'misc/ajax.js',
    12 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
    13 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js',
    14 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js',
    15 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js',
    16 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js',
    17 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js',
    18 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js',
    19 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js',
    20 => 'sites/all/modules/contrib/views/js/jquery.ui.dialog.patch.js',
    21 => 'sites/all/modules/contrib/boxes/boxes.js',
    22 => 'misc/collapse.js',
    23 => 'misc/autocomplete.js',
    24 => 'modules/contextual/contextual.js',
    25 => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
    'refresh:es' => 'waiting',
    'refresh:ru' => 'waiting',
    'refresh:ar' => 'waiting',
    'refresh:zh-hans' => 'waiting',
    'refresh:fa' => 'waiting',
    'refresh:pt-br' => 'waiting',
  ),
  'jquery_update_compression_type' => 'min',
  'jquery_update_jquery_cdn' => 'none',
  'jquery_update_jquery_version' => 1.7,
  'language_content_type_chat' => 4,
  'language_content_type_news' => 4,
  'language_content_type_page' => 4,
  'language_content_type_profile' => 0,
  'language_content_type_training_opportunity' => 4,
  'language_content_type_video' => 4,
  'language_count' => 7,
  'language_default' => array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -10,
    'javascript' => '',
  ),
  'language_negotiation_language' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'language_negotiation_language_content' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  ),
  'lang_dropdown_167' => array(
    'showall' => 0,
    'tohome' => 0,
    'width' => 165,
    'display' => 1,
    'widget' => 0,
    'msdropdown' => array(
      'visible_rows' => NULL,
      'rounded' => NULL,
      'animation' => NULL,
      'event' => NULL,
      'skin' => NULL,
      'custom_skin' => NULL,
    ),
    'chosen' => array(
      'disable_search' => NULL,
      'no_results_text' => NULL,
    ),
    'ddslick' => array(
      'ddslick_height' => NULL,
      'showSelectedHTML' => 1,
      'imagePosition' => 'left',
      'skin' => NULL,
      'custom_skin' => NULL,
    ),
    'languageicons' => array(
      'flag_position' => 1,
    ),
  ),
  'lang_dropdown_language_content' => array(
    'showall' => 0,
    'tohome' => 0,
    'width' => 165,
    'display' => 1,
    'widget' => 3,
    'msdropdown' => array(
      'visible_rows' => 5,
      'rounded' => 1,
      'animation' => 'slideDown',
      'event' => 'click',
      'skin' => 'ldsSkin',
      'custom_skin' => '',
    ),
    'chosen' => array(
      'disable_search' => 1,
      'no_results_text' => 'No language match',
    ),
    'ddslick' => array(
      'ddslick_height' => 0,
      'showSelectedHTML' => 1,
      'imagePosition' => 'left',
      'skin' => 'custom',
      'custom_skin' => 'ijnet-language-dropdown',
    ),
    'languageicons' => array(
      'flag_position' => 1,
    ),
  ),
  'locale_field_language_fallback' => 1,
  'locale_language_negotiation_url_part' => 0,
  'locale_language_providers_weight_language' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'locale_language_providers_weight_language_content' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'locale-interface' => 8,
    'language-default' => 10,
  ),
  'menu_default_active_menus' => array(
    1 => 'main-menu',
    2 => 'management',
    3 => 'navigation',
    4 => 'user-menu',
    5 => 'devel',
  ),
  'menu_expanded' => array(),
  'menu_masks' => array(
    0 => 501,
    1 => 494,
    2 => 493,
    3 => 490,
    4 => 250,
    5 => 247,
    6 => 246,
    7 => 245,
    8 => 242,
    9 => 234,
    10 => 126,
    11 => 125,
    12 => 124,
    13 => 123,
    14 => 122,
    15 => 121,
    16 => 118,
    17 => 117,
    18 => 108,
    19 => 63,
    20 => 62,
    21 => 61,
    22 => 60,
    23 => 59,
    24 => 58,
    25 => 54,
    26 => 45,
    27 => 44,
    28 => 31,
    29 => 30,
    30 => 29,
    31 => 28,
    32 => 27,
    33 => 26,
    34 => 24,
    35 => 23,
    36 => 22,
    37 => 21,
    38 => 20,
    39 => 15,
    40 => 14,
    41 => 13,
    42 => 11,
    43 => 10,
    44 => 7,
    45 => 6,
    46 => 5,
    47 => 3,
    48 => 2,
    49 => 1,
  ),
  'menu_options_chat' => array(
    0 => 'main-menu',
  ),
  'menu_options_news' => array(
    0 => 'main-menu',
  ),
  'menu_options_page' => array(
    0 => 'main-menu',
  ),
  'menu_options_profile' => array(
    0 => 'main-menu',
  ),
  'menu_options_training_opportunity' => array(
    0 => 'main-menu',
  ),
  'menu_options_video' => array(
    0 => 'main-menu',
  ),
  'menu_parent_chat' => 'main-menu:0',
  'menu_parent_news' => 'main-menu:0',
  'menu_parent_page' => 'main-menu:0',
  'menu_parent_profile' => 'main-menu:0',
  'menu_parent_training_opportunity' => 'main-menu:0',
  'menu_parent_video' => 'main-menu:0',
  'nodequeue_links' => FALSE,
  'node_admin_theme' => 1,
  'node_cron_last' => 1396637110,
  'node_options_chat' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_news' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_page' => array(
    0 => 'status',
  ),
  'node_options_profile' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_training_opportunity' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_video' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_preview_chat' => 1,
  'node_preview_news' => 1,
  'node_preview_page' => 1,
  'node_preview_profile' => 1,
  'node_preview_training_opportunity' => 1,
  'node_preview_video' => 1,
  'node_submitted_chat' => 0,
  'node_submitted_news' => 0,
  'node_submitted_page' => 0,
  'node_submitted_profile' => 0,
  'node_submitted_training_opportunity' => 0,
  'node_submitted_video' => 0,
  'panelizer_defaults_node_article' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_node_chat' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_node_news' => array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_node_page' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_node_profile' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_node_training_opportunity' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_node_video' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_taxonomy_term_category' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_taxonomy_term_tags' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_taxonomy_term_topic' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'panelizer_defaults_user_user' => array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  ),
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_node_pattern' => 'content/[node:title]',
  'pathauto_punctuation_hyphen' => 1,
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_user_pattern' => 'users/[user:name]',
  'path_alias_whitelist' => array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  ),
  'prepro' => array(
    'additional' => array(
      'sassy' => array(
        'errors' => 'output',
        'style' => 'nested',
      ),
    ),
    'filetypes' => array(
      'sass' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/onload',
        'cache_path' => 'public://prepro',
      ),
      'scss' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/onload',
        'cache_path' => 'public://prepro',
      ),
    ),
    'show_warnings' => TRUE,
  ),
  'responsive_menus_css_selectors' => '#main-menu
#primary-menu-bar
#secondary-menu-bar
#toolbar-menu
.toolbar-shortcuts',
  'responsive_menus_disable_mouse_events' => array(
    1 => 0,
  ),
  'responsive_menus_ignore_admin' => array(
    1 => 1,
  ),
  'responsive_menus_mean_menu_close_size' => '18px',
  'responsive_menus_mean_menu_close_txt' => 'X',
  'responsive_menus_mean_menu_contract_txt' => '-',
  'responsive_menus_mean_menu_css_selectors' => '#main-menu',
  'responsive_menus_mean_menu_expand_children' => 1,
  'responsive_menus_mean_menu_expand_txt' => '+',
  'responsive_menus_mean_menu_media_size' => 480,
  'responsive_menus_mean_menu_position' => 'right',
  'responsive_menus_mean_menu_remove_attrs' => 1,
  'responsive_menus_mean_menu_show_children' => 1,
  'responsive_menus_mean_menu_trigger_txt' => '<span /><span /><span />',
  'responsive_menus_media_size' => 768,
  'responsive_menus_no_jquery_update' => array(
    1 => 0,
  ),
  'responsive_menus_remove_attributes' => array(
    1 => 1,
  ),
  'responsive_menus_simple_absolute' => array(
    1 => 1,
  ),
  'responsive_menus_simple_text' => '☰ Menu',
  'responsive_menus_style' => 'responsive_menus_simple',
  'save_continue_chat' => 'Save and add fields',
  'save_continue_news' => 'Save and add fields',
  'save_continue_profile' => 'Save and add fields',
  'save_continue_training_opportunity' => 'Save and add fields',
  'save_continue_video' => 'Save and add fields',
  'site_403' => '',
  'site_404' => '',
  'site_default_country' => 'US',
  'site_frontpage' => 'home',
  'site_mail' => 'miquel@easytech.com.ar',
  'site_name' => 'IJNet',
  'site_slogan' => '',
  'statistics_day_timestamp' => 1396878055,
  'tabs__active_tab' => 'edit-taxonomy-term',
  'theme_adaptivetheme_subtheme_files_directory' => 'public://adaptivetheme/adaptivetheme_subtheme_files',
  'theme_adaptivetheme_subtheme_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon.ico',
    'favicon_upload' => '',
    'bigscreen_layout' => 'two_sidebars_right',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => 25,
    'bigscreen_sidebar_second' => 25,
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => 100,
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => 1140,
    'bigscreen_media_query' => 'only screen and (min-width:1025px)',
    'tablet_landscape_layout' => 'two_sidebars_right_stack',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => 20,
    'tablet_landscape_sidebar_second' => 20,
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => 100,
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'two_sidebars_right_stack',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => 50,
    'tablet_portrait_sidebar_second' => 50,
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => 100,
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smartphone_landscape_layout' => 'one_col_vert',
    'smartphone_landscape_sidebar_unit' => '%',
    'smartphone_landscape_sidebar_first' => 50,
    'smartphone_landscape_sidebar_second' => 50,
    'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smartphone_landscape_page_width' => 100,
    'smartphone_landscape_page_unit' => '%',
    'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
    'smartphone_portrait_page_width' => 100,
    'smartphone_portrait_page_unit' => '%',
    'smartphone_portrait_sidebar_first' => 100,
    'smartphone_portrait_sidebar_second' => 100,
    'smartphone_portrait_sidebar_unit' => '%',
    'smartphone_portrait_layout' => 'one_col_stack',
    'bigscreen_three_25_25_50' => 'three-25-25-50',
    'bigscreen_three_3x33' => 'three-3x33',
    'bigscreen_three_50_25_25' => 'three-50-25-25',
    'bigscreen_three_25_50_25' => 'three-25-50-25',
    'bigscreen_two_50' => 'two-50',
    'bigscreen_two_brick' => 'two-brick',
    'bigscreen_two_66_33' => 'two-66-33',
    'bigscreen_two_33_66' => 'two-33-66',
    'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
    'bigscreen_four_4x25' => 'four-4x25',
    'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
    'bigscreen_three_inset_right' => 'three-inset-right',
    'bigscreen_three_inset_left' => 'three-inset-left',
    'tablet_landscape_three_25_25_50' => 'three-25-25-50',
    'tablet_landscape_three_3x33' => 'three-3x33',
    'tablet_landscape_three_50_25_25' => 'three-50-25-25',
    'tablet_landscape_three_25_50_25' => 'three-25-50-25',
    'tablet_landscape_two_50' => 'two-50',
    'tablet_landscape_two_brick' => 'two-brick',
    'tablet_landscape_two_66_33' => 'two-66-33',
    'tablet_landscape_two_33_66' => 'two-33-66',
    'tablet_landscape_five_5x20' => 'five-5x20-2x3-grid',
    'tablet_landscape_four_4x25' => 'four-4x25',
    'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
    'tablet_landscape_three_inset_right' => 'three-inset-right',
    'tablet_landscape_three_inset_left' => 'three-inset-left',
    'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
    'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
    'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
    'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
    'tablet_portrait_two_50' => 'two-50',
    'tablet_portrait_two_brick' => 'two-brick',
    'tablet_portrait_two_66_33' => 'two-66-33',
    'tablet_portrait_two_33_66' => 'two-33-66',
    'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
    'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
    'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
    'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
    'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
    'smartphone_landscape_three_25_25_50' => 'three-25-25-50-stack',
    'smartphone_landscape_three_3x33' => 'three-3x33-stack',
    'smartphone_landscape_three_50_25_25' => 'three-50-25-25-stack',
    'smartphone_landscape_three_25_50_25' => 'three-25-50-25-stack',
    'smartphone_landscape_two_50' => 'two-50-stack',
    'smartphone_landscape_two_brick' => 'two-brick-stack',
    'smartphone_landscape_two_66_33' => 'two-66-33-stack',
    'smartphone_landscape_two_33_66' => 'two-33-66-stack',
    'smartphone_landscape_five_5x20' => 'five-5x20-stack',
    'smartphone_landscape_four_4x25' => 'four-4x25-stack',
    'smartphone_landscape_six_6x16' => 'six-6x16-stack',
    'smartphone_landscape_three_inset_right' => 'three-inset-right-stack',
    'smartphone_landscape_three_inset_left' => 'three-inset-left-stack',
    'enable_custom_media_queries' => 1,
    'global_default_layout_toggle' => 0,
    'global_default_layout' => 'smartphone-portrait',
    'global_files_path' => 'public_files',
    'custom_files_path' => '',
    'disable_responsive_styles' => 0,
    'load_html5js' => 1,
    'load_onmediaqueryjs' => 0,
    'load_ltie8css' => 0,
    'load_respondjs' => 0,
    'load_scalefixjs' => 0,
    'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1',
    'adaptivetheme_meta_mobileoptimized' => 'width',
    'adaptivetheme_meta_handheldfriendly' => 'true',
    'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
    'chrome_edge' => 0,
    'clear_type' => 0,
    'expose_regions' => 0,
    'show_window_size' => 0,
    'atcore_version_test' => 0,
    'load_all_panels' => 0,
    'load_all_panels_no_sidebars' => 0,
    'enable_extensions' => 0,
    'enable_font_settings' => 0,
    'enable_heading_settings' => 0,
    'enable_image_settings' => 0,
    'enable_apple_touch_icons' => 0,
    'enable_exclude_css' => 0,
    'enable_custom_css' => 0,
    'enable_context_regions' => 0,
    'enable_float_region_blocks' => 0,
    'enable_markup_overides' => 0,
    'at-settings__active_tab' => 'edit-debug',
    'at_core' => '7.x-3.x',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  ),
  'theme_default' => 'ijnet',
  'theme_ijnet_files_directory' => 'public://adaptivetheme/ijnet_files',
  'theme_ijnet_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three_col_grail',
    'bigscreen_sidebar_unit' => 'px',
    'bigscreen_sidebar_first' => 33.333333,
    'bigscreen_sidebar_second' => 330,
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => 100,
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => 990,
    'bigscreen_media_query' => 'only screen and (min-width:990px)',
    'tablet_landscape_layout' => 'three_col_grail',
    'tablet_landscape_sidebar_unit' => 'px',
    'tablet_landscape_sidebar_first' => 1,
    'tablet_landscape_sidebar_second' => 330,
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => 100,
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:989px)',
    'tablet_portrait_layout' => 'one_col_stack',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => 50,
    'tablet_portrait_sidebar_second' => 50,
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => 100,
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smartphone_landscape_layout' => 'one_col_stack',
    'smartphone_landscape_sidebar_unit' => 'px',
    'smartphone_landscape_sidebar_first' => 50,
    'smartphone_landscape_sidebar_second' => 320,
    'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smartphone_landscape_page_width' => 100,
    'smartphone_landscape_page_unit' => '%',
    'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
    'smartphone_portrait_page_width' => 100,
    'smartphone_portrait_page_unit' => '%',
    'smartphone_portrait_sidebar_first' => 100,
    'smartphone_portrait_sidebar_second' => 100,
    'smartphone_portrait_sidebar_unit' => '%',
    'smartphone_portrait_layout' => 'one_col_stack',
    'bigscreen_three_25_25_50' => 'three-25-25-50',
    'bigscreen_three_3x33' => 'three-3x33-stack-bottom',
    'bigscreen_three_50_25_25' => 'three-50-25-25-stack-bottom',
    'bigscreen_three_25_50_25' => 'three-25-50-25',
    'bigscreen_two_50' => 'two-50',
    'bigscreen_two_brick' => 'two-brick-stack',
    'bigscreen_two_66_33' => 'two-66-33',
    'bigscreen_two_33_66' => 'two-33-66',
    'bigscreen_brick_66_33' => 'two-66-33',
    'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
    'bigscreen_four_4x25' => 'four-4x25',
    'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
    'bigscreen_three_inset_right' => 'three-inset-right',
    'bigscreen_three_inset_left' => 'three-inset-left',
    'tablet_landscape_three_25_25_50' => 'three-25-25-50',
    'tablet_landscape_three_3x33' => 'three-3x33-stack-bottom',
    'tablet_landscape_three_50_25_25' => 'three-50-25-25-stack-bottom',
    'tablet_landscape_three_25_50_25' => 'three-25-50-25',
    'tablet_landscape_two_50' => 'two-50',
    'tablet_landscape_two_brick' => 'two-brick',
    'tablet_landscape_two_66_33' => 'two-66-33',
    'tablet_landscape_two_33_66' => 'two-33-66',
    'tablet_landscape_brick_66_33' => 'two-66-33',
    'tablet_landscape_five_5x20' => 'five-5x20-2x3-grid',
    'tablet_landscape_four_4x25' => 'four-4x25',
    'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
    'tablet_landscape_three_inset_right' => 'three-inset-right',
    'tablet_landscape_three_inset_left' => 'three-inset-left',
    'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
    'tablet_portrait_three_3x33' => 'three-3x33-stack-bottom',
    'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-bottom',
    'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
    'tablet_portrait_two_50' => 'two-50',
    'tablet_portrait_two_brick' => 'two-brick',
    'tablet_portrait_two_66_33' => 'two-66-33',
    'tablet_portrait_two_33_66' => 'two-33-66',
    'tablet_portrait_brick_66_33' => 'two-66-33-stack',
    'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
    'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
    'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
    'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
    'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
    'smartphone_landscape_three_25_25_50' => 'three-25-25-50-stack',
    'smartphone_landscape_three_3x33' => 'three-3x33-stack',
    'smartphone_landscape_three_50_25_25' => 'three-50-25-25-stack',
    'smartphone_landscape_three_25_50_25' => 'three-25-50-25-stack',
    'smartphone_landscape_two_50' => 'two-50-stack',
    'smartphone_landscape_two_brick' => 'two-brick-stack',
    'smartphone_landscape_two_66_33' => 'two-66-33-stack',
    'smartphone_landscape_two_33_66' => 'two-33-66-stack',
    'smartphone_landscape_brick_66_33' => 'two-66-33-stack',
    'smartphone_landscape_five_5x20' => 'five-5x20-stack',
    'smartphone_landscape_four_4x25' => 'four-4x25-stack',
    'smartphone_landscape_six_6x16' => 'six-6x16-stack',
    'smartphone_landscape_three_inset_right' => 'three-inset-right-stack',
    'smartphone_landscape_three_inset_left' => 'three-inset-left-stack',
    'enable_custom_media_queries' => 1,
    'global_default_layout_toggle' => 0,
    'global_default_layout' => 'smartphone-portrait',
    'global_files_path' => 'public_files',
    'custom_files_path' => '',
    'disable_responsive_styles' => 0,
    'load_html5js' => 1,
    'load_onmediaqueryjs' => 0,
    'load_ltie8css' => 0,
    'load_respondjs' => 0,
    'load_scalefixjs' => 0,
    'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1',
    'adaptivetheme_meta_mobileoptimized' => 'width',
    'adaptivetheme_meta_handheldfriendly' => 'true',
    'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
    'chrome_edge' => 0,
    'clear_type' => 0,
    'expose_regions' => 0,
    'show_window_size' => 1,
    'atcore_version_test' => 0,
    'load_all_panels' => 0,
    'load_all_panels_no_sidebars' => 0,
    'enable_extensions' => 1,
    'enable_font_settings' => 0,
    'enable_heading_settings' => 0,
    'enable_image_settings' => 0,
    'enable_apple_touch_icons' => 0,
    'enable_exclude_css' => 0,
    'enable_custom_css' => 0,
    'enable_context_regions' => 0,
    'enable_float_region_blocks' => 0,
    'enable_markup_overides' => 1,
    'at-settings__active_tab' => 'edit-debug',
    'global_gutter_width' => '',
    'page_full_width_wrappers' => 0,
    'page_content_type_suggestions' => 0,
    'menu_item_span_elements' => 0,
    'breadcrumb_display' => 1,
    'breadcrumb_home' => 0,
    'breadcrumb_label' => 0,
    'breadcrumb_title' => 0,
    'breadcrumb_separator' => ' &#187; ',
    'login_block_remove_links' => 0,
    'login_block_remove_openid' => 0,
    'horizontal_login_block' => 0,
    'frontpage_remove_title' => 0,
    'unset_block_system_main_front' => 0,
    'feed_icons_hide' => 1,
    'comments_hide_title' => 0,
    'unset_menu_titles' => 0,
    'adv_search_extra_fieldsets' => 0,
    'skip_link_target' => '#main-content',
    'rel_author' => 1,
    'extra_page_classes' => 1,
    'extra_article_classes' => 1,
    'extra_comment_classes' => 1,
    'extra_block_classes' => 1,
    'extra_menu_classes' => 1,
    'extra_item_list_classes' => 1,
    'at__active_tab' => 'edit-modify-output',
    'at_core' => '7.x-3.x',
  ),
  'translation_language_type' => 'language_content',
  'update_last_check' => 1396893380,
  'update_notify_emails' => array(
    0 => 'miquel@easytech.com.ar',
  ),
  'user_admin_role' => 3,
  'user_cancel_method' => 'user_cancel_block',
  'user_email_verification' => 1,
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_activated_notify' => 1,
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_notify' => 0,
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_notify' => 0,
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
  'user_pictures' => 1,
  'user_picture_default' => 'sites/all/themes/ijnet_theme/images/default-avatar.jpg',
  'user_picture_dimensions' => '1024x1024',
  'user_picture_file_size' => 800,
  'user_picture_guidelines' => '',
  'user_picture_path' => 'pictures',
  'user_picture_style' => 'avatar_img',
  'user_register' => 2,
  'user_signatures' => 0,
  'variable_module_list' => array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'variable_realm' => array(
      0 => 'variable_realm_list_global',
      1 => 'variable_realm_list_language',
      2 => 'variable_realm_weight_global',
      3 => 'variable_realm_weight_language',
    ),
    'i18n_variable' => array(
      0 => 'i18n_variable_conf',
      1 => 'i18n_variable_list',
    ),
  ),
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
  ),
  'views_block_hashes' => array(
    '007e44eea764e805b2d71698c6d0bef2' => 'view_search_block_user-browse_author',
    'b24c105b349e450c23451f9278b6d44c' => 'view_search_block_user-about_the_author',
    '1c95a53a74c3acf023ba362f2ce3afeb' => 'news_search_block-browse_by_category',
    'a66f88ddd5cdac2f4431afb3349ecc92' => 'opportunities_views-related_opportunity',
    '15275b6301e5dc10a482387ea39a018c' => 'opportunities_views-opportunities_ending_soon',
    '5d5ecc45f8b3c10c95b217b933b68d75' => 'opportunities_views-recent_opportunities_home',
    '9ac579de52d200beadfd332b3819a3d1' => 'opportunities_views-opportunities_ending_soon_block',
  ),
  'views_localization_plugin' => 'i18nstrings',
);
  $realm_variables['language']['ar'] = array();
  $realm_variables['language']['en'] = array(
  'site_name' => 'IJNet',
  'site_slogan' => '',
);
  $realm_variables['language']['es'] = array();
  $realm_variables['language']['fa'] = array();
  $realm_variables['language']['pt-br'] = array();
  $realm_variables['language']['ru'] = array();
  $realm_variables['language']['zh-hans'] = array();

return $realm_variables;
}
