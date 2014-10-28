  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600" style="padding-top:30px;">
    <tr>
      <td valign="top" width="600">
        <p style="padding:35px 20px 15px; margin:0;font-size:22px;font-weight:bold;line-height:26px;color: #bf6c2a; font-family: verdana, arial,sans-serif;"><?php print t('New Opportunities by Region');?></p>
      </td>
    </tr>
  </table>
  <!-- // End Body \\ -->

<?php foreach ($opportunities as $region_tid => $opportunities_by_region) : ?>

  <?php if ((!empty($opportunities_by_region)) && ($region_tid != 0)) : ?>

  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600" bgcolor="#3c6e8f" style="margin-top:15px;">
    <tr>
      <td valign="top" width="600">
      <p style="margin:5px 20px; padding:0;font-size:15px;line-height:26px;color: #ffffff; font-family: verdana, arial,sans-serif;"><?php print($opportunities[0][$region_tid])?></p>
      </td>
    </tr>

  </table>
  <!-- // End Body \\ -->


  <?php foreach ($opportunities_by_region as $index => $opportunity) : ?>

    <?php if (($index % 2) == 0) : ?>
  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600">
    <tr>
    <?php endif; ?>

      <td valign="top" width="280">
    <?php print theme('ijnet_newsletter_opportunity', array('opportunity' => $opportunity))?>
      </td>

    <?php if (($index % 2) == 1 ) : ?>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
    <?php endif; ?>

  <?php endforeach; ?>

  <?php if (!empty($opportunities_by_region) && ($index % 2) == 0 ) : ?>
    <td style="width:280px"></td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
  <?php endif; ?>

  <?php endif; ?>

<?php endforeach; ?>

  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600">
    <tr>
      <td valign="top" width="600">
        <p style="padding: 10px 20px 10px; margin:0;font-size:15px;font-weight:bold;line-height:26px;color:#bf6c2a;text-align:right; font-family: verdana, arial,sans-serif;"><a href="<?php global $language; print url('opportunities', array('absolute' => TRUE, 'language' => $language)); ?>" style="color: #ffffff;text-align:right;background:#b9601a;padding:10px 20px;border-radius:10px;"><?php print t('Browse Opportunities');?><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/arrow.png'))?>" alt="arrow" style="padding:9px 0 0 10px;margin:-2px;"/></a></p>
      </td>
    </tr>
  </table>
  <!-- // End Body \\ -->
