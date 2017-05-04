<div class="layout one-col fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
        <h1 style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#1e293d;font-size:22px;line-height:31px"><?php print t('Pitch to IJNet'); ?></h1>
      </div>
    </div>
  </div>
  <?php if (isset($pitch_to_ijnet_image_url)) : ?>
  <div style="font-size:12px;font-style:normal;font-weight:normal" align="center">
    <?php print theme('image_style', array('style_name' => 'newsletter_first', 'path' => $pitch_to_ijnet_image_url)); ?>
  </div>
  <?php endif; ?>
  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">
    <div class="column" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
      <div style="Margin-left:20px;Margin-right:20px;Margin-top:20px;Margin-bottom:24px">
        <p style="Margin-top:16px;Margin-bottom:0">
        <?php print t('Want to become an IJNet contributor? We’ve made it easier than ever. Anyone from anywhere in the world can now write and publish an IJNet post.'); ?>
      </div>
      <div style="font-size:12px;font-style:normal;font-weight:normal" align="center">
        <p style="padding: 10px 20px 10px; margin:0;font-size:15px;font-weight:bold;line-height:26px;color:#bf6c2a;text-align:right; font-family: verdana, arial,sans-serif;"><a href="<?php global $language; print url('blog/pitch-ijnet', array('absolute' => TRUE, 'language' => $language)); ?>" style="color: #ffffff;text-align:right;background:#b9601a;padding:10px 20px;border-radius:10px; font-family: verdana, arial,sans-serif; font-weight: bold; text-decoration: none;"><?php print t('Read more');?><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/arrow.png'))?>" alt="arrow" style="padding:9px 0 0 10px;margin:-2px;"/></a></p>
      </div>
      <div style="line-height:5px;font-size:5px">&nbsp;</div>
    </div>
  </div>
</div>

<div style="line-height:30px;font-size:30px">&nbsp;</div>
