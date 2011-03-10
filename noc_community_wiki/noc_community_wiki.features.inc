<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function noc_community_wiki_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function noc_community_wiki_node_info() {
  $items = array(
    'community_wiki' => array(
      'name' => t('Wiki Page'),
      'module' => 'features',
      'description' => t('A simple wiki page that can be edited by any member of the community.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function noc_community_wiki_views_api() {
  return array(
    'api' => '2',
  );
}
