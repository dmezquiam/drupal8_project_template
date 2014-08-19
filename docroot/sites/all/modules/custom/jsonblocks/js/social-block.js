jQuery(document).ready (
	function ($) {

      $('.dropdown > div').toggleClass('no-js js');
      $('.dropdown .js .inner-dropdown').hide();
      $('.clicker').click(function(e) {
        var pathArray = window.location.pathname.split( '/' );
        if (pathArray[1] == 'en') {
          document.location = '/contact-ijnet';
        } else {
          $('.dropdown .js .inner-dropdown').slideToggle(200);
          $('.clicker').toggleClass('active');
          e.stopPropagation();
        }
      });

	}
);
