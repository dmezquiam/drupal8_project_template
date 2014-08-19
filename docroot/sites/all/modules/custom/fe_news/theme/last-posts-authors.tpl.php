<div id="last-post-authors">
  <div class="item-list">
    <ul>

<?php foreach($authors as $author): ?>
      <li class="clearfix">
  <?php if (isset($author->avatar)): ?>
        <div class="avatar">
          <a href="" class="image-style-avatar-small-img" width="110" height="110" alt>
    <?php print theme_image_style(array('style_name' => 'avatar_small_img', 'path' => $author->avatar, 'width' => null, 'height' => null)); ?>
          </a>
        </div>
  <?php endif; ?>
  <?php if (isset($author->name)): ?>
        <div class="author-name">
          <a href=""><?php print($author->name) ?> </a>
        </div>
  <?php endif; ?>
  <?php if (isset($author->job)): ?>
        <div class="job-name">
    <?php print($author->job) ?>
        </div>
  <?php endif; ?>
  <?php if (isset($author->organization)): ?>
        <div class="organization">
    <?php print($author->organization) ?>
        </div>
  <?php endif; ?>
  <?php if (isset($author->link)): ?>
        <div class="buttons">
          <a href="" class="button-clean-tiny">PROFILE POSTS</a>
        </div>
  <?php endif; ?>
      </li>
<?php endforeach; ?>

    </ul>
  </div>
</div>
