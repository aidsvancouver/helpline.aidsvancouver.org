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
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

<header id="site-header">
    
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
      <h1 id="site-logo"><?php print $site_name; ?></h1>
    </a>

    <?php if ($main_menu || $secondary_menu): ?>
      <nav id="main-navigation">
        <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
        <?php // print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Secondary menu'))); ?>
        <a class="mobile-toggle button" href="#footer-main-menu">Menu</a>
      </nav>
    <?php endif; ?>

    <div id="av-logo">
      The Helpline is a project<br>of <a href="http://www.aidsvancouver.org">AIDS Vancouver</a>
    </div>

    <?php print render($page['header']); ?>
    
</header>

<?php if ($page['preface']): ?>
  <section id="preface">
      <?php print render($page['preface']); ?>
      <div class="notifications">
        <?php print $messages; ?>
      </div>
  </section>
<?php endif; ?>

<section id="main">
  <?php if ($page['sidebar']): ?>
    <aside id="sidebar">
      <?php print render($page['sidebar']); ?>
      <div class="sidebar-call-promo">
        <img class="call-promo" src="http://localhost/helpline.aidsvanouver.org/public_html/sites/all/themes/helpline/img/sidebar-promo.jpg">
        <h3>Need to speak to someone?</h3>
        <p>Give us a call at 604-696-4666. Our trained volunteers are able to take your calls Monday to Friday 9am-4pm PST.</p>
        <a href="/disclaimer" class="disclaimer-link hide-phone">Please read our disclaimer.</a>
      </div>
    </aside>
  <?php endif; ?>

    <article id="<?php if ($page['sidebar']): ?>main-content-2col<?php else: ?>main-content-1col<?php endif; ?>">
      <a id="main-content"></a>
        <div id="content-preface">
            <?php if ($page['content_preface']): ?>
              <?php print render($page['content_preface']); ?>
            <?php endif; ?>
            
            <?php // if ($breadcrumb): ?>
              <div id="breadcrumb"><?php // print $breadcrumb; ?></div>
            <?php // endif; ?>
            
        </div>

      <header>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>        
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
      </header>

      <?php print render($page['content']); ?>   
      <?php print $feed_icons; ?>

      <?php if ($page['content_postscript']): ?>
        <footer id="content-postscript">
            <?php print render($page['content_postscript']); ?>
        </footer>
      <?php endif; ?>

    </article>

</section>

<?php if ($page['postscript']): ?>
  <section id="postscript">
      <?php print render($page['postscript']); ?>
  </section>
<?php endif; ?>

<footer id="site-footer">
    <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'footer-main-menu', 'class' => array('links', 'clearfix')))); ?>
    <?php print render($page['footer']); ?>
</footer>