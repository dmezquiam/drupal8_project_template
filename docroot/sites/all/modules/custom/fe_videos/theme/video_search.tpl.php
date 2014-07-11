<div class="videos-landing-header clearfix">
  <div class="header">
    <div class="header-inner">
      <p>
        <?php print t('Are you ready to tell stories on video, conduct computer-assited investigations or become a blackpack journalist? Check out videos on this topics and more.'); ?>
      </p>
    </div>
  </div>
  <div class="topic-select">
    <div class="topic-select-inner">
      <h3><?php print t('SEARCH VIDEOS'); ?></h3>
      <select id="topic-dropdown">
        <option value="" disabled selected style="display:none;"><?php print t('Select a video topic'); ?></option>
        <?php foreach ($categories as $id => $category): ?>
          <option value="<?php print $id; ?>"> <?php print $category; ?> </option>
        <?php endforeach ?>
      </select>
      <div class="search">
        <a href="#" class="button-clean-tiny"><?php print t(' SEARCH '); ?></a>
      </div>
    </div>
  </div>
</div>

