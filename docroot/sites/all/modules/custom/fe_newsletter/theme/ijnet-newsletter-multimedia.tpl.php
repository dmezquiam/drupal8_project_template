  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
    <tr>
      <td valign="top">
        <h4 style="color:#265775;font-size: 14px; margin:0;padding:0px 0 2px; font-family: verdana, arial,sans-serif;">
          <?php print($multimedia->title)?></a>
        </h4>
  <?php if (isset($multimedia->body)) : ?>
    <p style="font-family: verdana, arial;  font-size: 12px;">
      <?php print($multimedia->body)?>
    </p>
  <?php endif; ?>
  <?php if (isset($multimedia->image)) : ?>
    <?php print theme('image_style', array('style_name' => 'featured_newsletter_img', 'path' => $multimedia->image)); ?>
  <?php endif; ?>
      </td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
