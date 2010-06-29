<?php

// All session ids we're going to look at in the schedule
$session_ids = osu_courses_feature_get_schedule_session_ids();
//die(print_r($session_ids, true));

// The term schedule we want to show by default.  
$current_session_id = osu_courses_feature_get_current_session_id();

// Gets a very large and complex array of data for all the schedule info.
$schedule_data = osu_courses_feature_class_schedule_fetch($node->nid, $session_ids[0], $session_ids[count($session_ids)-1]);

?>
<p>
<?php if (strlen($node->body) > 0):?>
  <?php print $node->body;?>
<?php else: ?>
  <?php print $node->field_osu_course_description[0]['value']; ?> 
<?php endif;?>
</p>

<?php print theme('osu_courses_feature_schedule_theme', $schedule_data); ?>



