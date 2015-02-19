  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
    <tr>
      <td valign="top">
        <h4 style="color:#265775;font-size: 14px; margin:0;padding:0px 0 2px; font-family: verdana, arial,sans-serif;">
          <a href="<?php print($opportunity->link)?>" style="color:#28678f; font-size: 14px; font-family: verdana, arial, sans-serif; text-decoration: none;"><?php print($opportunity->title)?></a>
        </h4>
  <?php if (isset($opportunity->summary)) : ?>
    <p style="font-family: verdana, arial;  font-size: 12px;">
      <?php print($opportunity->summary)?>
    </p>
  <?php endif; ?>
  <?php if (isset($opportunity->deadline)) : ?>
          <p style="color:#b55a13;margin:0;padding:5px 0; font-size: 12px; font-family: verdana, arial,sans-serif;">
            <b><?php print(t('Deadline:'));?> </b>
            <?php print($opportunity->deadline)?>
          </p>
  <?php endif; ?>
      </td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
