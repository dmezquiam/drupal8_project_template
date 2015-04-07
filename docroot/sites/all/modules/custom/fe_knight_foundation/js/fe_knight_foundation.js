(function ($) {

  Drupal.behaviors.fe_knight_foundation = {
    attach: function (context, settings) {
      
      var limit = Drupal.settings.fe_knight_foundation.limit;
      var authors = ($('.author-tabs-list ul li').length);
 
      $('.author-tabs-list ul li').slice(limit, authors).hide();
      $('.block-fe-knight-foundation .block-footer a.read-more').click(function(e) {
        e.preventDefault();
        $('.author-tabs-list ul li').slice(limit, authors).show();
        $('.block-fe-knight-foundation .block-footer').hide();
      }); 
 
    }
  };

}(jQuery));
