
<?php if (!empty($advertisements) > 0) : ?>
  <!-- // Begin Body \\ -->
<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:5px">
        <h1 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#1e293d;font-size:22px;line-height:31px"><?php print t('Advertisements'); ?></h1>
      </div>
    </div>
  </div>
</div>

<div class="layout three-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
  <?php foreach ($advertisements as $index => $advertisement) : ?>
    <?php if ($index > 3) { break; } ?>
    <?php print theme('ijnet_newsletter_advertisement', array('advertisement' => $advertisements[$index])) ?>
  <?php endforeach; ?>
  </div>
</div>
  <!-- // End Body \\ -->
<?php endif; ?>
<div style="line-height:30px;font-size:30px">&nbsp;</div>
