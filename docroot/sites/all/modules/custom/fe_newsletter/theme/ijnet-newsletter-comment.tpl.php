<?php if (isset($comment->body)) : ?>
<div class="layout fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column narrow" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:200px;width:320px;width:calc(72200px - 12000%)">
      <div style="font-size:12px;font-style:normal;font-weight:normal" align="center">
        <img class="gnd-corner-image gnd-corner-image-center gnd-corner-image-top gnd-corner-image-bottom CToWUd a6T" style="border:0;display:block;height:auto;width:100%;max-width:480px" alt="" width="200" src="https://ci3.googleusercontent.com/proxy/f_ryPKCP9vkUmLx33rlxWZ7aWtgO6JqCV6wpObqwumxEfX6TLg0kwU8P05_Xm1ozKChMd-DpkgjjRzXJojI-OIP667Hwi2_l-0iBHmzS-tjSx6OXQ4iiy9_VstpzLE9p3F1qQWxLkbc5CUEluKuT=s0-d-e1-ft#http://i6.cmail20.com/ei/d/26/E6D/903/054633/csfinal/03932af219ec41339415dd6e63aafe44.png" tabindex="0">
      </div>
    </div>
    <div class="column wide" style="color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:400px;min-width:320px;width:320px;width:calc(8000% - 47600px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
        <h2 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#28678f;font-size:17px;line-height:26px"><?php print($comment->body)?></h2>
      <?php if (isset($comment->author)) : ?>
        <?php if (isset($comment->link)) : ?>
        <a href="<?php print($comment->link)?>" target="_blank"><?php print($comment->author)?></a>
        <?php else: ?>
        <?php print($comment->author)?>
        <?php endif; ?>
      <?php endif; ?>
      </div>
    </div>
  </div>
</div>
<?php endif; ?>
