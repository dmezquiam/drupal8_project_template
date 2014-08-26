<div id="fb-root"></div>
<script>(function(d, s, id) {
  var lang = jQuery('html').attr('lang');
  var locales = {
    'en': 'en_US',
    'es': 'es_LA'
  };
  var currentLocale = locales[lang] ? locales[lang] : 'en_US';
  console.log(lang);
  console.log(currentLocale);
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/" + currentLocale + "/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
  
<div class="facebook-like block-default">
  <div class="view-header">
    <h2 class="block-title">
      <?php print t('LIKE US ON FACEBOOK'); ?>
    </h2>
  </div>
  <div class="view-content">
    <div class="logo">
      <img/> <a href="https://www.facebook.com/IJNet"> <?php print t('International Journalist\'s Network (IJNET)'); ?> </a>
    </div>
    <div class="fb-like" data-href="https://developers.facebook.com/docs/plugins/" data-width="https://www.facebook.com/IJNet" data-layout="button_count" data-action="like" data-show-faces="false" data-share="false"></div>
  </div>
</div>
