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
  $context->name = 'events_node_blocks';
  $context->description = '';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'events_node_page' => 'events_node_page',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  $export['events_node_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_node_page';
  $context->description = '';
  $context->tag = 'Locations';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'events' => 'events',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');
  $export['events_node_page'] = $context;

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
        'ruthiecustom-sliderblock' => array(
          'module' => 'ruthiecustom',
          'delta' => 'sliderblock',
          'region' => 'slider',
          'weight' => '-10',
        ),
        'views-events-block' => array(
          'module' => 'views',
          'delta' => 'events-block',
          'region' => 'events',
          'weight' => '-10',
        ),
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
