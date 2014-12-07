<?php
/**
 * @file
 * menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:<void1>
  $menu_links['main-menu_blog:<void1>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<void1>',
    'router_path' => '<void1>',
    'link_title' => 'BLOG',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'external' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_blog:<void1>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_community:<void2>
  $menu_links['main-menu_community:<void2>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<void2>',
    'router_path' => '<void2>',
    'link_title' => 'COMMUNITY',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'main-menu_community:<void2>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:<void3>
  $menu_links['main-menu_events:<void3>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<void3>',
    'router_path' => '<void3>',
    'link_title' => 'EVENTS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'main-menu_events:<void3>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_gallery:<void4>
  $menu_links['main-menu_gallery:<void4>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<void4>',
    'router_path' => '<void4>',
    'link_title' => 'GALLERY',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'main-menu_gallery:<void4>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_projects:<void5>
  $menu_links['main-menu_projects:<void5>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<void5>',
    'router_path' => '<void5>',
    'link_title' => 'PROJECTS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'main-menu_projects:<void5>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sponsors:<void6>
  $menu_links['main-menu_sponsors:<void6>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<void6>',
    'router_path' => '<void6>',
    'link_title' => 'SPONSORS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'main-menu_sponsors:<void6>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_about:<front>
  $menu_links['menu-footer-menu_about:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_about:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_jobs:<front>
  $menu_links['menu-footer-menu_jobs:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Jobs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_jobs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_projects:<front>
  $menu_links['menu-footer-menu_projects:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_projects:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_videos:<front>
  $menu_links['menu-footer-menu_videos:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_videos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-inner-pages-_blog:<front>
  $menu_links['menu-main-menu-inner-pages-_blog:<front>'] = array(
    'menu_name' => 'menu-main-menu-inner-pages-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'BLOG',
    'options' => array(
      'fragment' => 'blog',
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-main-menu-inner-pages-_blog:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-inner-pages-_community:<front>
  $menu_links['menu-main-menu-inner-pages-_community:<front>'] = array(
    'menu_name' => 'menu-main-menu-inner-pages-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'COMMUNITY',
    'options' => array(
      'fragment' => 'community',
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-main-menu-inner-pages-_community:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-inner-pages-_events:<front>
  $menu_links['menu-main-menu-inner-pages-_events:<front>'] = array(
    'menu_name' => 'menu-main-menu-inner-pages-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'EVENTS',
    'options' => array(
      'fragment' => 'events',
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-main-menu-inner-pages-_events:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-inner-pages-_gallery:<front>
  $menu_links['menu-main-menu-inner-pages-_gallery:<front>'] = array(
    'menu_name' => 'menu-main-menu-inner-pages-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'GALLERY',
    'options' => array(
      'fragment' => 'gallery',
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-main-menu-inner-pages-_gallery:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-inner-pages-_projects:<front>
  $menu_links['menu-main-menu-inner-pages-_projects:<front>'] = array(
    'menu_name' => 'menu-main-menu-inner-pages-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PROJECTS',
    'options' => array(
      'fragment' => 'projects',
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-main-menu-inner-pages-_projects:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-inner-pages-_sponsors:<front>
  $menu_links['menu-main-menu-inner-pages-_sponsors:<front>'] = array(
    'menu_name' => 'menu-main-menu-inner-pages-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'SPONSORS',
    'options' => array(
      'fragment' => 'sponsors',
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-main-menu-inner-pages-_sponsors:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-left-menu_login:user
  $menu_links['menu-top-left-menu_login:user'] = array(
    'menu_name' => 'menu-top-left-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'LOGIN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-top-left-menu_login:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-top-left-menu_register:user/register
  $menu_links['menu-top-left-menu_register:user/register'] = array(
    'menu_name' => 'menu-top-left-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'REGISTER',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'external' => 0,
      'identifier' => 'menu-top-left-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('BLOG');
  t('COMMUNITY');
  t('EVENTS');
  t('GALLERY');
  t('Jobs');
  t('LOGIN');
  t('PROJECTS');
  t('Projects');
  t('REGISTER');
  t('SPONSORS');
  t('Videos');


  return $menu_links;
}
