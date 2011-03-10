<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function noc_community_wiki_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wiki_node';
  $context->description = 'Community wiki node page';
  $context->tag = 'noc';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'community_wiki' => 'community_wiki',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-wiki_list-block_1' => array(
          'module' => 'views',
          'delta' => 'wiki_list-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Community wiki node page');
  t('noc');

  $export['wiki_node'] = $context;
  return $export;
}
