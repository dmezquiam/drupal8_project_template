  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
    <tr>
      <td valign="top">
<?php if (isset($featured_content->image)) : ?>
        <?php print(theme('image_style', array('style_name' => 'featured_small_img', 'path' => $featured_content->image)))?>
<?php endif; ?>
        <h4 style="color:#265775;font-size: 14px; margin:0;padding:10px 0 2px;"><a href="<?php print($featured_content->link)?>"><?php print($featured_content->title)?></a></h4>
        <p style="padding:0;margin:0;"><?php print($featured_content->summary)?></p>
<?php if (isset($featured_content->author)) : ?>
        <p>By <?php print($featured_content->author)?>
<?php endif; ?>
        <a href="<?php print($featured_content->link)?>" style="text-align:right;float:right; font-weight: normal;background:#3c6e8f;margin:0 10px 0 0;padding:0 8px 2px; color:#ffffff;border-radius:2px;">Read more</a></p>
      </td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
