<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function noc_community_ctools_plugin_api() {
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
function noc_community_node_info() {
  $items = array(
    'community' => array(
      'name' => t('Community'),
      'module' => 'features',
      'description' => t('Create a new space for a community'),
      'has_title' => '1',
      'title_label' => t('Community Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
