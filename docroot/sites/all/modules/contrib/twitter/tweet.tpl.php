<?php
/**
 * @file
 * Renders a tweet as it does look like at Twitter.com.
 * @see twitter.css
 */
?>
<div class="twitter-status clearfix">
  <div class="twitter-header clearfix">
    <div class="avatar">
      <a alt="<?php print $author->name; ?>" title="<?php print $author->name; ?>" href=
      "https://twitter.com/<?php print $author->screen_name; ?>"><img src=
      "<?php print $author->profile_image_url; ?>"></a>
    </div>
    <div class="timestamp">
      <?php print $status->time_ago; ?>
    </div>
    <div class="name-handle">
      <div class="name">
        <a href="http://twitter.com/<?php print $author->screen_name; ?>"><?php print $author->name; ?></a>
      </div>

      <div class="handle">
        <a href="http://twitter.com/<?php print $author->screen_name; ?>">@<?php print $author->screen_name; ?></a>
      </div>
    </div>
  </div>
  <div class="text">
    <?php print _twitter_filter_link(_twitter_filter_hashtag(_twitter_filter_username($status->text, NULL), NULL), NULL); ?>
  </div>

 
</div>
