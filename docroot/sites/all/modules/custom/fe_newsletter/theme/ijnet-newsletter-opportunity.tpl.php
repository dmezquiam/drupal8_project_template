  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
    <tr>
      <td valign="top">
        <h4 style="color:#265775;font-size: 14px; margin:0;padding:0px 0 2px;"><a href="<?php print($opportunity->link)?>"><?php print($opportunity->title)?></a></h4>
          <?php print($opportunity->summary)?>
  <?php if (isset($opportunity->field_deadline)) : ?>
          <p style="color:#b55a13;margin:0;padding:5px 0;"><b><?php print t('Deadline:');?> </b><?php print date("m/d/Y", $opportunity->field_deadline)?></p>
  <?php endif; ?>
      </td>
    </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
