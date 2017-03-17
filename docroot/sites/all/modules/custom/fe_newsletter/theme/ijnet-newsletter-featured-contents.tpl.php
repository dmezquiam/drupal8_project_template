<?php foreach ($featured_contents as $index => $featured_content) : ?>
  <?php // Render the title of section and the first Featured Content ?>
  <?php if ($index == 0) : ?>
      <table border="0" cellpadding="0" cellspacing="0" width="600">
        <tr>
          <td valign="top" style="padding-left: 0px;">
            <p style="padding:25px 20px 0px; margin:0;font-size:22px;font-weight:bold;line-height:26px;color: #bf6c2a; font-family: verdana, arial,sans-serif;"><?php print t('Featured on IJNet');?></p>
          </td>

          <?php print theme('ijnet_newsletter_first_featured_content', array('featured_content' => $featured_contents[$index]))?>
        </tr>
      </table>
      <?php continue; ?>
  <?php endif; ?>

  <?php // For odd elements create the table and his row. ?>
  <?php if (($index % 2) == 1): ?>
    <table border="0" cellpadding="0" cellspacing="0" width="600">
      <tr>
  <?php endif; ?>

  <?php // Render the content. ?>
    <td valign="top" width="280">
      <?php print theme('ijnet_newsletter_featured_content', array('featured_content' => $featured_contents[$index]))?>
    </td>

  <?php // For even elements, close the row and the table. ?>
  <?php if (($index % 2) == 0 ) : ?>
      </tr>
    </table>
  <?php endif; ?>
<?php endforeach; ?>

<?php // If the number of featured contents is odd, ?>
<?php // create an empty content and close the table. ?>
<?php if (($index % 2) == 1 && ($index != 0)): ?>
    <td valign="top" width="280"></td>
    </tr>
  </table>
<?php endif; ?>

  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600" style="padding-bottom:55px;">
    <tr>
      <td valign="top" width="600">
        <p style="padding: 10px 20px 10px; margin:0;font-size:15px;font-weight:bold;line-height:26px;color:#bf6c2a;text-align:right; font-family: verdana, arial,sans-serif;"><a href="<?php global $language; print url('news', array('absolute' => TRUE, 'language' => $language)); ?>" style="color: #ffffff;text-align:right;background:#b9601a;padding:10px 20px;border-radius:10px; font-family: verdana, arial,sans-serif; font-weight: bold; text-decoration: none;"><?php print t('Browse Topics');?><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/arrow.png'))?>" alt="arrow" style="padding:9px 0 0 10px;margin:-2px;"/></a></p>
      </td>
    </tr>
  </table>
  <!-- // End Body \\ -->
