<?php
/**
 * @file
 * restaurant_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'front-page-main',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_sutro_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => NULL,
    ),
    'header' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = 'ae4c532f-b482-4d1c-9e9c-8ef96506b12d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c7bdd3b6-22c6-4232-82bc-c4154fc0b999';
  $pane->panel = 'header';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:aea03ead-18eb-46f6-9409-2ca603723af9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1458159103,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => 'fc787a46-8c6e-4de0-88c5-9677fa3fc2bf',
      'fpid' => '1',
      'bundle' => 'image',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1458005890',
      'changed' => 1458159103,
      'uuid' => 'aea03ead-18eb-46f6-9409-2ca603723af9',
      'language' => '',
      'current_vid' => '4',
      'field_basic_image_caption' => array(
        'und' => array(),
      ),
      'field_basic_image_image' => array(
        'und' => array(
          0 => array(
            'alt' => 'La Paloma Bar and Grill',
            'fid' => '1',
            'display' => '1',
            'width' => '4272',
            'height' => '2848',
            'manualcrop_selections' => array(
              'panopoly_image_full' => '0|295|4272|2169',
            ),
            'description' => '',
            'upload_button' => 'Upload',
            'remove_button' => 'Remove',
            'upload' => '',
            'title' => '',
            'manualcrop_style' => 'Crop',
          ),
        ),
      ),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '4',
        'timestamp' => '1458147436',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => '450486d3-0f82-4020-873a-0a3346200bf3',
        'fpid' => '1',
        'bundle' => 'image',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1458005890',
        'changed' => '1458147436',
        'uuid' => 'aea03ead-18eb-46f6-9409-2ca603723af9',
        'language' => '',
        'current_vid' => '4',
        'field_basic_image_caption' => array(),
        'field_basic_image_image' => array(
          'und' => array(
            0 => array(
              'fid' => '1',
              'uid' => '1',
              'filename' => 'img_3636.jpg',
              'uri' => 'public://general/img_3636.jpg',
              'filemime' => 'image/jpeg',
              'filesize' => '1627761',
              'status' => '1',
              'timestamp' => '1458005890',
              'type' => 'image',
              'uuid' => '8b6b4338-7e93-4fad-8d1a-b05237dfe489',
              'field_file_image_alt_text' => array(),
              'field_file_image_title_text' => array(),
              'metatags' => array(),
              'metadata' => array(
                'height' => 2848,
                'width' => 4272,
              ),
              'alt' => 'La Paloma Bar and Grill',
              'title' => '',
              'height' => '2848',
              'width' => '4272',
            ),
          ),
        ),
      ),
      'old_vid' => '4',
      'vid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'front-hero',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c7bdd3b6-22c6-4232-82bc-c4154fc0b999';
  $display->content['new-c7bdd3b6-22c6-4232-82bc-c4154fc0b999'] = $pane;
  $display->panels['header'][0] = 'new-c7bdd3b6-22c6-4232-82bc-c4154fc0b999';
  $pane = new stdClass();
  $pane->pid = 'new-5f081dcd-258c-4a05-8c57-aa5dbad79f46';
  $pane->panel = 'header';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:4bcd928e-6ead-4249-bd1e-d7765c2c0724';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => 'La Paloma Bar & Grill',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '2',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '2',
      'field_basic_text_text' => array(
        'und' => array(),
      ),
      'log' => '',
      'created' => 1458147362,
      'timestamp' => 1458147362,
      'changed' => 1458147362,
      'uuid' => '4bcd928e-6ead-4249-bd1e-d7765c2c0724',
      'vuuid' => '1d820201-0871-4999-93bf-30847305bb86',
      'uid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'slide-text',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5f081dcd-258c-4a05-8c57-aa5dbad79f46';
  $display->content['new-5f081dcd-258c-4a05-8c57-aa5dbad79f46'] = $pane;
  $display->panels['header'][1] = 'new-5f081dcd-258c-4a05-8c57-aa5dbad79f46';
  $pane = new stdClass();
  $pane->pid = 'new-b6a476f1-c572-422e-8a45-f8e37d2cbccc';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'menus-featured_menus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '3',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'featured',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b6a476f1-c572-422e-8a45-f8e37d2cbccc';
  $display->content['new-b6a476f1-c572-422e-8a45-f8e37d2cbccc'] = $pane;
  $display->panels['middle'][0] = 'new-b6a476f1-c572-422e-8a45-f8e37d2cbccc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
