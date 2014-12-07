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

  if(isset($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    $node = menu_get_object();

    //if node type is blog
    if ($variables['node']->type == 'blog' || $variables['node']->type == 'events') {
      if (isset($node->field_image['und'][0]['uri'])) {
        $bg_big_bgimage = image_style_url('1600x450_blog_big_image', $node->field_image['und'][0]['uri']);
        $variables['bg_big_bgimage'] = $bg_big_bgimage;
      }
    }

  }

}

function drupinas_menu_tree__primary($variables) {
  return '<ul class="nav navbar-nav navbar-right">' . $variables['tree'] . '</ul>';
}
