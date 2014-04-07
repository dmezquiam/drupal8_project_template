<?php
/**
 * @file
 * fe_site_config.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fe_site_config_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Our Partners';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'our_partners';
  $fe_block_boxes->body = '<p>&lt;img src="http://ijnet.org/sites/default/files/imagecache/large/images/cima_logo_cropped.png" width="100" hspace ="5" align="center"/&gt;[Center for International Media Assistance](http://cima.ned.org/) (CIMA) at the [National Endowment for Democracy](www.ned.org) works to strengthen the support, raise the visibility, and improve the effectiveness of independent media development throughout the world.&nbsp;</p>

<p>&lt;img src="http://ijnet.org/sites/default/files/imagecache/large/images/ejc_grey_logo_200_89.gif" width="100" hspace="5" align="center"/&gt;[European Journalism Centre](http://www.ejc.net/ejc/) (EJC) is an independent, international, non-profit institute dedicated to the highest standards in journalism, primarily through the further training of journalists and media professionals.&nbsp;</p>

<p>&lt;img src="http://ijnet.org/sites/default/files/imagecache/large/images/genlogosmall_2.jpg" width="100" hspace="5" align="center"/&gt;[Global Editors Network](http://www.globaleditorsnetwork.org/) is a nonprofit, non-governmental association, committed to the principles of innovation and information sharing in the newsroom.&nbsp;</p>

<p>&lt;img src="/sites/default/files/logo_gfmd.png" width="100" hspace= "5" align= "center"/&gt;[Global Forum for Media Development](http://gfmd.info/index.php/about_gfmd/) (GFMD) is a global network of 500 non-governmental media assistance organizations. GFMD operates in about 100 countries, and supports the development of independent media at the community, national and regional level.&nbsp;</p>

<p>&lt;img src= "/sites/default/files/logo-media_helping_media.jpg" width= "100" hspace= "5" align= "left"/&gt;[Media Helping Media](http://www.mediahelpingmedia.org/) (MHM) is a training information site that provides free media resources for journalists working in transition states, post-conflict countries and areas where freedom of expression and media freedom is under threat.&nbsp;</p>

<p>&lt;img src= "/sites/default/files/logo_poynter.png" width="110" hspace= "3" align= "left"/&gt;[Poynter Online](http://www.poynter.org/) is the website of the Poynter Institute, a school serving journalism and democracy for more than 35 years. Poynter offers news and training that fits any schedule, with individual coaching, in-person seminars, online courses, Webinars and more.</p>

<p>&lt;img src="http://ijnet.org/sites/default/files/imagecache/large/images/mashable.png" width="110" hspace="3" align="left"/&gt;[Mashable](http://mashable.com/) a leading source for news, information and resources for the connected generation. Mashable reports on the importance of digital innovation and how it empowers and inspires people around the world.</p>

<p>&lt;img src= "/sites/default/files/IdeaLab.jpg" width= "110" hspace= "5" align= "left"/&gt;[PBS MediaShift\'s IdeaLab](http://www.pbs.org/idealab/) is a group weblog by innovators who are reinventing community news for the Digital Age. Each author won a grant in the Knight News Challenge to help fund a startup idea or to blog on a topic related to reshaping community news.&nbsp;</p>

<p>&lt;img src="/sites/default/files/logo-webmedia.jpg" width="90" hspace="5" align="left"/&gt;[Webbmedia Group](http://www.webbmediagroup.com/home.htm) (WMG) is an international digital strategy consultancy that offers media services and workshops to Fortune 500 companies, media organizations, governments and universities worldwide.&nbsp;</p>
';

  $export['our_partners'] = $fe_block_boxes;

  return $export;
}
