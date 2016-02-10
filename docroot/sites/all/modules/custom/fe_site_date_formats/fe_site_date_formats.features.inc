<?php
/**
 * @file
 * fe_site_date_formats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_site_date_formats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function fe_site_date_formats_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F d, Y'] = 'F d, Y';
  $custom_date_formats['M d, Y - h:ia'] = 'M d, Y - h:ia';
  $custom_date_formats['M dS, Y - h:ia'] = 'M dS, Y - h:ia';
  $custom_date_formats['M jS, Y g'] = 'M jS, Y g';
  $custom_date_formats['M jS, Y g A'] = 'M jS, Y g A';
  $custom_date_formats['d/m/Y - g'] = 'd/m/Y - g';
  $custom_date_formats['d/m/Y - g A'] = 'd/m/Y - g A';
  $custom_date_formats['d/m/Y - h a'] = 'd/m/Y - h a';
  $custom_date_formats['d/m/Y g:ia'] = 'd/m/Y g:ia';
  $custom_date_formats['d/m/y'] = 'd/m/y';
  $custom_date_formats['g a'] = 'g a';
  $custom_date_formats['g:ia'] = 'g:ia';
  $custom_date_formats['m/d/Y'] = 'm/d/Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function fe_site_date_formats_date_format_types() {
  $format_types = array();
  // Exported date format type: chat_long
  $format_types['chat_long'] = 'Chat long';
  // Exported date format type: chat_long_end
  $format_types['chat_long_end'] = 'Chat long end';
  // Exported date format type: chat_long_start
  $format_types['chat_long_start'] = 'Chat long start';
  // Exported date format type: chat_short_end
  $format_types['chat_short_end'] = 'Chat short end';
  // Exported date format type: chat_short_start
  $format_types['chat_short_start'] = 'Chat short start';
  // Exported date format type: comment_format
  $format_types['comment_format'] = 'Comment Format';
  // Exported date format type: video_short_format
  $format_types['video_short_format'] = 'Video short format';
  return $format_types;
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function fe_site_date_formats_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: chat_long::ar
  $locale_date_formats['chat_long::ar'] = array(
    'type' => 'chat_long',
    'format' => 'M d, Y - h:ia',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: chat_long::en
  $locale_date_formats['chat_long::en'] = array(
    'type' => 'chat_long',
    'format' => 'M dS, Y - h:ia',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: chat_long::es
  $locale_date_formats['chat_long::es'] = array(
    'type' => 'chat_long',
    'format' => 'd/m/Y g:ia',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: chat_long::fa
  $locale_date_formats['chat_long::fa'] = array(
    'type' => 'chat_long',
    'format' => 'M d, Y - h:ia',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: chat_long::pt-br
  $locale_date_formats['chat_long::pt-br'] = array(
    'type' => 'chat_long',
    'format' => 'M d, Y - h:ia',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: chat_long::ru
  $locale_date_formats['chat_long::ru'] = array(
    'type' => 'chat_long',
    'format' => 'M d, Y - h:ia',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: chat_long::zh-hans
  $locale_date_formats['chat_long::zh-hans'] = array(
    'type' => 'chat_long',
    'format' => 'M d, Y - h:ia',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: chat_long_end::ar
  $locale_date_formats['chat_long_end::ar'] = array(
    'type' => 'chat_long_end',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: chat_long_end::en
  $locale_date_formats['chat_long_end::en'] = array(
    'type' => 'chat_long_end',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: chat_long_end::es
  $locale_date_formats['chat_long_end::es'] = array(
    'type' => 'chat_long_end',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: chat_long_end::fa
  $locale_date_formats['chat_long_end::fa'] = array(
    'type' => 'chat_long_end',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: chat_long_end::pt-br
  $locale_date_formats['chat_long_end::pt-br'] = array(
    'type' => 'chat_long_end',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: chat_long_end::ru
  $locale_date_formats['chat_long_end::ru'] = array(
    'type' => 'chat_long_end',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: chat_long_end::zh-hans
  $locale_date_formats['chat_long_end::zh-hans'] = array(
    'type' => 'chat_long_end',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: chat_long_start::ar
  $locale_date_formats['chat_long_start::ar'] = array(
    'type' => 'chat_long_start',
    'format' => 'd/m/Y g:ia',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: chat_long_start::en
  $locale_date_formats['chat_long_start::en'] = array(
    'type' => 'chat_long_start',
    'format' => 'M dS, Y - h:ia',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: chat_long_start::es
  $locale_date_formats['chat_long_start::es'] = array(
    'type' => 'chat_long_start',
    'format' => 'd/m/Y g:ia',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: chat_long_start::fa
  $locale_date_formats['chat_long_start::fa'] = array(
    'type' => 'chat_long_start',
    'format' => 'd/m/Y g:ia',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: chat_long_start::pt-br
  $locale_date_formats['chat_long_start::pt-br'] = array(
    'type' => 'chat_long_start',
    'format' => 'd/m/Y g:ia',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: chat_long_start::ru
  $locale_date_formats['chat_long_start::ru'] = array(
    'type' => 'chat_long_start',
    'format' => 'd/m/Y g:ia',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: chat_long_start::zh-hans
  $locale_date_formats['chat_long_start::zh-hans'] = array(
    'type' => 'chat_long_start',
    'format' => 'd/m/Y g:ia',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: chat_short_end::ar
  $locale_date_formats['chat_short_end::ar'] = array(
    'type' => 'chat_short_end',
    'format' => 'g a',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: chat_short_end::en
  $locale_date_formats['chat_short_end::en'] = array(
    'type' => 'chat_short_end',
    'format' => 'g a',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: chat_short_end::es
  $locale_date_formats['chat_short_end::es'] = array(
    'type' => 'chat_short_end',
    'format' => 'g a',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: chat_short_end::fa
  $locale_date_formats['chat_short_end::fa'] = array(
    'type' => 'chat_short_end',
    'format' => 'g a',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: chat_short_end::pt-br
  $locale_date_formats['chat_short_end::pt-br'] = array(
    'type' => 'chat_short_end',
    'format' => 'g a',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: chat_short_end::ru
  $locale_date_formats['chat_short_end::ru'] = array(
    'type' => 'chat_short_end',
    'format' => 'g a',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: chat_short_end::zh-hans
  $locale_date_formats['chat_short_end::zh-hans'] = array(
    'type' => 'chat_short_end',
    'format' => 'g a',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: chat_short_start::ar
  $locale_date_formats['chat_short_start::ar'] = array(
    'type' => 'chat_short_start',
    'format' => 'd/m/Y - g',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: chat_short_start::en
  $locale_date_formats['chat_short_start::en'] = array(
    'type' => 'chat_short_start',
    'format' => 'M jS, Y g',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: chat_short_start::es
  $locale_date_formats['chat_short_start::es'] = array(
    'type' => 'chat_short_start',
    'format' => 'd/m/Y - g',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: chat_short_start::fa
  $locale_date_formats['chat_short_start::fa'] = array(
    'type' => 'chat_short_start',
    'format' => 'd/m/Y - g',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: chat_short_start::pt-br
  $locale_date_formats['chat_short_start::pt-br'] = array(
    'type' => 'chat_short_start',
    'format' => 'd/m/Y - g',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: chat_short_start::ru
  $locale_date_formats['chat_short_start::ru'] = array(
    'type' => 'chat_short_start',
    'format' => 'm/d/Y - H:i',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: chat_short_start::zh-hans
  $locale_date_formats['chat_short_start::zh-hans'] = array(
    'type' => 'chat_short_start',
    'format' => 'd/m/Y - g',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: comment_format::ar
  $locale_date_formats['comment_format::ar'] = array(
    'type' => 'comment_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: comment_format::en
  $locale_date_formats['comment_format::en'] = array(
    'type' => 'comment_format',
    'format' => 'm/d/Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: comment_format::es
  $locale_date_formats['comment_format::es'] = array(
    'type' => 'comment_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: comment_format::fa
  $locale_date_formats['comment_format::fa'] = array(
    'type' => 'comment_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: comment_format::pt-br
  $locale_date_formats['comment_format::pt-br'] = array(
    'type' => 'comment_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: comment_format::ru
  $locale_date_formats['comment_format::ru'] = array(
    'type' => 'comment_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: comment_format::zh-hans
  $locale_date_formats['comment_format::zh-hans'] = array(
    'type' => 'comment_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: long::ar
  $locale_date_formats['long::ar'] = array(
    'type' => 'long',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: long::en
  $locale_date_formats['long::en'] = array(
    'type' => 'long',
    'format' => 'F d, Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: long::es
  $locale_date_formats['long::es'] = array(
    'type' => 'long',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: long::fa
  $locale_date_formats['long::fa'] = array(
    'type' => 'long',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: long::pt-br
  $locale_date_formats['long::pt-br'] = array(
    'type' => 'long',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: long::ru
  $locale_date_formats['long::ru'] = array(
    'type' => 'long',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: long::zh-hans
  $locale_date_formats['long::zh-hans'] = array(
    'type' => 'long',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: medium::ar
  $locale_date_formats['medium::ar'] = array(
    'type' => 'medium',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: medium::en
  $locale_date_formats['medium::en'] = array(
    'type' => 'medium',
    'format' => 'F d, Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: medium::es
  $locale_date_formats['medium::es'] = array(
    'type' => 'medium',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: medium::fa
  $locale_date_formats['medium::fa'] = array(
    'type' => 'medium',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: medium::pt-br
  $locale_date_formats['medium::pt-br'] = array(
    'type' => 'medium',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: medium::ru
  $locale_date_formats['medium::ru'] = array(
    'type' => 'medium',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: medium::zh-hans
  $locale_date_formats['medium::zh-hans'] = array(
    'type' => 'medium',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: short::ar
  $locale_date_formats['short::ar'] = array(
    'type' => 'short',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: short::en
  $locale_date_formats['short::en'] = array(
    'type' => 'short',
    'format' => 'F d, Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: short::es
  $locale_date_formats['short::es'] = array(
    'type' => 'short',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: short::fa
  $locale_date_formats['short::fa'] = array(
    'type' => 'short',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: short::pt-br
  $locale_date_formats['short::pt-br'] = array(
    'type' => 'short',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: short::ru
  $locale_date_formats['short::ru'] = array(
    'type' => 'short',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: short::zh-hans
  $locale_date_formats['short::zh-hans'] = array(
    'type' => 'short',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  // Exported format: video_short_format::ar
  $locale_date_formats['video_short_format::ar'] = array(
    'type' => 'video_short_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: video_short_format::en
  $locale_date_formats['video_short_format::en'] = array(
    'type' => 'video_short_format',
    'format' => 'F d, Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: video_short_format::es
  $locale_date_formats['video_short_format::es'] = array(
    'type' => 'video_short_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'es',
    ),
  );
  // Exported format: video_short_format::fa
  $locale_date_formats['video_short_format::fa'] = array(
    'type' => 'video_short_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'fa',
    ),
  );
  // Exported format: video_short_format::pt-br
  $locale_date_formats['video_short_format::pt-br'] = array(
    'type' => 'video_short_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'pt-br',
    ),
  );
  // Exported format: video_short_format::ru
  $locale_date_formats['video_short_format::ru'] = array(
    'type' => 'video_short_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'ru',
    ),
  );
  // Exported format: video_short_format::zh-hans
  $locale_date_formats['video_short_format::zh-hans'] = array(
    'type' => 'video_short_format',
    'format' => 'd/m/y',
    'locales' => array(
      0 => 'zh-hans',
    ),
  );
  return $locale_date_formats;
}
