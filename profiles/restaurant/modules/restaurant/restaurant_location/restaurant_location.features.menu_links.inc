<?php
/**
 * @file
 * restaurant_location.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function restaurant_location_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_hours:locations.
  $menu_links['main-menu_hours:locations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Hours',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_hours:locations',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Hours');

  return $menu_links;
}
