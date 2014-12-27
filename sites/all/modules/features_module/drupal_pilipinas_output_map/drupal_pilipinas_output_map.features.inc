<?php
/**
 * @file
 * drupal_pilipinas_output_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_pilipinas_output_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}
