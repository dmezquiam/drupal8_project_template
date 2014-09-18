diff --git a/docroot/sites/all/modules/contrib/twitter/tweet.tpl.php b/docroot/sites/all/modules/contrib/twitter/tweet.tpl.php
index e411b54..a6df9dd 100644
--- a/docroot/sites/all/modules/contrib/twitter/tweet.tpl.php
+++ b/docroot/sites/all/modules/contrib/twitter/tweet.tpl.php
@@ -6,38 +6,28 @@
  */
 ?>
 <div class="twitter-status clearfix">
-  <div class="avatar">
-    <a alt="<?php print $author->name; ?>" title="<?php print $author->name; ?>" href=
-    "https://twitter.com/<?php print $author->screen_name; ?>"><img src=
-    "<?php print $author->profile_image_url; ?>"></a>
-  </div>
-
-  <div class="timestamp">
-    <?php print $status->time_ago; ?>
-  </div>
-
-  <div class="name-handle">
-    <div class="name">
-      <a href="http://twitter.com/<?php print $author->screen_name; ?>"><?php print $author->name; ?></a>
+  <div class="twitter-header clearfix">
+    <div class="avatar">
+      <a alt="<?php print $author->name; ?>" title="<?php print $author->name; ?>" href=
+      "https://twitter.com/<?php print $author->screen_name; ?>"><img src=
+      "<?php print $author->profile_image_url; ?>"></a>
     </div>
+    <div class="timestamp">
+      <?php print $status->time_ago; ?>
+    </div>
+    <div class="name-handle">
+      <div class="name">
+        <a href="http://twitter.com/<?php print $author->screen_name; ?>"><?php print $author->name; ?></a>
+      </div>
 
-    <div class="handle">
-      <a href="http://twitter.com/<?php print $author->screen_name; ?>">@<?php print $author->screen_name; ?></a>
+      <div class="handle">
+        <a href="http://twitter.com/<?php print $author->screen_name; ?>">@<?php print $author->screen_name; ?></a>
+      </div>
     </div>
   </div>
-
   <div class="text">
     <?php print _twitter_filter_link(_twitter_filter_hashtag(_twitter_filter_username($status->text, NULL), NULL), NULL); ?>
   </div>
 
-  <ul class="actions">
-    <li><a href=
-    "https://twitter.com/intent/tweet?in_reply_to=<?php print $status->twitter_id; ?>">Reply</a></li>
-
-    <li><a href=
-    "https://twitter.com/intent/retweet?tweet_id=<?php print $status->twitter_id; ?>">Retweet</a></li>
-
-    <li><a href=
-    "https://twitter.com/intent/favorite?tweet_id=<?php print $status->twitter_id; ?>">Favorite</a></li>
-  </ul>
+ 
 </div>
