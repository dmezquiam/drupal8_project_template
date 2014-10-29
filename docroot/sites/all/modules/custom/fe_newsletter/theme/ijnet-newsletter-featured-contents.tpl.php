<?php foreach ($featured_contents as $index => $featured_content) : ?>

  <?php if (($index % 2) == 0) : ?>

  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600">

    <?php if ($index == 0) : ?>

    <tr>
      <td valign="top" style="padding-left: 0px;">
        <p style="padding:25px 20px 0px; margin:0;font-size:22px;font-weight:bold;line-height:26px;color: #bf6c2a; font-family: verdana, arial,sans-serif;"><?php print t('Featured on IJNet');?></p>
      </td>
    </tr>

    <?php endif; ?>

    <tr>

  <?php endif; ?>

      <td valign="top" width="280">
  <?php print theme('ijnet_newsletter_featured_content', array('featured_content' => $featured_contents[$index]))?>
      </td>

  <?php if (($index % 2) == 1 ) : ?>

    </tr>
  </table>
  <!-- // End Body \\ -->

  <?php endif; ?>

<?php endforeach; ?>

<?php if (($index % 2) == 0  ) : ?>
      
        <td valign="top" width="280">
      </td>
    </tr>
  </table>
  <!-- // End Body \\ -->

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
