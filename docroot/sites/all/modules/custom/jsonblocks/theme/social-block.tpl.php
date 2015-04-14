<div class="social-icons clearfix">
  <?php foreach ($urls as $icon) : ?>
    <a href="<?php print $icon['url'];?>" class="social-icon <?php print $icon['class'];?>" target="_blank"></a>
  <?php endforeach ?>
</div>
<div class="mail-subscribe">
	<div class="dropdown">
		<div class="no-js">
			<div class="clicker">
        <h4><?php print t("Subscribe to our email bulletin"); ?></h4>
			</div>
			<div class="inner-dropdown">
        <?php
          $form = drupal_get_form('fe_newsletter_subscribe_form');
          print drupal_render($form);
        ?>
			</div>
		</div>
	</div>
</div>
