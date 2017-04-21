  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
    <tr>
      <td valign="top">

      <?php if (isset($comment->body)) : ?>
        <p style="font-family: verdana, arial;  font-size: 12px;">
        <?php print($comment->body)?>
        </p>
      <?php endif; ?>
      <?php if (isset($comment->author)) : ?>
        <?php if (isset($comment->link)) : ?>
        <a href="<?php print($comment->link)?>" target="_blank"><?php print($comment->author)?></a>
        <?php else: ?>
        <?php print($comment->author)?>
        <?php endif; ?>
      <?php endif; ?>
      </td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
