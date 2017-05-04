<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
        <h1 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#1e293d;font-size:22px;line-height:31px"><?php print t('New Opportunities by Region');?></h1>
      </div>
    </div>
  </div>
</div>

<?php foreach ($opportunities as $region_tid => $opportunities_by_region) : ?>
  <?php if ((!empty($opportunities_by_region)) && ($region_tid != 0)) : ?>

<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#3c6e8f">
    <div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
        <h2 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#28678f;font-size:17px;line-height:26px"><span style="color:#ebf6fa"><?php print($opportunities[0][$region_tid])?></span></h2>
      </div>
    </div>
  </div>
</div>

  <?php foreach ($opportunities_by_region as $index => $opportunity) : ?>
    <?php // first in row ?>
    <?php if (($index % 2) == 0) : ?>
  <!-- // Begin Body \\ -->
<div class="layout two-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">

      <?php endif; ?>

      <?php print theme('ijnet_newsletter_opportunity', array('opportunity' => $opportunity))?>

      <?php // second in row ?>
      <?php if (($index % 2) == 1 ) : ?>

  </div>
</div>

<div style="line-height:5px;font-size:5px">&nbsp;</div>

    <?php endif; ?>
  <?php endforeach; ?>

  <?php if (!empty($opportunities_by_region) && ($index % 2) == 0 ) : ?>
  </div>
</div>

<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
    </div>
  </div>
</div>

  <?php endif; ?>

<div style="line-height:20px;font-size:20px">&nbsp;</div>

  <?php endif; ?>

<?php endforeach; ?>

<div style="line-height:10px;font-size:30px">&nbsp;</div>
