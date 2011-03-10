<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function noc_community_discussion_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'discussion_node';
  $context->description = 'Community discussion node page';
  $context->tag = 'noc';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'community_discussion' => 'community_discussion',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-discussion_list-block_1' => array(
          'module' => 'views',
          'delta' => 'discussion_list-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Community discussion node page');
  t('noc');

  $export['discussion_node'] = $context;
  return $export;
}
