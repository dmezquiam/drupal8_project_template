jQuery(document).ready(function() {
  jQuery('.search .button-clean-tiny').click(function(){  
    var dropdown = jQuery('#topic-dropdown option:selected').val();
    window.location.href='videos/category/' + dropdown;
  })

})
