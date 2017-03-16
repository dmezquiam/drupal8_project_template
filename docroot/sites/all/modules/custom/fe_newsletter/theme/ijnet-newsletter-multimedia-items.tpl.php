  <!-- // Begin Body \\ -->
  <table border="0" cellpadding="0" cellspacing="0" width="600" style="padding-top:30px;">
    <tr>
      <td valign="top" width="600">
        <p style="padding:35px 20px 15px; margin:0;font-size:22px;font-weight:bold;line-height:26px;color: #bf6c2a; font-family: verdana, arial,sans-serif;"><?php print t('Featured Multimedia');?></p>
      </td>
    </tr>
  </table>
  <!-- // End Body \\ -->

<?php foreach ($multimedia_items as $index => $multimedia) : ?>
  <?php print theme('ijnet_newsletter_multimedia', array('multimedia' => $multimedia))?>
<?php endforeach; ?>
