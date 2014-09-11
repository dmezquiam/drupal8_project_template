jQuery(document).ready(function () {
  ('.blog-archive-view .view-grouping-content').hide();
  ('.blog-archive-view .view-grouping-content .views-row').hide();
  ('.blog-archive-view .view-grouping-header').click(function(){
    (this).next('.view-grouping-content').toggle('slow');
  });
  ('.blog-archive-view .view-grouping-content h3').click(function(){
    jQuery(this).next('.views-row').toggle('slow');
  });
}
);
