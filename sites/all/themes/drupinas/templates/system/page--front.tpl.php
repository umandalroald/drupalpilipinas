<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

<div id="top-page"></div>
<div class="header-top">
  <?php if ($menu = menu_navigation_links('menu-top-left-menu')) : ?>
    <section class="top-menus">
      <div class="inner">
        <div class="left">
          <?php print theme('links__menu-top-left-menu', array(
            'links' => $menu, 'attributes' => array( 'id' => 'menu-top-left-menu',), 
            )); ?>
        </div>
        <div class="right">
          <ul>
            <?php if ($fb = theme_get_setting('facebook_link')) : ?>
              <li><a target="_blank" href="<?php print $fb; ?>"><i class="fa <?php print theme_get_setting('facebook_fa_class') ;?> fa-lg"></i></a></li>
            <?php endif; ?>
            <?php if ($linkedin = theme_get_setting('linkedin_link')) : ?>
              <li><a target="_blank" href="<?php print $linkedin; ?>"><i class="fa <?php print theme_get_setting('linkedin_fa_class') ;?> fa-lg"></i></a></li>
            <?php endif; ?>
            <?php if ($twitter = theme_get_setting('twitter_link')) : ?>
              <li><a target="_blank" href="<?php print $twitter; ?>"><i class="fa <?php print theme_get_setting('twitter_fa_class') ;?> fa-lg"></i></a></li>
            <?php endif; ?>
            <?php if ($instagram = theme_get_setting('instagram_link')) : ?>
              <li><a target="_blank" href="<?php print $instagram; ?>"><i class="fa <?php print theme_get_setting('instagram_fa_class') ;?> fa-lg"></i></a></li>
            <?php endif; ?>
          </ul>
        </div>
      </div>
    </section>
  <?php endif; ?>

  <header class="navigation-container">
    <div class="inner">
      <nav role="navigation" class="navbar navbar-default">
        <div class="navbar-header">
          <button type="button" data-target="#navbarCollapse" data-toggle="collapse" class="navbar-toggle">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <?php if ($logo): ?>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
              <img id="site-logo" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
            </a>
          <?php endif; ?>
        </div>
        <div id="navbarCollapse" class="collapse navbar-collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
          </nav>
        </div>
      </nav>
    </div>
    <a href="#top-page" class="click-to-top" alt="Go to Top"><i class="fa fa-eject fa-2x"></i></a>
  </header>

</div>


<?php if ($page['slider']) : ?>
  <?php print render($page['slider']); ?>
<?php endif; ?>

<div class="waypoints-container">

  <section id="blog">
    <div class="inner">
      <?php if ($page['blog']) : ?>
        <?php print render($page['blog']); ?>
      <?php endif; ?>
    </div>
  </section>

  <section id="projects">
    <div class="inner">
      <?php if ($page['projects']) : ?>
        <?php print render($page['projects']); ?>
      <?php endif; ?>
    </div>
  </section>

  <section id="events">
    <div class="inner">
      <?php if ($page['events']) : ?>
        <?php print render($page['events']); ?>
      <?php endif; ?>
    </div>
  </section>

  <section id="community">
    <div class="inner">
      <?php if ($page['community']) : ?>
        <?php print render($page['community']); ?>
      <?php endif; ?>
    </div>
  </section>

  <section id="gallery">
    <?php if ($page['gallery']) : ?>
      <?php print render($page['gallery']); ?>
    <?php endif; ?>
  </section>

  <section id="sponsors">
    <div class="inner">
      <?php if ($page['sponsors']) : ?>
        <?php print render($page['sponsors']); ?>
      <?php endif; ?>
    </div>
  </section>

</div>


<div class="content-container">
  <div class="inner">
    <?php if (!drupal_is_front_page()) { ?>
    <?php print render($page['content']); ?>
    <?php } ?>
  </div>
</div>

<footer class="footer">
  <div class="inner">
    <div class="left">
      <span><?php print theme_get_setting('footer_text');?></span>
    </div>
    <div class="right">
      <span>Other Links</span>
      <?php if ($menu = menu_navigation_links('menu-footer-menu')) : ?>
        <?php
          print theme('links__menu-footer-menu', array(
            'links' => $menu,
            'attributes' => array(
              'id' => 'menu-footer-menu',
            ),
            'heading' => array(
              'text' => "",
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          ));
        ?>
      <?php endif; ?>
    </div>  
  </div>
</footer>


