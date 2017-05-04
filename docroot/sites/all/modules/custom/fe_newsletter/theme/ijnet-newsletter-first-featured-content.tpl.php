<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="font-size:12px;font-style:normal;font-weight:normal" align="center">
        <?php if (isset($featured_content->image)) : ?>
        <?php print theme('image_style', array('style_name' => 'newsletter_first', 'path' => $featured_content->image)); ?>
        <?php endif; ?>
      </div>
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:20px;Margin-bottom:24px">
        <h2 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#28678f;font-size:17px;line-height:26px"><a style="text-decoration:none;color:#bf6c2a" href="<?php print($featured_content->link)?>" target="_blank"><span style="color:#28678f"><?php print($featured_content->title)?></span></a></h2>
        <p style="Margin-top:16px;Margin-bottom:0">
        <?php print($featured_content->featured_summary)?>
      </div>
    </div>
  </div>
</div>
