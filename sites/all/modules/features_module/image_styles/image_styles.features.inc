<?php
/**
 * @file
 * image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 249x168_sponsors_homepage.
  $styles['249x168_sponsors_homepage'] = array(
    'name' => '249x168_sponsors_homepage',
    'label' => '249x168 Sponsors Homepage',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 249,
          'height' => 168,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 940x400px_image_slider.
  $styles['940x400px_image_slider'] = array(
    'name' => '940x400px_image_slider',
    'label' => '940x400px Image Slider',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
