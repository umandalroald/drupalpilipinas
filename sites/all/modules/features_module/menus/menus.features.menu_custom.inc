<?php
/**
 * @file
 * menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Exported menu: menu-main-menu-inner-pages-.
  $menus['menu-main-menu-inner-pages-'] = array(
    'menu_name' => 'menu-main-menu-inner-pages-',
    'title' => 'Main Menu (Inner Pages)',
    'description' => '',
  );
  // Exported menu: menu-top-left-menu.
  $menus['menu-top-left-menu'] = array(
    'menu_name' => 'menu-top-left-menu',
    'title' => 'Top Left Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Main Menu (Inner Pages)');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Top Left Menu');


  return $menus;
}
