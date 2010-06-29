<?php foreach (array_keys($session_schedule_data) as $group_section): ?>
<table class="osu_course_schedule" summary="Course Schedule">
  <thead>
    <tr>
      <th class="osu_course_component_type">Type</th>
      <th class="osu_course_instructors">*Size</th>
      <th class="osu_course_instructors">Instructor</th>
      <th class="osu_course_facility">Location</th>
      <th class="osu_course_days">Days</th>
      <th class="osu_course_times">Time</th>
      <th class="osu_course_pat_from osu_course_pat_to">Dates</th>
    </tr>
  </thead>
  <tbody>
  <?php foreach (array_keys($session_schedule_data[$group_section]) as $class_section):?>
  <?php print theme('osu_courses_feature_schedule_class_theme', $group_section, $class_section, 
          $session_schedule_data[$group_section][$class_section]);?>
  <?php endforeach; ?>
  </tbody>
</table>
<?php endforeach; ?>
<p class="smalltext">* See <a href="http://buckeyelink.osu.edu/">BuckeyeLink</a> for current availability.</p>