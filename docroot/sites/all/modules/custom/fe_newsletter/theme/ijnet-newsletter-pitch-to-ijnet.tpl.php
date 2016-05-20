<table border="0" cellpadding="0" cellspacing="0" width="600" style="padding-bottom:55px;">
  <tr>
    <td valign="top" style="padding-left: 0px;">
      <p style="padding:25px 20px 10px; margin:0;font-size:22px;font-weight:bold;line-height:26px;color: #bf6c2a; font-family: verdana, arial,sans-serif;"><?php print t('Pitch to IJNet');?></p>
    </td>
  </tr>
  <tr>
    <td valign="top" style="display: block; margin-left: auto; margin-right: auto;">
<img src="<?php print($pitch_to_ijnet_image_url) ?>" alt="pitch-to-ijnet"/>
    </td>
  </tr>
  <tr>
  <tr>
    <td valign="top" style="padding-left: 0px;">
      <p style="padding:25px;margin:0; font-size: 12px; font-family: verdana, arial,sans-serif;">
        Want to become an IJNet contributor? We’ve made it easier than ever. Anyone from anywhere in the world can now write and publish an IJNet post.
      </p>
    </td>
  </tr>
  <tr>
    <td valign="top" width="600">
      <p style="padding: 10px 20px 10px; margin:0;font-size:15px;font-weight:bold;line-height:26px;color:#bf6c2a;text-align:right; font-family: verdana, arial,sans-serif;"><a href="<?php global $language; print url('blog/pitch-ijnet', array('absolute' => TRUE, 'language' => $language)); ?>" style="color: #ffffff;text-align:right;background:#b9601a;padding:10px 20px;border-radius:10px; font-family: verdana, arial,sans-serif; font-weight: bold; text-decoration: none;"><?php print t('Read more');?><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/arrow.png'))?>" alt="arrow" style="padding:9px 0 0 10px;margin:-2px;"/></a></p>
    </td>
  </tr>
</table>
