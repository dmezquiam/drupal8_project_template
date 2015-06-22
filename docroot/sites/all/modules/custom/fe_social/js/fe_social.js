
(function ($) {

  Drupal.behaviors.fe_basic_page = {

    attach: function (context, settings) {

      jQuery(window).load(function($) {
        update_content_style();
      });

      jQuery(window).resize(function() {
        update_content_style();
      });
 
    }

  };

  function update_content_style() {
    var main_content_wrapper =
      jQuery('.two-66-33.clearfix > div:nth-child(1)');
    
    var social_content_wrapper =
      jQuery('.two-66-33.clearfix > div:nth-child(2)');
    var social_block_wrapper =
      jQuery('.two-66-33.clearfix .pane-jsonblocks-social-block');
    var facebook_like_wrapper =
      jQuery('.two-66-33.clearfix .pane-jsonblocks-facebook-like');
    var blocks_height =
      social_block_wrapper.height() + facebook_like_wrapper.height();
    
    if (blocks_height < main_content_wrapper.height()) {
      social_content_wrapper.height(main_content_wrapper.height());
      jQuery('.two-66-33.clearfix > div:nth-child(2) .region-inner').css('height', 'inherit');
    }

    var screen_width = $(window).width();

    if (screen_width >= 768) {
      var social_block_wrapper =
        jQuery('.two-66-33.clearfix .pane-jsonblocks-social-block');
      var facebook_like_wrapper =
        jQuery('.two-66-33.clearfix .pane-jsonblocks-facebook-like');
      var blocks_height =
        social_block_wrapper.height() + facebook_like_wrapper.height();
      var free_space = social_content_wrapper.height() - blocks_height +20;
      var separator_height = free_space/4;
 
      social_block_wrapper.css('margin-bottom', 0);
      jQuery('.two-66-33.clearfix > div:nth-child(2) > div section div > h2')
        .css('margin-bottom', separator_height);
      jQuery('.two-66-33.clearfix > div:nth-child(2) div.social-icons.clearfix')
        .css('margin-bottom', separator_height);
      jQuery('.two-66-33.clearfix > div:nth-child(2) div.mail-subscribe')
        .css('margin-bottom', separator_height);
      facebook_like_wrapper.css('margin-bottom', separator_height);

    }
    else {
      jQuery('.two-66-33.clearfix > div:nth-child(2) .region-inner').css('height', '');
      social_content_wrapper.css('height', '');
    }
  }

}(jQuery));

