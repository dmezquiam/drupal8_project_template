  <div class="layout two-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
    <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
      <a href="<?php print($featured_content->link)?>" target="_blank">
      <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:300px;width:320px;width:calc(12300px - 2000%)">          
        <div style="font-size:12px;font-style:normal;font-weight:normal" align="center">
          <?php if (isset($featured_content->image)) : ?>
          <?php print theme('image_style', array('style_name' => 'featured_newsletter_img', 'path' => $featured_content->image)); ?>
          <?php endif; ?>
        </div>
      </div>
      <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:300px;width:320px;width:calc(12300px - 2000%)">
        <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:15px">
          <h2 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#28678f;font-size:17px;line-height:26px"><?php print($featured_content->title)?></h2>
          <p style="Margin-top:5px;Margin-bottom:0;font-style:normal;font-weight:normal;"><?php print($featured_content->summary)?></p>
        </div>
      </div>
      </a>
    </div>
  </div>
