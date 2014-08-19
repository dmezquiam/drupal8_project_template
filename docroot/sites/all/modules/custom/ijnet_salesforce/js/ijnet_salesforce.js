(function ($) {
  Drupal.behaviors.ijnet_salesforce = {
    attach: function(context, settings) {
      $('.mail-subscribe', context).innerHTML = 'test';
    }
  }
}(jQuery));
