<div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:300px;width:320px;width:calc(12300px - 2000%)">
  <?php if (isset($opportunity->deadline)) : ?>
  <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px">
    <p class="size-12" style="Margin-top:0;Margin-bottom:20px;font-size:12px;line-height:19px" lang="x-size-12">
      <strong><?php print(t('Deadline'));?>:&nbsp;</strong><?php print($opportunity->deadline)?>
    </p>
  </div>
  <?php else : ?>
  <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px">
    <p class="size-12" style="Margin-top:0;Margin-bottom:20px;font-size:12px;line-height:19px" lang="x-size-12">
    <!-- no deadline -->
    </p>
  </div>
  <?php endif; ?>
  <div style="Margin-left:20px;Margin-right:20px">
    <h3 style="Margin-top:0;Margin-bottom:12px;font-style:normal;font-weight:normal;color:#1c4761;font-size:16px;line-height:24px"><a style="text-decoration:none;color:#bf6c2a" href="<?php print($opportunity->link)?>" target="_blank"><?php print($opportunity->title)?></a></h3>
  </div>
  <?php if (isset($opportunity->summary)) : ?>
  <div style="Margin-left:20px;Margin-right:20px;Margin-bottom:24px">
    <p style="Margin-top:0;Margin-bottom:0"><?php print($opportunity->summary)?></p>
  </div>
  <?php endif; ?>
</div>
