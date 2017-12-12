<?php
/**
 * @file
 * fe_newsletter.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fe_newsletter_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_mailchimp:admin/config/services/mailchimp.
  $menu_links['management_mailchimp:admin/config/services/mailchimp'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/mailchimp',
    'router_path' => 'admin/config/services/mailchimp',
    'link_title' => 'MailChimp',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage MailChimp Settings.',
      ),
      'identifier' => 'management_mailchimp:admin/config/services/mailchimp',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('MailChimp');

  return $menu_links;
}
