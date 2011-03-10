<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function noc_community_discussion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:discussion
  $menu_links['features:discussion'] = array(
    'menu_name' => 'features',
    'link_path' => 'discussion',
    'router_path' => 'discussion',
    'link_title' => 'Discussion',
    'options' => array(
      'attributes' => array(
        'title' => 'Latest community discussions',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Discussion');


  return $menu_links;
}
