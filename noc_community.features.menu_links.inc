<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function noc_community_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/add/community
  $menu_links['primary-links:node/add/community'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/community',
    'router_path' => 'node/add/community',
    'link_title' => 'Create Community',
    'options' => array(
      'purl' => 'disabled',
      'attributes' => array(
        'title' => 'Create a new community!',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:og
  $menu_links['primary-links:og'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'og',
    'router_path' => 'og',
    'link_title' => 'Communities',
    'options' => array(
      'purl' => 'disabled',
      'attributes' => array(
        'title' => 'View all communities',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Communities');
  t('Create Community');


  return $menu_links;
}
