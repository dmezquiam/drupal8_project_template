                                                
  <!-- // Begin Module: Top Image with Content \\ -->
  <table border="0" cellpadding="20" cellspacing="0" width="100%">
      <tr>
          <td valign="top">
        
          <h4 style="color:#265775;font-size: 14px; margin:0;padding:0px 0 2px;"><a href="<?php print($opportunity->link)?>"><?php print($opportunity->title)?></a></h4>
          <p style="padding:0;margin:0;"><?php print($opportunity->summary)?></p>
  <?php if (isset($opportunity->deadline_date)) : ?>
          <p style="color:#b55a13;margin:0;padding:5px 0;"><b>Deadline:</b><?php print date("m/d/Y", $opportunity->deadline_date)?></p>
  <?php endif; ?>

          </td>
      </tr>
  </table>
  <!-- // End Module: Top Image with Content \\ -->
 
