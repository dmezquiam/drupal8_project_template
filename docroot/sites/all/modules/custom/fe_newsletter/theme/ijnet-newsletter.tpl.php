<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
  <style type="text/css">
    td a{color: #28678f;font-weight: bold;text-decoration: none;}
    td a:hover{text-decoration: underline;}
  </style>

  <title>IJNet Bulletin</title>
</head>

<body leftmargin="0" marginwidth="0" topmargin="0" marginheight="0" offset="0" style="margin:0px auto; padding:0px;background:#eae9e9; font-family: verdana, arial;font-size:12px;line-height:17px;color: #2a2a2a; -webkit-text-size-adjust:none;">

  <center>

    <table border="0" cellpadding="0" cellspacing="0" height="100%" width="100%">
      <tr>
        <td align="center" valign="top">

          <table border="0" cellpadding="0" cellspacing="0" width="600" bgcolor="#ffffff">
            <tr>
              <td align="center" valign="top">

                <!-- // Begin Template Header \\ -->
                <table border="0" cellpadding="0" cellspacing="0" width="600" bgcolor="#eae9e9">
                  <tr>
                    <td>
                      <!-- // Begin Module: Standard Header Image \\ -->
                      <a href="http://ijnet.org"><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/ijnet-logo.jpg'))?>" style="display:block;max-width:600px;padding:10px 0;" border="0" alt="" /></a>
                      <!-- // End Module: Standard Header Image \\ -->

                    </td>
                  </tr>
                </table>
                <!-- // End Template Header \\ -->

                <table border="0" cellpadding="0" cellspacing="0" width="600" bgcolor="#265775" style="background: #265775 url('images/bar.jpg') bottom center repeat-x;">
                  <tr>
                    <td valign="top" width="280">

                      <table border="0" cellpadding="0" cellspacing="0" width="100%" style="margin-left: 20px;">
                        <tr>
                          <td valign="top">

                            <p style="margin:10px 0 13px;font-family:Arial,sans-serif;font-size:13px;line-height:20px;text-transform:uppercase;color:#ffffff;-webkit-text-size-adjust:none;">Weekly Bulletin<br /><span style="font-size:14px;font-weight:bold;">November 11, 2013</span></p>

                          </td>
                        </tr>
                      </table>

                    </td>

                    <td valign="top" width="280">

                      <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-left: 35px;">
                        <tr>
                          <td valign="middle" style="padding-top: 15px;">

                            <a href="https://www.facebook.com/IJNet"><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/social_01.png'))?>" alt="facebook" width="37" height="32" border="0" /></a><a href="http://twitter.com/ijnet"><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/social_02.png'))?>" alt="twitter" width="41" height="32" border="0" /></a><a href="http://www.youtube.com/ijnetvideo"><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/social_03.png'))?>" alt="youtube" width="41" height="32" border="0" /></a><a href="http://www.linkedin.com/groups/International-Journalists-Network-IJNet-3734352"><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/social_04.png'))?>" alt="linkedin" width="41" height="32" border="0" /></a><a href="https://plus.google.com/109438369213951959896/posts"><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/social_05.png'))?>" alt="google+" width="41" height="32" border="0" /></a><a href="http://ijnet.org/rss.xml"><img src="<?php print(file_create_url(drupal_get_path('module', 'fe_newsletter') . '/theme/images/social_06.png'))?>" alt="IJNet RSS" width="37" height="32" border="0" /></a>

                          </td>
                        </tr>
                      </table>

                    </td>
                  </tr>
                </table>

              </td>
            </tr>

            <tr>
              <td align="center" valign="top">

  <?php print theme('ijnet_newsletter_featured_contents', array('featured_contents' => $newsletter['featured_contents']))?>

  <?php print theme('ijnet_newsletter_advertisements', array('advertisements' => $newsletter['advertisements']))?>

  <?php print theme('ijnet_newsletter_opportunities', array('opportunities' => $newsletter['opportunities']))?>

                <!-- // Begin Body \\ -->
                <table border="0" cellpadding="0" cellspacing="20" width="600">
                  <tr>
                    <td valign="top" width="600">
                      <p>Published by the <a href="">International Center for Journalists</a>. For questions or concerns, <a href="http://ijnet.org/contact">contact us</a>.</p>
                      <p>Copyright © 2013 International Center for Journalists. All rights reserved. IJNet material may not be reproduced or republished without express written permission.</p>
                    </td>
                  </tr>

                </table>
                <!-- // End Body \\ -->

              </td>
            </tr>

            </table>
          <br />
        </td>
      </tr>
    </table>
  </center>
</body>
</html>
