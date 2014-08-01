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
  $fe_block_boxes->body = '<div class="partner-list-block">
	<img src="http://ijnet.org/sites/default/files/imagecache/large/images/cima_logo_cropped.png" />
	<p><a href="http://cima.ned.org/" target="_blank">Center for International Media Assistance</a> (CIMA) at the <a href="www.ned.org">National Endowment for Democracy</a> works to strengthen the support, raise the visibility, and improve the effectiveness of independent media development throughout the world.</p>
</div>

<div class="partner-list-block">
	<img src="http://ijnet.org/sites/default/files/imagecache/large/images/ejc_grey_logo_200_89.gif" />
	<p><a href="http://www.ejc.net/ejc/" target="_blank">European Journalism Centre</a> (EJC) is an independent, international, non-profit institute dedicated to the highest standards in journalism, primarily through the further training of journalists and media professionals.</p>
</div>

<div class="partner-list-block">
	<img src="http://ijnet.org/sites/default/files/imagecache/large/images/genlogosmall_2.jpg" />
	<p><a href="http://www.globaleditorsnetwork.org/" target="_blank">Global Editors Network</a> is a nonprofit, non-governmental association, committed to the principles of innovation and information sharing in the newsroom.</p> 
</div>

<div class="partner-list-block">
	<img src="/sites/default/files/logo_gfmd.png" />
	<p><a href="http://gfmd.info/index.php/about_gfmd/" target="_blank">Global Forum for Media Development</a> (GFMD) is a global network of 500 non-governmental media assistance organizations. GFMD operates in about 100 countries, and supports the development of independent media at the community, national and regional level.</p>
</div>

<div class="partner-list-block">
	<img src="/sites/default/files/logo-media_helping_media.jpg" />
	<p><a href="http://www.mediahelpingmedia.org/" target="_blank">Media Helping Media</a> (MHM) is a training information site that provides free media resources for journalists working in transition states, post-conflict countries and areas where freedom of expression and media freedom is under threat.</p>
</div>

<div class="partner-list-block">
	<img src="/sites/default/files/logo_poynter.png" />
	<p><a href="http://www.poynter.org/" target="_blank">Poynter Online</a> is the website of the Poynter Institute, a school serving journalism and democracy for more than 35 years. Poynter offers news and training that fits any schedule, with individual coaching, in-person seminars, online courses, Webinars and more.</p>
</div>

<div class="partner-list-block">
	<img src="http://ijnet.org/sites/default/files/imagecache/large/images/mashable.png" />
	<p><a href="http://mashable.com/" target="_blank">Mashable</a> a leading source for news, information and resources for the connected generation. Mashable reports on the importance of digital innovation and how it empowers and inspires people around the world.</p>
</div>

<div class="partner-list-block">
	<img src="/sites/default/files/IdeaLab.jpg" />
	<p><a href="http://www.pbs.org/idealab/" target="_blank">PBS MediaShift\'s IdeaLab</a> is a group weblog by innovators who are reinventing community news for the Digital Age. Each author won a grant in the Knight News Challenge to help fund a startup idea or to blog on a topic related to reshaping community news.</p>
</div>

<div class="partner-list-block">
	<img src="/sites/default/files/logo-webmedia.jpg" />
	<p><a href="http://www.webbmediagroup.com/home.htm" target="_blank">Webbmedia Group</a> (WMG) is an international digital strategy consultancy that offers media services and workshops to Fortune 500 companies, media organizations, governments and universities worldwide.</p>
</div>';

  $export['our_partners'] = $fe_block_boxes;

  return $export;
}
