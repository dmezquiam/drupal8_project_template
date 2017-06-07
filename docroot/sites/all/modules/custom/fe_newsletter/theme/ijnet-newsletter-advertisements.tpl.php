<?php if (!empty($advertisements) > 0) : ?>
<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:5px">
        <h1 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#1e293d;font-size:22px;line-height:31px"><?php print t('Advertisements'); ?></h1>
      </div>
    </div>
  </div>
</div>

  <?php if (sizeof($advertisements) == 1) : ?>

<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
  <?php foreach ($advertisements as $index => $advertisement) : ?>
    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
    <?php print theme('ijnet_newsletter_advertisement', array('advertisement' => $advertisements[$index])) ?>
    </div>
  <?php endforeach; ?>
  </div>
</div>
  <?php endif; ?>
  <?php if ((sizeof($advertisements)%2 == 0) or (sizeof($advertisements) >= 4)) : ?>
    <?php foreach ($advertisements as $index => $advertisement) : ?>
      <?php if ($index >= 4) { break; } ?>
      <?php if (($index % 2) == 0) : ?>

<!-- // Begin Body \\ -->
<div class="layout two-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">

      <?php endif; ?>

    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:300px;width:320px;width:calc(12300px - 2000%)">

      <?php print theme('ijnet_newsletter_advertisement', array('advertisement' => $advertisements[$index])) ?>

    </div>
      <?php if (($index % 2) == 1 ) : ?>
  </div>
</div>
<!--<div style="line-height:5px;font-size:5px">&nbsp;</div>-->

      <?php endif; ?>
    <?php endforeach; ?>
  <?php endif; ?>
  <?php if (sizeof($advertisements) == 3) : ?>

<div class="layout three-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
  <?php foreach ($advertisements as $index => $advertisement) : ?>
    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:200px;width:320px;width:calc(72200px - 12000%)">
    <?php print theme('ijnet_newsletter_advertisement', array('advertisement' => $advertisements[$index])) ?>
    </div>
  <?php endforeach; ?>
  </div>
</div>
  <?php endif; ?>

  <!-- // End Body \\ -->
<?php endif; ?>
<div style="line-height:30px;font-size:30px">&nbsp;</div>
