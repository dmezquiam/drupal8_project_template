(function($) {
  Drupal.behaviors.doSomething = {
    attach: function(context, settings) {

      // init
      $(".view-newsletter-archive").find(".collapsible-archive ul").each(function(i) {
        (i == 0) ?
          $(this).siblings("h3").children(".colapse-icon").text("▼") :
          $(this).slideToggle();
      });
      $(".view-newsletter-archive").find(".view-grouping-content").each(function(i) {
        (i == 0) ?
          $(this).siblings(".view-grouping-header").children(".colapse-icon").text("▼") :
          $(this).slideToggle();
      });

      // on click event
      $(".view-newsletter-archive").find(".collapsible-archive h3").click(function() {
        var icon = $(this).children(".collapse-icon");
        $(this).siblings("ul").slideToggle(function() {
          (icon.text()=="▼") ? icon.text("►") : icon.text("▼");
        });
      });
      $(".view-newsletter-archive").find(".view-grouping-header").click(function() {
        var icon = $(this).children(".collapse-icon");
        $(this).siblings(".view-grouping-content").slideToggle(function() {
          (icon.text()=="▼") ? icon.text("►") : icon.text("▼");
        });
      });

      // count the nodes for each month
      $(".view-newsletter-archive").find(".collapsible-archive h3").each(function() {
        var i = $(this).siblings("ul").children("li").length;
        $(this).text(function() {
          return $(this).text() + ' (' + i + ')';
        });
      });

    }
  }
})(jQuery);
