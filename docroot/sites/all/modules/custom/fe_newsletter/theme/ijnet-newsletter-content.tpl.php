<div id=":13t" class="ii gt adP adO">
  <div id=":13s" class="a3s aXjCH m15add9e843e9ee1b">
    <u></u>
    <div class="full-padding" style="margin:0;padding:0">
      <table class="wrapper" style="border-collapse:collapse;table-layout:fixed;min-width:320px;width:100%;background-color:#ebf6fa" cellpadding="0" cellspacing="0" role="presentation">
        <tbody>
          <tr>
            <td>
              <div role="banner">
                <div class="preheader" style="Margin:0 auto;max-width:560px;min-width:280px;width:280px;width:calc(28000% - 167440px)">
                  <div style="border-collapse:collapse;display:table;width:100%">
                    <div class="snippet" style="display:table-cell;Float:left;font-size:12px;line-height:19px;max-width:280px;min-width:140px;width:140px;width:calc(14000% - 78120px);padding:10px 0 5px 0;color:#99b0b8;font-family:Cabin,Avenir,sans-serif">
                    </div>
                    <div class="webversion" style="display:table-cell;Float:left;font-size:12px;line-height:19px;max-width:280px;min-width:139px;width:139px;width:calc(14100% - 78680px);padding:10px 0 5px 0;text-align:right;color:#99b0b8;font-family:Cabin,Avenir,sans-serif">
                    </div>
                  </div>
                </div>
                <div class="header" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)" id="emb-email-header-container">
                  <div class="logo emb-logo-margin-box" style="font-size:26px;line-height:32px;Margin-top:0px;Margin-bottom:17px;color:#c3ced9;font-family:Roboto,Tahoma,sans-serif;Margin-left:20px;Margin-right:20px" align="center">
                    <div class="logo-center" align="center" id="emb-email-header"><img style="display:block;height:auto;width:100%;border:0;max-width:451px" src="https://ci5.googleusercontent.com/proxy/LgKHFTtd3wg8aMcDOitZS1UeCiA4QdUxWVdOu3ZgBGd3tYnHcxy_mG4IKX2xHboSQmDeQHm2XaudnwGxkhxoxg8Ef3cZhhf3ii-tz8wg6dgSlgm6=s0-d-e1-ft#http://i1.cmail20.com/ei/d/26/E6D/903/054633/csfinal/logo1.png" alt="" width="451" class="CToWUd"></div>
                  </div>
                </div>
              </div>
              <div role="section">
                <div class="layout fixed-width" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
                  <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%;background-color:#ffffff">

                    <div class="column wide" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:400px;min-width:320px;width:320px;width:calc(8000% - 47600px)">
                      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
                        <h1 class="size-34" style="Margin-top:0;Margin-bottom:0;font-style:normal;font-weight:normal;color:#1e293d;font-size:30px;line-height:38px;font-family:bitter,georgia,serif" lang="x-size-34">
                          <span class="font-bitter">
                            <span style="color:#28678f">
                              <strong>Weekly <span class="il">Bulletin</span></strong></span></span></h1>
                      </div>
                    </div>

                    <div class="column narrow" style="text-align:left;color:#575c66;font-size:14px;line-height:21px;font-family:&quot;Open Sans&quot;,sans-serif;Float:left;max-width:320px;min-width:200px;width:320px;width:calc(72200px - 12000%)">
                      <div style="Margin-left:20px;Margin-right:20px;Margin-top:24px;Margin-bottom:24px">
                        <p class="size-28" style="Margin-top:0;Margin-bottom:0;font-size:24px;line-height:32px;text-align:right" lang="x-size-28">01/30/2017</p>
                      </div>
                    </div>
                  </div>
                </div>
                <?php if (count($featured_contents)): ?>
                <?php print(theme('ijnet_newsletter_featured_contents', array('featured_contents' => $featured_contents))); ?>
                <?php endif ?>

                <?php if ($pitch_to_ijnet) {
                  print(theme('ijnet_newsletter_pitch_to_ijnet', array('pitch_to_ijnet_image_url' => $pitch_to_ijnet_image_url)));
                }
                ?>
                <?php
                  if (count($advertisements)) {
                    print(theme('ijnet_newsletter_advertisements', array('advertisements' => $advertisements)));
                  }
                ?>
                <?php
                  if (!empty($comments)) {
                    print(theme('ijnet_newsletter_comments', array('comments' => $comments)));
                  }
                ?>
                <?php
                  if (count($opportunities)) {
                    print(theme('ijnet_newsletter_opportunities', array('opportunities' => $opportunities)));
                  }
                ?>
                <?php
                  if (!empty($multimedia_items)) {
                    print(theme('ijnet_newsletter_multimedia_items', array('multimedia_items' => $multimedia_items)));
                  }
                ?>

                <div role="contentinfo">
                  <div class="layout email-footer" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
                    <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%">
                      <div class="column wide" style="text-align:left;font-size:12px;line-height:19px;color:#99b0b8;font-family:Cabin,Avenir,sans-serif;Float:left;max-width:400px;min-width:320px;width:320px;width:calc(8000% - 47600px)">
                        <div style="Margin-left:20px;Margin-right:20px;Margin-top:10px;Margin-bottom:10px">
                          <div style="font-size:12px;line-height:19px">
                            <div><a href="http://ijnet.org" target="_blank"><span class="il">ijnet</span>.org</a></div>
                          </div>
                          <div style="font-size:12px;line-height:19px;Margin-top:18px">
                          </div>
                        </div>
                      </div>
                      <div class="column narrow" style="text-align:left;font-size:12px;line-height:19px;color:#99b0b8;font-family:Cabin,Avenir,sans-serif;Float:left;max-width:320px;min-width:200px;width:320px;width:calc(72200px - 12000%)">
                        <div style="Margin-left:20px;Margin-right:20px;Margin-top:10px;Margin-bottom:10px">
                        </div>
                      </div>
                    </div>
                  </div>
                  <div class="layout one-col email-footer" style="Margin:0 auto;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px);word-wrap:break-word;word-break:break-word">
                    <div class="layout__inner" style="border-collapse:collapse;display:table;width:100%">
                      <div class="column" style="text-align:left;font-size:12px;line-height:19px;color:#99b0b8;font-family:Cabin,Avenir,sans-serif;max-width:600px;min-width:320px;width:320px;width:calc(28000% - 167400px)">
                        <div style="Margin-left:20px;Margin-right:20px;Margin-top:10px;Margin-bottom:10px">
                          <div style="font-size:12px;line-height:19px">
                            <?php $footer = t('Published by the !ijnet. For questions or concerns, !contact.', array('!ijnet' => $link_site . t('International Center for Journalists') . '</a>', '!contact' => $link_contact . t('contact us') . '</a>'));
                            print ($footer);
                            ?>
                          </div>
                          <div style="line-height:5px;font-size:5px">&nbsp;</div>
                          <div style="font-size:12px;line-height:19px">
                            <?php print t('Copyright © !year International Center for Journalists. All rights reserved. IJNet material may not be reproduced or republished without express written permission.', array('!year' => date('Y')));?>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
                <div style="line-height:40px;font-size:40px">&nbsp;</div>
              </div>
            </td>
          </tr>
        </tbody>
      </table>
    </div>
  </div>
</div>
