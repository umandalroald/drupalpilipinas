<?php

/**
 * @file
 * template.php
 */

function drupinas_preprocess_page(&$variables, $hook) {
  global $user;
  if (is_array($user->roles) && in_array('administrator', $user->roles)) {
    $css_path = drupal_get_path('theme', 'drupinas') . '/css/admincss.css';
    $css_options = array(
        'group' => CSS_THEME, 
      );
    drupal_add_css($css_path, $css_options);
  }
}

function drupinas_menu_tree__primary($variables) {
  return '<ul class="nav navbar-nav navbar-right">' . $variables['tree'] . '</ul>';
}
