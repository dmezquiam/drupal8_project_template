(function ($) {

  Drupal.behaviors.fe_knight_foundation = {
    attach: function (context, settings) {
      
      var limit = Drupal.settings.fe_knight_foundation.limit;
      var authors = ($('.author-tabs-list ul li').length) - 1;
 
      $('.author-tabs-list ul li').slice(limit, authors).hide();
      $('.author-tabs-list a.show-more').click(function(e) {
        e.preventDefault();
        $('.author-tabs-list ul li').slice(limit, authors).show();
        $('.author-tabs-list ul li').last().hide();
      }); 
 
    }
  };

}(jQuery));
