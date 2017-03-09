(function ($) {
  Drupal.behaviors.ijnet_carebot = {
    attach: function (context, settings) {
      jQuery(window).load(function() {
        var scrollTracker = new CarebotTracker.ScrollTracker('page-wrapper', 
          function(percent, seconds) {
            var slug = document.location.href.split("/").pop(); 
            var eventData = {
              'hitType': 'event',
              'eventCategory': slug,
              'eventAction': 'scroll-depth',
              'eventLabel': percent,
              'eventValue': seconds
            };
            ga('send', eventData); // Assumes GA has already been set up.
          }
        );

        var visibilityTracker = new CarebotTracker.VisibilityTracker('page-wrapper', 
          function(bucket) {
            var slug = document.location.href.split("/").pop();
            var eventData = {
              'hitType': 'event',
              'eventCategory': slug, // something to identify the story later
              'eventAction': 'on-screen',
              'eventLabel': bucket,
            };
            ga('send', eventData); // Assumes GA has already been set up.
          }
        );
      });
    }
  }
}(jQuery));