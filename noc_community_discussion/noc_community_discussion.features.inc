<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function noc_community_discussion_ctools_plugin_api() {
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
function noc_community_discussion_node_info() {
  $items = array(
    'community_discussion' => array(
      'name' => t('Discussion'),
      'module' => 'features',
      'description' => t('A simple post that can be submitted to a community.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '10',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function noc_community_discussion_views_api() {
  return array(
    'api' => '2',
  );
}
