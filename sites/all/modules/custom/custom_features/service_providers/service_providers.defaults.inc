<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _service_providers_content_default_fields() {
  $fields = array();

  // Exported field: field_about_service_provider
  $fields[] = array(
    'field_name' => 'field_about_service_provider',
    'type_name' => 'drupalpro',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => '',
      'rows' => '20',
      'label' => 'אודות',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_info
  $fields[] = array(
    'field_name' => 'field_contact_info',
    'type_name' => 'drupalpro',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => '',
      'rows' => '5',
      'label' => 'פרטי יצירת קשר',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_drupalpro_logo
  $fields[] = array(
    'field_name' => 'field_drupalpro_logo',
    'type_name' => 'drupalpro',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'drupalpro_logo_200x200_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'drupalpro_logo_200x200_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => NULL,
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'file_widgets' => NULL,
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => 'לוגו',
      'custom_alt' => 0,
      'title' => 'לוגו',
      'custom_title' => 0,
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'לוגו',
      'weight' => '2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_homepage
  $fields[] = array(
    'field_name' => 'field_homepage',
    'type_name' => 'drupalpro',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 'optional',
    'title' => 'value',
    'title_value' => '[title]',
    'enable_tokens' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
          'title' => '',
          'attributes' => 'N;',
        ),
      ),
      'default_value_php' => '',
      'label' => 'אתר הבית',
      'weight' => '-1',
      'description' => 'נשמח להכיר את אתר הבית שלך. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_homepage
  $fields[] = array(
    'field_name' => 'field_homepage',
    'type_name' => 'drupalsite',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 'optional',
    'title' => 'value',
    'title_value' => '[title]',
    'enable_tokens' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'כתובת האתר',
      'weight' => '1',
      'description' => 'כתובת האתר (כולל http://)',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_screenshots
  $fields[] = array(
    'field_name' => 'field_screenshots',
    'type_name' => 'drupalsite',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'screenshot_150x130_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__screenshot_150x130__screenshot_800x600',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '10',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => '1',
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => '',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'file_widgets' => NULL,
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => 'תמונת מסך',
      'custom_alt' => 0,
      'title' => 'תמונת מסך',
      'custom_title' => 0,
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'תמונות מסך',
      'weight' => '2',
      'description' => '<strong>הוספת תמונות מסך. למה זה כדאי?</strong><br />
אתרים שיוצדו להם תמונות מסך, יוכלו להיות מוצגים באזורי תצוגת אתרים באתר דרופל ישראל, וכך לזכות בחשיפה נוספת! עיזרו לנו להפוך את האתר לעשיר יותר ויפה יותר, ועיזרו לעצמכם לקבל יותר תנועה לאתר :-)',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_site_author
  $fields[] = array(
    'field_name' => 'field_site_author',
    'type_name' => 'drupalsite',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'drupalpro' => 'drupalpro',
      'event' => 0,
      'drupalsite' => 0,
      'forum' => 0,
      'story' => 0,
      'bio' => 0,
      'poll' => 0,
      'itzuv' => 0,
      'page' => 0,
      'book' => 0,
      'blog' => 0,
      'profile' => 0,
      'doil_faq' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'יוצר',
      'weight' => '-2',
      'description' => 'מומלץ לפרסם גם את שם יוצר האתר. הפרסום יקנה חשיפה לבונה האתר.
<strong>אם אינכם מוצאים את שמכם ברשימה</strong>, <a href="/node/add/drupalpro">אנא הוסיפו אותו!</a> (יש לקרוא בעיון את ההוראות)',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_tech_description
  $fields[] = array(
    'field_name' => 'field_tech_description',
    'type_name' => 'drupalsite',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => '',
      'rows' => '5',
      'label' => 'תיאור טכני',
      'weight' => 0,
      'description' => 'איך בניתם את האתר? באיזה מודולים השתמשתם? מהם האתגרים שבהם נתקלתם? ואיפה אתם רואים מקום לשיפור? נשמח אם תשתפו אותנו בחוויה.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('אודות'),
    t('אתר הבית'),
    t('יוצר'),
    t('כתובת האתר'),
    t('לוגו'),
    t('פרטי יצירת קשר'),
    t('תיאור טכני'),
    t('תמונות מסך'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _service_providers_imagecache_default_presets() {
  $items = array(
    'drupalpro_logo_200x200' => array(
      'presetname' => 'drupalpro_logo_200x200',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '200',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'drupalpro_logo_20H' => array(
      'presetname' => 'drupalpro_logo_20H',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '20',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'screenshot_150x130' => array(
      'presetname' => 'screenshot_150x130',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150',
            'height' => '130',
          ),
        ),
      ),
    ),
    'screenshot_50x50' => array(
      'presetname' => 'screenshot_50x50',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '50',
            'height' => '50',
          ),
        ),
      ),
    ),
    'screenshot_800x600' => array(
      'presetname' => 'screenshot_800x600',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '800',
            'height' => '600',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
