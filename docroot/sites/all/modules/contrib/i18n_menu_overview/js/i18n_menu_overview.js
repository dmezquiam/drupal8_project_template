/**
 * @file i18n_menu_overview.js.
 */
(function ($) {
  Drupal.behaviors.i18n_menu_overview = {
    attach: function (context, settings) {
      $menu_overview = $('#menu-overview');

      $showFilter = Drupal.settings.i18n_menu_overview.filter;
      $showCollapse = Drupal.settings.i18n_menu_overview.collapse;

      if ($showFilter) {
        $menu_overview.filterTable({
          callback: function (term, table) {
            if ($showCollapse) {
              $menu_overview.treetable("expandAll");
            }
          }
        });
      }

      if ($showCollapse) {
        $menu_overview.treetable({
          expandable: true,
          clickableNodeNames: true,
          indent: 0
        });
      }
    }
  };
})(jQuery);
