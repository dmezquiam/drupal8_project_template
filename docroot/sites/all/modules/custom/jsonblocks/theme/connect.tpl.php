<div id="fb-root"></div>
<script>(function(d, s, id) {
  var lang = jQuery('html').attr('lang');
  var locales = {
    'en': 'en_US',
    'es': 'es_LA',
    'fa' : 'fa_IR',
    'ar': 'ar_AR',
    'pt-br' : 'pt_BR',
    'ru' : 'ru_RU',
    'zh-hans' : 'zh_CN'
  };
  var currentLocale = locales[lang] ? locales[lang] : 'en_US';
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/" + currentLocale + "/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
  
<div class="connect-ijnet block-default">
  <div class="view-header">
    <h2 class="block-title">
      <?php print t('Connect with IJNET'); ?>
    </h2>
  </div>
  <div class="view-content">
    <ul>
      <li>
        <a href="https://ijnet.org/en/blog/pitch-ijnet">
          <img src="sites/all/themes/ijnet/images/pitch-ijnet.png" alt=""/>
         <h5><?php print t('Pitch to IJNet'); ?></h5>
       </a>
      </li>
      <li>
        <a href="https://www.facebook.com/groups/ijnetforum">
          <img src="sites/all/themes/ijnet/images/facebook-forum.png" alt=""/>
          <h5><?php print t('IJNet Facebook Forum'); ?></h5>
        </a>
      </li>
    </ul>
        <div class="fb-like" data-href="<?php print $url;?>" data-width="<?php print $url;?>" data-layout="button_count" data-action="like" data-show-faces="false" data-share="false" style="display: none;"></div>
  </div>
</div>
