<?php
/**
 * @file
 * fe_videos.default_video_embed_styles.inc
 */

/**
 * Implements hook_default_video_embed_styles().
 */
function fe_videos_default_video_embed_styles() {
  $export = array();

  $video_embed_style = new stdClass();
  $video_embed_style->disabled = FALSE; /* Edit this to true to make a default video_embed_style disabled initially */
  $video_embed_style->api_version = 1;
  $video_embed_style->name = 'home_page';
  $video_embed_style->title = 'Home page';
  $video_embed_style->data = array(
    'youtube' => array(
      'width' => '620px',
      'height' => '509px',
      'theme' => 'dark',
      'autoplay' => 0,
      'vq' => 'large',
      'rel' => 0,
      'showinfo' => 1,
      'modestbranding' => 0,
      'iv_load_policy' => '1',
      'autohide' => '2',
    ),
    'vimeo' => array(
      'width' => '640px',
      'height' => '360px',
      'color' => '00adef',
      'portrait' => 1,
      'title' => 1,
      'byline' => 1,
      'autoplay' => 0,
      'loop' => 0,
    ),
    'data__active_tab' => 'edit-data-youtube',
  );
  $export['home_page'] = $video_embed_style;

  return $export;
}
