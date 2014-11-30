<?php
/**
 * @file
 * context_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_blocks';
  $context->description = 'Blocks on Homepage';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'home_page' => 'home_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sponsors-block' => array(
          'module' => 'views',
          'delta' => 'sponsors-block',
          'region' => 'sponsors',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Blocks on Homepage');
  $export['home_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = '';
  $context->tag = 'Locations';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');
  $export['home_page'] = $context;

  return $export;
}
