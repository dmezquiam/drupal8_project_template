<?php
/**
 * @file
 * fe_social.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fe_social_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_api';
  $strongarm->value = 'https://api.twitter.com';
  $export['twitter_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_key';
  $strongarm->value = 'vPhQwMUUdYosnFYlu9dKoQ';
  $export['twitter_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_secret';
  $strongarm->value = 'XzT6ECeRISWdDLIfmtt0lmUroMPqRU1IK9x7S6X1I';
  $export['twitter_consumer_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_expire';
  $strongarm->value = '0';
  $export['twitter_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_host';
  $strongarm->value = 'http://twitter.com';
  $export['twitter_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_import';
  $strongarm->value = 1;
  $export['twitter_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_search';
  $strongarm->value = 'http://search.twitter.com';
  $export['twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_tinyurl';
  $strongarm->value = 'http://tinyurl.com';
  $export['twitter_tinyurl'] = $strongarm;

  return $export;
}
