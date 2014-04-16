<?php
/**
 * @file
 * vih_short_course_kayak.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_short_course_kayak_defaultconfig_features() {
  return array(
    'vih_short_course_kayak' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function vih_short_course_kayak_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__vih_kayak';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '-10',
        ),
        'quantity' => array(
          'weight' => '-5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__vih_kayak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__vih_kayak';
  $strongarm->value = array(
    'view_modes' => array(
      'add_to_cart_confirmation_view' => array(
        'custom_settings' => TRUE,
      ),
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '-10',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'status' => array(
          'weight' => '35',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__vih_kayak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__vih_short_course_kayak';
  $strongarm->value = array(
    'view_modes' => array(
      'add_to_cart_confirmation_view' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_ical' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_ical' => array(
        'custom_settings' => FALSE,
      ),
      'node_media_gallery_block' => array(
        'custom_settings' => FALSE,
      ),
      'node_token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '-10',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'status' => array(
          'weight' => '35',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__vih_short_course_kayak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vih_short_course_kajak';
  $strongarm->value = array();
  $export['menu_options_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vih_short_course_kajak';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vih_short_course_kajak';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vih_short_course_kajak';
  $strongarm->value = '0';
  $export['node_preview_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vih_short_course_kajak';
  $strongarm->value = 0;
  $export['node_submitted_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_vih_short_course_kajak_pattern';
  $strongarm->value = 'kortekurser/[node:title]-[node:nid]';
  $export['pathauto_node_vih_short_course_kajak_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_vih_short_course_kajak';
  $strongarm->value = 1;
  $export['publishcontent_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_vih_short_course_kajak';
  $strongarm->value = 'Gem og tilføj felter';
  $export['save_continue_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_vih_short_course_kajak';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_vih_short_course_kajak';
  $strongarm->value = 0;
  $export['scheduler_publish_required_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_vih_short_course_kajak';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_vih_short_course_kajak';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_vih_short_course_kajak';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_vih_short_course_kajak';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_vih_short_course_kajak'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_vih_short_course_kajak';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_vih_short_course_kajak'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_short_course_kayak_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle vih_kayak'.
  $permissions['create commerce_product entities of bundle vih_kayak'] = array(
    'name' => 'create commerce_product entities of bundle vih_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle vih_short_course_kayak'.
  $permissions['create commerce_product entities of bundle vih_short_course_kayak'] = array(
    'name' => 'create commerce_product entities of bundle vih_short_course_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create vih_short_course_kajak content'.
  $permissions['create vih_short_course_kajak content'] = array(
    'name' => 'create vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_kajak content'.
  $permissions['delete any vih_short_course_kajak content'] = array(
    'name' => 'delete any vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_kajak content'.
  $permissions['delete own vih_short_course_kajak content'] = array(
    'name' => 'delete own vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_kayak'.
  $permissions['edit any commerce_product entity of bundle vih_kayak'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_short_course_kayak'.
  $permissions['edit any commerce_product entity of bundle vih_short_course_kayak'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_short_course_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any vih_short_course_kajak content'.
  $permissions['edit any vih_short_course_kajak content'] = array(
    'name' => 'edit any vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_kayak'.
  $permissions['edit own commerce_product entities of bundle vih_kayak'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_short_course_kayak'.
  $permissions['edit own commerce_product entities of bundle vih_short_course_kayak'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_short_course_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own vih_short_course_kajak content'.
  $permissions['edit own vih_short_course_kajak content'] = array(
    'name' => 'edit own vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_kayak'.
  $permissions['view any commerce_product entity of bundle vih_kayak'] = array(
    'name' => 'view any commerce_product entity of bundle vih_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_short_course_kayak'.
  $permissions['view any commerce_product entity of bundle vih_short_course_kayak'] = array(
    'name' => 'view any commerce_product entity of bundle vih_short_course_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_kayak'.
  $permissions['view own commerce_product entities of bundle vih_kayak'] = array(
    'name' => 'view own commerce_product entities of bundle vih_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_short_course_kayak'.
  $permissions['view own commerce_product entities of bundle vih_short_course_kayak'] = array(
    'name' => 'view own commerce_product entities of bundle vih_short_course_kayak',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
