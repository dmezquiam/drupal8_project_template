<!-- // Begin Module: Top Image with Content \\ -->
<table border="0" cellpadding="20" cellspacing="0" width="100%">
  <tr>
    <td valign="top">
  <?php if (isset($advertisement->image)) : ?>
    <?php print(theme('image_style', array('style_name' => 'featured_small_img', 'path' => $advertisement->image)))?>
  <?php endif; ?>
    <h4 style="color:#bf6c2a;font-size: 14px; padding:0;margin:10px 0 2px;"><a href="<?php print($advertisement->link)?>" style="color:#bf6c2a;font-family: verdana, arial,sans-serif; text-decoration: none;"><?php print($advertisement->title)?></a></h4>
    <p style="padding:0;margin:0; font-family: verdana, arial,sans-serif;"><?php print($advertisement->summary)?></p>
    </td>
  </tr>
</table>
<!-- // End Module: Top Image with Content \\ -->
