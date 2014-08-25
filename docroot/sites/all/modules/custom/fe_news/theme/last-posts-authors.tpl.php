<div id="author-tabs-list">
  <div class="author-tabs-list">
    <ul>

<?php foreach($authors as $author): ?>
      <li class="clearfix">
        <div class="avatar">
  <?php if (isset($author->avatar)): ?>
    <?php print(l($author->avatar, 'user/' . $author->uid, array('html' => true, 'attributes' => array('class' => array("image-style-avatar-small-img"))))); ?>
  <?php endif; ?>
        </div>
        <div class="author-name">
  <?php if (isset($author->uid)): ?>
    <?php print(l($author->name, 'user/'.$author->uid)); ?>
  <?php else: ?>
          <?php print($author->name); ?>
  <?php endif; ?>
        </div>
        <div class="job-name">
  <?php if (isset($author->job)): ?>
    <?php print($author->job) ?>
  <?php endif; ?>
        </div>
        <div class="organization">
  <?php if (isset($author->organization)): ?>
    <?php print($author->organization) ?>
  <?php endif; ?>
        </div>
        <div class="buttons">
  <?php if (isset($author->uid)): ?>
    <?php print(l(t('PROFILE POSTS'), 'user/' . $author->uid, array('attributes' => array('class' => array("button-clean-tiny"))))); ?>
  <?php endif; ?>
        </div>
      </li>
<?php endforeach; ?>

    </ul>
  </div>
</div>
