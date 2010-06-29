<?php

/**
 * Helper to implementation of hook_views_default_views().
 */
function _osu_courses_feature_views_default_views() {
  $views = array();

  // Exported view: courses_large_all
  $view = new view;
  $view->name = 'courses_large_all';
  $view->description = 'A listing of courses';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<h2>[title]</h2>',
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
      'link_to_node' => 1,
      'exclude' => 1,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_osu_course_description_value' => array(
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
      'exclude' => 1,
      'id' => 'field_osu_course_description_value',
      'table' => 'node_data_field_osu_course_description',
      'field' => 'field_osu_course_description_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'nothing' => array(
      'label' => '',
      'alter' => array(
        'text' => '<h3>[title]</h3>
<p>[field_osu_course_description_value]</p>',
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
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'osu_course' => 'osu_course',
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
    'field_osu_course_catalog_print_value' => array(
      'operator' => '=',
      'value' => 'Y',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'case' => 1,
      'id' => 'field_osu_course_catalog_print_value',
      'table' => 'node_data_field_osu_course_catalog_print',
      'field' => 'field_osu_course_catalog_print_value',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
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
    'field_osu_course_approved_value' => array(
      'operator' => '=',
      'value' => 'A',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'case' => 1,
      'id' => 'field_osu_course_approved_value',
      'table' => 'node_data_field_osu_course_approved',
      'field' => 'field_osu_course_approved_value',
      'relationship' => 'none',
    ),
    'field_osu_course_campus_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_osu_course_campus_value_many_to_one_op',
        'identifier' => 'campus',
        'label' => 'Campus',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_osu_course_campus_value_many_to_one',
      'table' => 'node_data_field_osu_course_campus',
      'field' => 'field_osu_course_campus_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_osu_course_subject_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_osu_course_subject_value_many_to_one_op',
        'identifier' => 'subject',
        'label' => 'Subject',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_osu_course_subject_value_many_to_one',
      'table' => 'node_data_field_osu_course_subject',
      'field' => 'field_osu_course_subject_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_osu_course_level_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_osu_course_level_value_many_to_one_op',
        'identifier' => 'level',
        'label' => 'Level',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_osu_course_level_value_many_to_one',
      'table' => 'node_data_field_osu_course_level',
      'field' => 'field_osu_course_level_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Courses');
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'semanticviews_default');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'group' => array(
      'element_type' => 'h3',
      'class' => 'title',
    ),
    'list' => array(
      'element_type' => 'ul',
      'class' => '',
    ),
    'row' => array(
      'element_type' => 'li',
      'class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
  ));
  $handler->override_option('exposed_block', TRUE);
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'courses');
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
    'name' => 'navigation',
  ));
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'item_length' => 'default',
  ));
  $handler->override_option('path', 'course/feed');
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
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'default' => 'default',
    'page_1' => 'page_1',
  ));
  $handler->override_option('sitename_title', FALSE);

  $views[$view->name] = $view;

  // Exported view: courses_large_all_calendar
  $view = new view;
  $view->name = 'courses_large_all_calendar';
  $view->description = 'All course sections on a calendar';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'field_osu_sched_to_class_ref_nid' => array(
      'label' => 'Class',
      'required' => 1,
      'delta' => -1,
      'id' => 'field_osu_sched_to_class_ref_nid',
      'table' => 'node_data_field_osu_sched_to_class_ref',
      'field' => 'field_osu_sched_to_class_ref_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_osu_class_to_course_ref_nid' => array(
      'label' => 'Course Offering',
      'required' => 1,
      'delta' => -1,
      'id' => 'field_osu_class_to_course_ref_nid',
      'table' => 'node_data_field_osu_class_to_course_ref',
      'field' => 'field_osu_class_to_course_ref_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'field_osu_sched_to_class_ref_nid',
    ),
  ));
  $handler->override_option('fields', array(
    'title' => array(
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
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_osu_class_schedule_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<span class="smalltext">[field_osu_class_schedule_value]</span>',
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
      'format' => 'time',
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => 0,
      ),
      'repeat' => array(
        'show_repeat_rule' => 'hide',
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'exclude' => 0,
      'id' => 'field_osu_class_schedule_value',
      'table' => 'node_data_field_osu_class_schedule',
      'field' => 'field_osu_class_schedule_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_osu_facility_name_short_value' => array(
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
      'id' => 'field_osu_facility_name_short_value',
      'table' => 'node_data_field_osu_facility_name_short',
      'field' => 'field_osu_facility_name_short_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_osu_class_sched_instr_value' => array(
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
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_osu_class_sched_instr_value',
      'table' => 'node_data_field_osu_class_sched_instr',
      'field' => 'field_osu_class_sched_instr_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'date_argument' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'date',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'date_fields' => array(
        'node_data_field_osu_class_schedule.field_osu_class_schedule_value' => 'node_data_field_osu_class_schedule.field_osu_class_schedule_value',
      ),
      'year_range' => '-3:+3',
      'date_method' => 'OR',
      'granularity' => 'week',
      'id' => 'date_argument',
      'table' => 'node',
      'field' => 'date_argument',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '14' => 0,
        '13' => 0,
        '9' => 0,
        '12' => 0,
        '8' => 0,
        '3' => 0,
        '5' => 0,
        '4' => 0,
        '10' => 0,
        '11' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_image_size' => '_original',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'webform' => 0,
        'event' => 0,
        'story' => 0,
        'osu_class' => 0,
        'osu_class_sched' => 0,
        'osu_course' => 0,
        'osu_session' => 0,
        'osu_person' => 0,
        'page' => 0,
        'image' => 0,
        'panel' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '3' => 0,
        '7' => 0,
        '4' => 0,
        '8' => 0,
        '1' => 0,
        '5' => 0,
        '2' => 0,
        '6' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'image_size' => array(
        '_original' => '_original',
        'thumbnail' => 'thumbnail',
        'preview' => 'preview',
      ),
      'validate_argument_signup_status' => 'any',
      'validate_argument_signup_node_access' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'osu_class_sched' => 'osu_class_sched',
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
    'field_osu_course_campus_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_osu_course_campus_value_many_to_one_op',
        'identifier' => 'campus',
        'label' => 'Campus',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_osu_course_campus_value_many_to_one',
      'table' => 'node_data_field_osu_course_campus',
      'field' => 'field_osu_course_campus_value_many_to_one',
      'relationship' => 'field_osu_class_to_course_ref_nid',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_osu_course_subject_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_osu_course_subject_value_many_to_one_op',
        'identifier' => 'subject',
        'label' => 'Subject',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_osu_course_subject_value_many_to_one',
      'table' => 'node_data_field_osu_course_subject',
      'field' => 'field_osu_course_subject_value_many_to_one',
      'relationship' => 'field_osu_class_to_course_ref_nid',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_osu_course_level_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_osu_course_level_value_many_to_one_op',
        'identifier' => 'level',
        'label' => 'Level',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_osu_course_level_value_many_to_one',
      'table' => 'node_data_field_osu_course_level',
      'field' => 'field_osu_course_level_value_many_to_one',
      'relationship' => 'field_osu_class_to_course_ref_nid',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_osu_course_approved_value' => array(
      'operator' => '=',
      'value' => 'A',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'case' => 1,
      'id' => 'field_osu_course_approved_value',
      'table' => 'node_data_field_osu_course_approved',
      'field' => 'field_osu_course_approved_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'field_osu_class_to_course_ref_nid',
    ),
    'field_osu_course_catalog_print_value' => array(
      'operator' => '=',
      'value' => 'Y',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'case' => 1,
      'id' => 'field_osu_course_catalog_print_value',
      'table' => 'node_data_field_osu_course_catalog_print',
      'field' => 'field_osu_course_catalog_print_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'field_osu_class_to_course_ref_nid',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
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
      'relationship' => 'field_osu_class_to_course_ref_nid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Course Calendar');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('style_plugin', 'date_nav');
  $handler->override_option('exposed_block', TRUE);
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
    'name_size' => 3,
    'with_weekno' => 0,
    'max_items' => 0,
    'max_items_behavior' => 'more',
    'groupby_times' => 'hour',
    'groupby_times_custom' => '',
    'groupby_field' => '',
  ));
  $handler->override_option('path', 'course/calendar');
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
    'name' => 'navigation',
  ));
  $handler = $view->new_display('date_nav', 'Date browser', 'date_nav_1');
  $handler->override_option('style_options', NULL);
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
