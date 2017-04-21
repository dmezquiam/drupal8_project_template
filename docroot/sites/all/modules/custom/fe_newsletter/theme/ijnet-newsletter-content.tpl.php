    <table border="0" cellpadding="0" cellspacing="0" height="100%" width="100%">
      <tr>
        <td align="center" valign="top">

          <table border="0" cellpadding="0" cellspacing="0" width="600" bgcolor="#ffffff">
            <tr>
              <td align="center" valign="top">

                <!-- // Begin Template Header \\ -->
                <table border="0" cellpadding="0" cellspacing="0" width="600" bgcolor="#eae9e9" >
                  <tr>
                    <td>

                      <!-- // Begin Module: Standard Header Image \\ -->
                      <a href="http://ijnet.org">
                        <img src="<?php print(file_create_url($logo['path']))?>" style="display:block;max-width:600px;padding:10px 20px;" border="0" alt="<?php print($logo['alt'])?>"/>
                      </a>
                      <!-- // End Module: Standard Header Image \\ -->

                    </td>
                  </tr>
                </table>
                <!-- // End Template Header \\ -->

                <table border="0" cellpadding="0" cellspacing="0" width="600" height="80" bgcolor="#265775" style="background: #265775;border-bottom: 7px solid #deb408;">
                  <tr>
                    <td valign="top" width="280">

                      <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-left: 20px; padding-top: 0px;">
                        <tr>
                          <td valign="top">

                            <h3 style="margin: 19px 0 5px;font-family: Arial,sans-serif;font-size: 29px;line-height: 32px; color: #fff;font-weight: normal;"><?php print t('Weekly Bulletin');?>
                            </h3>
                            <h4 style="font-size: 19px;font-weight: bold;margin: 0 0 20px 0;color: #265775;background: #fff;width: 136px;padding: 4px 8px;"><?php print($newsletter_date)?></h4>

                          </td>
                        </tr>
                      </table>

                    </td>

                    <td valign="top" width="280">

                      <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-left: 35px;">
                        <tr>
                          <td class="news-social" valign="middle" style="padding-top: 15px; padding-right: 15px; text-align: right;">

                          <?php foreach ($social_media_items as $item) :?>

                            <a href="<?php print($item['url'])?>" style="margin-left: 5px; text-decoration: none; font-family: verdana, arial,sans-serif;">
                                <img src="<?php print(file_create_url($item['image']['path']))?>"
                                alt="<?php print($item['image']['alt'])?>"
                                width="32" height="32" border="0" />
                            </a>

                          <?php endforeach;?>

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


<?php
  if (count($featured_contents)) {
    print(theme('ijnet_newsletter_featured_contents', array('featured_contents' => $featured_contents)));
  }
  if ($pitch_to_ijnet) {
    print(theme('ijnet_newsletter_pitch_to_ijnet', array('pitch_to_ijnet_image_url' => $pitch_to_ijnet_image_url)));
  }
  if (count($advertisements)) {
    print(theme('ijnet_newsletter_advertisements', array('advertisements' => $advertisements)));
  }
  if (!empty($comments)) {
    print(theme('ijnet_newsletter_comments', array('comments' => $comments)));
  }
  if (count($opportunities)) {
    print(theme('ijnet_newsletter_opportunities', array('opportunities' => $opportunities)));
  }
  if (!empty($multimedia_items)) {
    print(theme('ijnet_newsletter_multimedia_items', array('multimedia_items' => $multimedia_items)));
  }
?>

                <!-- // Begin Body \\ -->
                <table border="0" cellpadding="0" cellspacing="20" width="600">
                  <tr>
                    <td valign="top" width="600">
                      <p style="font-size: 12px; font-family: verdana, arial;">
                      <?php $footer = t('Published by the !ijnet. For questions or concerns, !contact.', array('!ijnet' => $link_site . t('International Center for Journalists') . '</a>', '!contact' => $link_contact . t('contact us') . '</a>'));
                        print ($footer);
                      ?>
                      </p>
                      <p style="font-size: 12px; font-family: verdana, arial;"><?php print t('Copyright © !year International Center for Journalists. All rights reserved. IJNet material may not be reproduced or republished without express written permission.', array('!year' => date('Y')));?></p>
                    </td>
                  </tr>

                </table>
                <!-- // End Body \\ -->

              </td>
            </tr>

            </table>
        </td>
      </tr>
    </table>
