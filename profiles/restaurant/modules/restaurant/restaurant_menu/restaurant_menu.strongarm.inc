<?php
/**
 * @file
 * restaurant_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function restaurant_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_menu';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_menu';
  $strongarm->value = '0';
  $export['ant_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_menu';
  $strongarm->value = '';
  $export['ant_pattern_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_menu';
  $strongarm->value = 0;
  $export['ant_php_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_menu';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_menu';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_menu';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__menu';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'grid' => array(
        'custom_settings' => TRUE,
      ),
      'stacked' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'grid' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'stacked' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'grid' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'stacked' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'grid' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'stacked' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'grid' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'stacked' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__menu_categories';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'navigation' => array(
        'custom_settings' => TRUE,
      ),
      'grid' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'stacked' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '5',
        ),
        'name' => array(
          'weight' => '12',
        ),
        'description' => array(
          'weight' => '13',
        ),
        'metatags' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'navigation' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'grid' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'stacked' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__menu_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_default_active_menus';
  $strongarm->value = array(
    0 => 'devel',
    1 => 'menu-footer-menu',
    2 => 'main-menu',
    3 => 'management',
    4 => 'navigation',
    6 => 'user-menu',
  );
  $export['menu_default_active_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 496,
    2 => 493,
    3 => 485,
    4 => 253,
    5 => 252,
    6 => 250,
    7 => 248,
    8 => 247,
    9 => 246,
    10 => 245,
    11 => 243,
    12 => 242,
    13 => 237,
    14 => 127,
    15 => 126,
    16 => 125,
    17 => 124,
    18 => 123,
    19 => 122,
    20 => 121,
    21 => 119,
    22 => 118,
    23 => 117,
    24 => 96,
    25 => 63,
    26 => 62,
    27 => 61,
    28 => 60,
    29 => 59,
    30 => 58,
    31 => 56,
    32 => 55,
    33 => 44,
    34 => 31,
    35 => 30,
    36 => 29,
    37 => 28,
    38 => 27,
    39 => 26,
    40 => 24,
    41 => 23,
    42 => 21,
    43 => 16,
    44 => 15,
    45 => 14,
    46 => 13,
    47 => 11,
    48 => 10,
    49 => 8,
    50 => 7,
    51 => 6,
    52 => 5,
    53 => 3,
    54 => 2,
    55 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_menu';
  $strongarm->value = array();
  $export['menu_options_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_menu';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_content_enabled';
  $strongarm->value = TRUE;
  $export['node_content_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_menu';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_menu';
  $strongarm->value = '0';
  $export['node_preview_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_menu';
  $strongarm->value = 0;
  $export['node_submitted_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_menu';
  $strongarm->value = '';
  $export['page_title_type_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_menu_showfield';
  $strongarm->value = 0;
  $export['page_title_type_menu_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_menu_pattern';
  $strongarm->value = 'menus/[node:title]';
  $export['pathauto_node_menu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_menu_categories_pattern';
  $strongarm->value = 'menus/[term:name]';
  $export['pathauto_taxonomy_term_menu_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_menu';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_menu';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_menu_categories';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_menu_categories'] = $strongarm;

  return $export;
}
