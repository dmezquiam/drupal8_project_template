
(function ($) {

  Drupal.behaviors.fe_basic_page = {

    attach: function (context, settings) {

      jQuery(window).load(function($){
        update_content_styles();
      });

      $(window).resize(function() {
        update_content_styles();
      });
 
    }

  };

  function update_content_styles() {
    var first_wrapper = jQuery('.two-66-33.clearfix > div:nth-child(1)');
    var second_wrapper = jQuery('.two-66-33.clearfix > div:nth-child(2)');
    if (first_wrapper.height() > second_wrapper.height()) {
      second_wrapper.height(first_wrapper.height());
    }

    var screen_width = $(window).width();

    if (screen_width >= 768) {
      var social_block_wrapper = jQuery('.two-66-33.clearfix .pane-jsonblocks-social-block');
      var facebook_like_wrapper = jQuery('.two-66-33.clearfix .pane-jsonblocks-facebook-like');
      var blocks_height = social_block_wrapper.height() + facebook_like_wrapper.height();
      var occuped_by_blocks = blocks_height / second_wrapper.height();

      console.log(occuped_by_blocks);
      if ((occuped_by_blocks < 0.77)) {
        jQuery('.two-66-33.clearfix > div:nth-child(2) > div div > h2').css('margin-top', '4%');
        jQuery('.two-66-33.clearfix > div:nth-child(2) > div div > h2').css('margin-bottom', '0px');
        jQuery('.two-66-33.clearfix > div:nth-child(2) div.social-icons.clearfix').css('margin-top', '8%');
        jQuery('.two-66-33.clearfix > div:nth-child(2) div.social-icons.clearfix').css('margin-bottom', '10%');
        jQuery('.two-66-33.clearfix .panel-separator').css('margin-bottom', '16%');
      }
    }
  }

}(jQuery));

