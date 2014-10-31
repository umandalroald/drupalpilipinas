<?php

/**
 * @file
 * template.php
 */

function drupinas_preprocess_page(&$variables, $hook) {

}

function drupinas_menu_tree__primary($variables) {
  return '<ul class="nav navbar-nav navbar-right">' . $variables['tree'] . '</ul>';
}
