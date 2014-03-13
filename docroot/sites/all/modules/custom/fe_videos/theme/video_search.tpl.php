<div class="videos-landing-header">
  <div class="header">
    <?php print t('Are you ready to tell stories on video, conduct computer-assited investigations or become a blackpack journalist? Check out videos on this topics and more'); ?>
  </div>
  <div class="topic-select">
    <select id="topic-dropdown">
      <option value="" disabled selected style="display:none;">Select a video topic</option>
      <?php foreach ($categories as $id => $category): ?>
        <option value="<?php print $id; ?>"> <?php print $category; ?> </option>
      <?php endforeach ?>
    </select>
    <div class="search">
      <a href="#" class="button-tiny"> SEARCH </a>
    </div>
  </div>
</div>
