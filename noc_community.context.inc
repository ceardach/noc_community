<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function noc_community_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'community_blocks';
  $context->description = 'Site-wide blocks that show users about their communities';
  $context->tag = 'noc';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'og_views-0' => array(
          'module' => 'og_views',
          'delta' => 0,
          'region' => 'left',
          'weight' => 0,
        ),
        'og-0' => array(
          'module' => 'og',
          'delta' => 0,
          'region' => 'left',
          'weight' => 1,
        ),
        'views-og_my-block_1' => array(
          'module' => 'views',
          'delta' => 'og_my-block_1',
          'region' => 'left',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site-wide blocks that show users about their communities');
  t('noc');

  $export['community_blocks'] = $context;
  return $export;
}
