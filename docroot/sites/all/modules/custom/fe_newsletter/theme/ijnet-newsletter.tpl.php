<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />

  <title><?php print t('IJNet Bulletin');?></title>
</head>

<body leftmargin="0" marginwidth="0" topmargin="0" marginheight="0" offset="0" style="margin:0px auto; padding:0px;background:#eae9e9; font-family: verdana, arial;font-size:12px;line-height:17px;color: #2a2a2a; -webkit-text-size-adjust:none;">
  <style type="text/css">
    td a{color: #28678f;font-weight: bold;text-decoration: none;}
    td a:hover{text-decoration: underline;}
  </style>
  <?php if (($language == 'ar') || ($language == 'fa')):?>
    <span style="direction:rtl">
  <?php endif ?>
  <center>

    <?php print(theme('ijnet_newsletter_content', array('node' => $node, 'social_media_items' => $social_media_items, 'logo' => $logo)));?>

  </center>
  <?php if (($language == 'ar') || ($language == 'fa')): ?>
    </span>
  <?php endif ?>
</body>
</html>
