<?php

/**
 * Helper to implementation of hook_views_default_views().
 */
function _service_providers_views_default_views() {
  $views = array();

  // Exported view: drupal_sites
  $view = new view;
  $view->name = 'drupal_sites';
  $view->description = 'רשימת אתרי דרופל';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'field_site_author_nid' => array(
      'label' => 'יוצר',
      'required' => 0,
      'delta' => -1,
      'id' => 'field_site_author_nid',
      'table' => 'node_data_field_site_author',
      'field' => 'field_site_author_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'field_screenshots_fid' => array(
      'label' => 'תמונות מסך',
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'screenshot_50x50_linked',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_screenshots_fid',
      'table' => 'node_data_field_screenshots',
      'field' => 'field_screenshots_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_homepage_url' => array(
      'label' => '',
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_homepage_url',
      'table' => 'node_data_field_homepage',
      'field' => 'field_homepage_url',
      'relationship' => 'none',
    ),
    'view_node' => array(
      'label' => 'מידע',
      'text' => 'למידע נוסף',
      'exclude' => 0,
      'id' => 'view_node',
      'table' => 'node',
      'field' => 'view_node',
      'relationship' => 'none',
    ),
    'field_drupalpro_logo_fid' => array(
      'label' => 'נבנה ע"י',
      'link_to_node' => 1,
      'label_type' => 'custom',
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
      'relationship' => 'field_site_author_nid',
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
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'drupalsite' => 'drupalsite',
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
  $handler->override_option('title', 'אתרי דרופל ישראליים / עבריים / מרוטלים');
  $handler->override_option('header', 'ברשימה זו נכללים אתרי דרופל משלנו, הקהילה בישראל. הרשימה מסודרת בסדר אקראי, למען ההגינות ושוויון ההזדמנויות (רשימה זו כוללת רק אתרים בעלי צילום מסך. [לרשימה מלאה](/israeli-drupal-sites/list)).
<a href="http://www.drupal.org.il/node/add/drupalsite">הוסיפו את האתר שלכם!</a>
');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('footer_format', '1');
  $handler->override_option('empty_format', '1');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', '50');
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 0,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_site_author_nid' => 'field_site_author_nid',
      'field_screenshots_fid' => 'field_screenshots_fid',
      'field_homepage_url' => 'field_homepage_url',
      'view_node' => 'view_node',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_site_author_nid' => array(
        'separator' => '',
      ),
      'field_screenshots_fid' => array(
        'separator' => '',
      ),
      'field_homepage_url' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'view_node' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'עמוד', 'page_1');
  $handler->override_option('header', 'ברשימה זו נכללים אתרי דרופל משלנו, הקהילה בישראל. הרשימה מסודרת בסדר אקראי, למען ההגינות ושוויון ההזדמנויות (רשימה זו כוללת רק אתרים בעלי צילום מסך.
<a href="http://www.drupal.org.il/node/add/drupalsite">הוסיפו את האתר שלכם!</a>
');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('path', 'israeli-drupal-sites/list');
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
  $handler = $view->new_display('block', 'תיבה', 'block_1');
  $handler->override_option('arguments', array(
    'field_site_author_nid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => 'דוגמאות לאתרים',
      'breadcrumb' => '',
      'default_argument_type' => 'node',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'field_site_author_nid',
      'table' => 'node_data_field_site_author',
      'field' => 'field_site_author_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'poll' => 0,
        'forum' => 0,
        'bio' => 0,
        'book' => 0,
        'doil_faq' => 0,
        'drupalpro' => 0,
        'drupalsite' => 0,
        'event' => 0,
        'page' => 0,
        'profile' => 0,
        'simplenews' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
        '5' => 0,
        '3' => 0,
        '7' => 0,
        '4' => 0,
        '2' => 0,
        '6' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_php' => '',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '3' => 0,
        '6' => 0,
        '4' => 0,
      ),
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
    ),
  ));
  $handler->override_option('header', '');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('path', 'israeli-drupal-sites/feed');
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
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('page', 'Gallery', 'page_2');
  $handler->override_option('relationships', array(
    'field_site_author_nid' => array(
      'label' => 'יוצר',
      'required' => 0,
      'delta' => -1,
      'id' => 'field_site_author_nid',
      'table' => 'node_data_field_site_author',
      'field' => 'field_site_author_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_screenshots_fid' => array(
      'label' => 'תמונות מסך',
      'required' => 1,
      'delta' => '0',
      'id' => 'field_screenshots_fid',
      'table' => 'node_data_field_screenshots',
      'field' => 'field_screenshots_fid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'field_screenshots_fid' => array(
      'label' => '',
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
      'label_type' => 'none',
      'format' => 'imagefield__lightbox2__screenshot_150x130__screenshot_800x600',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'id' => 'field_screenshots_fid',
      'table' => 'node_data_field_screenshots',
      'field' => 'field_screenshots_fid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_homepage_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_homepage_url',
      'table' => 'node_data_field_homepage',
      'field' => 'field_homepage_url',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'view_node' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => 'למידע נוסף',
      'exclude' => 0,
      'id' => 'view_node',
      'table' => 'node',
      'field' => 'view_node',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_drupalpro_logo_fid' => array(
      'label' => 'נבנה ע"י',
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
      'link_to_node' => 1,
      'label_type' => 'custom',
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
        'button' => 'Use default',
      ),
      'relationship' => 'field_site_author_nid',
    ),
  ));
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'columns' => '4',
    'alignment' => 'horizontal',
  ));
  $handler->override_option('path', 'israeli-drupal-sites');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'גלריה',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));

  $views[$view->name] = $view;

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
