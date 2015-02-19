
<?php if (!empty($advertisements) > 0) : ?>
  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600">
    <tr>
      <td valign="top">
        <p style="padding:10px 20px 0px; margin:0;font-size:12px;font-weight:normal;line-height:26px; font-family: verdana, arial,sans-serif;"><?php print t('Advertisements');?></p>
      </td>
    </tr>

  <?php foreach ($advertisements as $index => $advertisement) : ?>

    <?php if (($index % 2) == 0) : ?>
    <tr>
    <?php endif; ?>
      
      <td valign="top" width="280">
    <?php print theme('ijnet_newsletter_advertisement', array('advertisement' => $advertisements[$index])) ?>
      </td>

    <?php if (($index % 2) == 1  ) : ?>
    </tr>
    <?php endif; ?>

  <?php endforeach; ?>

  <?php if (($index % 2) == 0  ) : ?>
      <td valign="top" width="280">
      </td>
    </tr>
  <?php endif; ?>

  </table>
  <!-- // End Body \\ -->
<?php endif; ?>
