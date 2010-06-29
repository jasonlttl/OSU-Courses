<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _osu_courses_feature_node_info() {
  $items = array(
    'osu_class' => array(
      'name' => t('OSU Class'),
      'module' => 'features',
      'description' => t('Classes are sections of an instance of a course offering.  So if Math 151 is offered in fall, it might have 10 lectures and 20 recitations which refer back to particular lectures.  All of these sections, individually, are classes.  
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'osu_class_sched' => array(
      'name' => t('OSU Class Schedule'),
      'module' => 'features',
      'description' => t('Defines when a lecture or recitation meets.  A class can have more than one schedule.  Most don\'t.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'osu_course' => array(
      'name' => t('OSU Course Offering'),
      'module' => 'features',
      'description' => t('An offering from the course catalog.  There is one offering per campus per course.  Astronomy 161 in Lima'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'osu_session' => array(
      'name' => t('OSU Session'),
      'module' => 'features',
      'description' => t('A teaching unit within a quarter or semester'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
