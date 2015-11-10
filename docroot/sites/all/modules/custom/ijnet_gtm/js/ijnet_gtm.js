(function ($) {
  Drupal.behaviors.ijnet_gtm = {
    attach: function (context, settings) {
      // Check login URL parameter
      if (parse('login') == 1) {
        dataLayer.push({'event': 'Sign in'});
      }

      // Bind to logout if logged in
      var $logoutLink = $('[href="/user/logout"]');
      if ($logoutLink.length) {
        $logoutLink.click(function() {
          dataLayer.push({'event': 'Sign out'});
        });
      }

      // Bind to registration link
      var $registerSubmitButton = $('#user-register-form #edit-submit');
      if ($registerSubmitButton.length) {
        $registerSubmitButton.click(function() {
          dataLayer.push({'event': 'Registration'});
        });
      }
    }
  }

  function parse(val) {
    var result = "",
      tmp = [];
    location.search
    //.replace ( "?", "" ) 
    // this is better, there might be a question mark inside
    .substr(1)
      .split("&")
      .forEach(function (item) {
      tmp = item.split("=");
      if (tmp[0] === val) result = decodeURIComponent(tmp[1]);
    });
    return result;
  }

  // Add function to push subscribe to newsletter event
  $.fn.ijnet_gtm_push_event = function(data) {
    if (data.event != 'undefined') {
      dataLayer.push({'event' : data.event});
    }
  }

})(jQuery)
