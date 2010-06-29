<?php

/**
 * Implementation of hook_content_default_fields().
 */
function osu_courses_feature_content_default_fields() {
  module_load_include('inc', 'osu_courses_feature', 'osu_courses_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_osu_courses_feature_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function osu_courses_feature_ctools_plugin_api() {
  module_load_include('inc', 'osu_courses_feature', 'osu_courses_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_osu_courses_feature_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function osu_courses_feature_fieldgroup_default_groups() {
  module_load_include('inc', 'osu_courses_feature', 'osu_courses_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_osu_courses_feature_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_node_info().
 */
function osu_courses_feature_node_info() {
  module_load_include('inc', 'osu_courses_feature', 'osu_courses_feature.features.node');
  $args = func_get_args();
  return call_user_func_array('_osu_courses_feature_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function osu_courses_feature_strongarm() {
  module_load_include('inc', 'osu_courses_feature', 'osu_courses_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_osu_courses_feature_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function osu_courses_feature_views_default_views() {
  module_load_include('inc', 'osu_courses_feature', 'osu_courses_feature.features.views');
  $args = func_get_args();
  return call_user_func_array('_osu_courses_feature_views_default_views', $args);
}
