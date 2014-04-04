<div class="contact-form">
  <h2><?php print t('CONTACT US'); ?></h2>
  <?php
    module_load_include('inc', 'contact', 'contact.pages');
    $form = drupal_get_form('contact_site_form');
    print render($form);
  ?>
</div>

