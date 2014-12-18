  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
    <tr>
      <td valign="top">
<?php if (isset($featured_content->image)) : ?>
        <?php print theme('image_style', array('style_name' => 'featured_newsletter_img', 'path' => $featured_content->image)); ?>
<?php endif; ?>
        <h4 style="color:#265775; font-size: 13px; margin: 0 0 7px;padding:10px 0 2px; overflow: hidden; max-height: 48px; font-family: verdana, arial,sans-serif;">
          <a href="<?php print($featured_content->link)?>" style="color:#28678f; font-size: 13px; font-family: verdana, arial,sans-serif; font-weight: bold; text-decoration: none;"><?php print($featured_content->title)?></a>
        </h4>
        <p style="padding:0;margin:0; font-family: verdana, arial,sans-serif;"><?php print($featured_content->summary)?></p>
<?php if (isset($featured_content->author)) : ?>
        <p style="font-size: 12px; font-family: verdana, arial,sans-serif;"> <?php print t('By');?> <?php print($featured_content->author)?>
<?php endif; ?>
      </td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
<!-- color: #28678f;
font-weight: bold;
text-decoration: none; -->