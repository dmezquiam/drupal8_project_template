  <?php if (!$logged) : ?>
    <div class="log-in-block">
      <label class="sign-reg"><a href='/user'> <?php print t(' SIGN IN '); ?> </a><span><?php print t('OR'); ?></span><a href='/user/register'><?php print t(' REGISTER '); ?></a></label>
  <?php else : ?>
    <div class="logged-block">
      <label class="sign-reg"><a href='/user'><?php print t(' MY ACCOUNT '); ?></a><span></span><a href='/user/logout'><?php print t(' LOG OUT '); ?></a></label>
  <?php endif ?>
</div>
