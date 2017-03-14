  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
    <tr>
      <td valign="top">
        <h4 style="color:#265775;font-size: 14px; margin:0;padding:0px 0 2px; font-family: verdana, arial,sans-serif;">
          <?php print($comment->subject)?></a>
        </h4>
  <?php if (isset($comment->body)) : ?>
    <p style="font-family: verdana, arial;  font-size: 12px;">
      <?php print($comment->body)?>
    </p>
  <?php endif; ?>
    <?php print($comment->date)?>
    <?php print($comment->author)?>
      </td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
