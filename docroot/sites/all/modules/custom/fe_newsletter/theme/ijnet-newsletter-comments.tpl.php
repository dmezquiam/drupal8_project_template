<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
        <h1 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#1e293d;font-size:22px;line-height:31px"><?php print t('Comment of the week');?></h1>
      </div>
    </div>
  </div>
</div>
<?php foreach ($comments as $index => $comment) : ?>
  <?php print theme('ijnet_newsletter_comment', array('comment' => $comment))?>
<?php endforeach; ?>

<div style="line-height:30px;font-size:30px">&nbsp;</div>
