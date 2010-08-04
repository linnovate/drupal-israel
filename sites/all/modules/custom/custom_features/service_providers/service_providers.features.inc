<?php

/**
 * Implementation of hook_content_default_fields().
 */
function service_providers_content_default_fields() {
  module_load_include('inc', 'service_providers', 'service_providers.defaults');
  $args = func_get_args();
  return call_user_func_array('_service_providers_content_default_fields', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function service_providers_imagecache_default_presets() {
  module_load_include('inc', 'service_providers', 'service_providers.defaults');
  $args = func_get_args();
  return call_user_func_array('_service_providers_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function service_providers_node_info() {
  module_load_include('inc', 'service_providers', 'service_providers.features.node');
  $args = func_get_args();
  return call_user_func_array('_service_providers_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function service_providers_views_default_views() {
  module_load_include('inc', 'service_providers', 'service_providers.features.views');
  $args = func_get_args();
  return call_user_func_array('_service_providers_views_default_views', $args);
}
