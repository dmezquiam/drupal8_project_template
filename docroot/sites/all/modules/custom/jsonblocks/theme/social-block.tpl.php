<div class="social-icons clearfix">
	<a href="https://www.facebook.com/IJNet" class="social-icon social-icon-facebook" target=_blank></a>
	<a href="http://twitter.com/ijnet" class="social-icon social-icon-twitter" target=_blank></a>
	<a href="http://www.youtube.com/ijnetvideo" class="social-icon social-icon-youtube" target=_blank></a>
	<a href="http://www.linkedin.com/groups/International-Journalists-Network-IJNet-3734352" class="social-icon social-icon-in" target=_blank></a>
	<a href="https://plus.google.com/109438369213951959896/posts" class="social-icon social-icon-gplus" target=_blank></a>
	<a href="/rss.xml" class="social-icon social-icon-rss" target=_blank></a>
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
