<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
        <h1 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#1e293d;font-size:22px;line-height:31px"><?php print t('From the archives');?></h1>
      </div>
    </div>
  </div>
</div>

<?php foreach ($archive as $index => $article) : ?>
<div style="line-height:5px;font-size:30px">&nbsp;</div>

<div class="layout two-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
    <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
      <a href="<?php print($article->link)?>" target="_blank">
      <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:300px;width:320px;width:calc(12300px - 2000%)">          
        <div style="font-size:12px;font-style:normal;font-weight:normal" align="center">
          <?php if (isset($article->image)) : ?>
          <?php print theme('image_style', array('style_name' => 'featured_newsletter_img', 'path' => $article->image)); ?>
          <?php endif; ?>
        </div>
      </div>
      <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:300px;width:320px;width:calc(12300px - 2000%)">
        <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:15px">
          <h2 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#28678f;font-size:17px;line-height:26px"><?php print($article->title)?></h2>
          <p style="Margin-top:5px;Margin-bottom:0;font-style:normal;font-weight:normal;"><?php print(strip_tags($article->summary))?></p>
        </div>
      </div>
      </a>
    </div>
  </div>

<?php endforeach; ?>

<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
    </div>
  </div>
</div>




<div style="line-height:10px;font-size:30px">&nbsp;</div>
