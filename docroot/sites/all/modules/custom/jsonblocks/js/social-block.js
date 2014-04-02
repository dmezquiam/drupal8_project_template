jQuery(document).ready (
	function ($) {
		$('.dropdown > div').toggleClass('no-js js');
		$('.dropdown .js .inner-dropdown').hide();
		$('.clicker').click(function(e) {
			$('.dropdown .js .inner-dropdown').slideToggle(200);
			$('.clicker').toggleClass('active');
			e.stopPropagation();
		});

	}
	);

