  <?php if (!$logged) : ?>
    <div class="log-in-block">
      <label class="sign-reg"><a href='/user'> SIGN IN </a><span>OR</span><a href='/user/register'> REGISTER </a></label>
  <?php else : ?>
    <div class="logged-block">
      <label class="sign-reg"><a href='/user'> MY ACCOUNT </a><span></span><a href='/user/logout'> LOG OUT </a></label>
  <?php endif ?>
</div>
