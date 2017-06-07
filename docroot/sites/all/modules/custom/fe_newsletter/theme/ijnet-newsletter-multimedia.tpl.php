<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="font-size:12px;font-style:normal;font-weight:normal" align="center">
        <?php if (isset($multimedia->image)) : ?>
        <?php print theme('image_style', array('style_name' => 'newsletter_first', 'path' => $multimedia->image)); ?>
        <?php endif; ?>
      </div>
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:20px;Margin-bottom:24px">
        <p style="Margin-top:16px;Margin-bottom:0">
        <?php print($multimedia->body)?>

        <?php if (isset($multimedia->link_url)) : ?>
        <a href="<?php print $multimedia->link_url; ?>" target="_blank">
          <?php isset($multimedia->link_title) ? print $multimedia->link_title : print t("Go to our site"); ?>
        </a>
        <?php endif; ?>

      </div>
    </div>
  </div>
</div>
