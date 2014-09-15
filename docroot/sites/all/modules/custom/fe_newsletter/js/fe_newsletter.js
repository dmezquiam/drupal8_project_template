(function($) {
  Drupal.behaviors.doSomething = {
    attach: function(context, settings) {

      // init
      $(".view-newsletter-archive").find(".collapsible-archive ul").each(function(i) {
        (i == 0) ?
          $(this).siblings("h3").addClass("open") :
          $(this).slideToggle();
      });
      $(".view-newsletter-archive").find(".view-grouping-content").each(function(i) {
        (i == 0) ?
          $(this).siblings(".view-grouping-header").addClass("open") :
          $(this).slideToggle();
      });

      // on click event
      $(".view-newsletter-archive").find(".collapsible-archive h3").click(function() {
        $(this).siblings("ul").slideToggle(function() {
          if ($(this).siblings("h3").hasClass("open")) {
            $(this).siblings("h3").removeClass("open").addClass("close");
          } else {
            $(this).siblings("h3").removeClass("close").addClass("open");
          }
        });
      });
      $(".view-newsletter-archive").find(".view-grouping-header").click(function() {
        $(this).siblings(".view-grouping-content").slideToggle(function() {
          if ($(this).siblings(".view-grouping-header").hasClass("open")) {
            $(this).siblings(".view-grouping-header").removeClass("open").addClass("close");
          } else {
            $(this).siblings(".view-grouping-header").removeClass("close").addClass("open");
          }
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
