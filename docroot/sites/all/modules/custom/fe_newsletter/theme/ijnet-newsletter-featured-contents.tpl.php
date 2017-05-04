<?php foreach ($featured_contents as $index => $featured_content) : ?>
  <?php // Render the title of section and the first Featured Content ?>
  <?php if ($index == 0) : ?>
<?php print theme('ijnet_newsletter_first_featured_content', array('featured_content' => $featured_contents[$index]))?>
      <?php continue; ?>
  <?php endif; ?>

<div style="line-height:5px;font-size:5px">&nbsp;</div>
<?php // For even elements align left ?>
<?php if (($index % 2) == 0 ) : ?>
  <?php print theme('ijnet_newsletter_featured_content_mirrored', array('featured_content' => $featured_contents[$index]))?>
<?php endif; ?>
<?php // For odd elements align right ?>
<?php if (($index % 2) == 1): ?>
  <?php print theme('ijnet_newsletter_featured_content', array('featured_content' => $featured_contents[$index]))?>
<?php endif; ?>
<?php endforeach; ?>

<div style="line-height:30px;font-size:30px">&nbsp;</div>
