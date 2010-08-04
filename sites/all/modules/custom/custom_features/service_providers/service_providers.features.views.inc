<?php

/**
 * Helper to implementation of hook_views_default_views().
 */
function _service_providers_views_default_views() {
  $views = array();

  // Exported view: service_providers
  $view = new view;
  $view->name = 'service_providers';
  $view->description = 'רשימת נותני שירות בדרופל';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'שם',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_drupalpro_logo_fid' => array(
      'label' => 'לוגו',
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'drupalpro_logo_20H_default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_drupalpro_logo_fid',
      'table' => 'node_data_field_drupalpro_logo',
      'field' => 'field_drupalpro_logo_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_homepage_url' => array(
      'id' => 'field_homepage_url',
      'table' => 'node_data_field_homepage',
      'field' => 'field_homepage_url',
    ),
    'view_node' => array(
      'label' => 'מידע נוסף',
      'text' => 'מידע נוסף',
      'exclude' => 0,
      'id' => 'view_node',
      'table' => 'node',
      'field' => 'view_node',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'tid' => array(
      'label' => 'תחום השירות',
      'type' => 'separator',
      'separator' => ', ',
      'empty' => '',
      'link_to_taxonomy' => 0,
      'limit' => 0,
      'vids' => array(
        '1' => 0,
        '5' => 0,
        '3' => 0,
        '7' => 0,
        '4' => 0,
        '2' => 0,
        '6' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'random' => array(
      'id' => 'random',
      'table' => 'views',
      'field' => 'random',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'drupalpro' => 'drupalpro',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
    'role' => array(),
    'perm' => '',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'רשימת נותני שירות בדרופל');
  $handler->override_option('header', 'ברשימה זו מתפרסמים פרטיהם של נותני שירות בדרופל - מתכנתים, יועצים, מדריכים ומעצבים.
רשימה זו מוגשת כשירות של האתר, הן לנותני השירות השונים, והן לאלו הזקוקים לשירות בתחום. אנו מקווים לראות ברשימה זו יותר ויותר נותני שירות בתחומים השונים.

כל המידע המתפרסם כאן, נעשה על דעת המפרסם בלבד, ואין לאתר דרופל ישראל, או למי ממפעיליו ומנהליו, כל אחריות לתוכן המתפרסם*. <a href="node/add/drupalpro">לחצו כאן להוספת פרטיכם לרשימה</a>

');
  $handler->override_option('header_format', '1');
  $handler->override_option('footer', '* - על אף האמור לעיל, מפעילי האתר רשאים להסיר מודעות לא הולמות, על פי שיקול דעתם, וללא צורך בהסברים. ');
  $handler->override_option('footer_format', '1');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', '0');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_drupalpro_logo_fid' => 'field_drupalpro_logo_fid',
      'field_homepage_url' => 'field_homepage_url',
      'view_node' => 'view_node',
      'tid' => 'tid',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_drupalpro_logo_fid' => array(
        'separator' => '',
      ),
      'field_homepage_url' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'view_node' => array(
        'separator' => '',
      ),
      'tid' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'עמוד', 'page_1');
  $handler->override_option('path', 'services');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
