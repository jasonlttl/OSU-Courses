<?php
/*
function osu_courses_feature_class_schedule_section_theme($group_section_id, $class_section_id, $class_section){
  $rowspan = count($class_section['meetings']);
  $html = " 
    <tr>
    <td class=\"osu_course_component_type\" rowspan=\"{$rowspan}\">"
      . osu_courses_feature_class_schedule_component_theme($group_section_id, $class_section_id, $class_section['field_osu_class_component'])."</td>";
  $first = true;
  foreach ($class_section['meetings'] as $meeting) {
    if (!$first) {
      $html .= '<tr>';
    }
    $first = false;
    if (strlen($meeting['instructor_ids'][0])==0) {
      $meeting['instructor_ids'][0] = 'staff';
    }
    $pattern = preg_split('/\s/', $meeting['pattern']);
    $html .= "<td class=\"osu_course_instructors\">".join("<br />\n", $meeting['instructor_ids'])."</td>";
    $html .= "<td class=\"osu_course_facility\">".$meeting['facility_name']
    .'<a href="'.$meeting['gmap_link'].'"><img src="'.base_path().drupal_get_path('module','osu_courses_feature').'/map-icon.jpg" alt="Google Maps" style="margin:0px 2px 0px 3px;"/></a>'."</td>";
    $html .= "<td class=\"osu_course_days\">".$pattern[0]."</td>";
    $html .= "<td class=\"osu_course_times\">".$pattern[1]."</td>";
    $html .= "<td class=\"osu_course_pat_from\">".date_format_date(date_make_date($meeting['start_date']), 'custom', 'n/j/y')."</td>";
    $html .= "<td class=\"osu_course_pat_to\">".date_format_date(date_make_date($meeting['end_date']), 'custom', 'n/j/y')."</td>";
    $html .= "</tr>";
  }
  
  return $html;
}*/


$rowspan = count($section_data['meetings']);

?>
<tr>
  <td class="osu_course_component_type" rowspan="<?php print $rowspan ?>">
  <?php if ($group_section_id == $class_section_id): ?>
    <span class="osu_course_parent_class">
  <?php else: ?>
    <span class="osu_course_child_class">
  <?php endif; ?>
  <?php print htmlspecialchars($section_data['field_osu_class_component'])?></span>
  </td>  
  <td rowspan="<?php print $rowspan ?>" class="osu_course_size"><?php print $section_data['field_osu_class_enroll_tot']?>/<?php print $section_data['field_osu_class_enroll_cap']?></td>
  <?php $first = true; ?>
  <?php foreach ($section_data['meetings'] as $meeting): ?>
  <?php
    // oops, need some php  
    if (!$first) {
      print '<tr>';
    }
    $first = false;
    if (strlen($meeting['instructor_ids'][0])==0) {
      $meeting['instructor_ids'][0] = 'staff';
    }
    $pattern = preg_split('/\s/', $meeting['pattern']);
  ?>
  <td class="osu_course_instructors"> <?php print join("<br />\n", $meeting['instructor_ids']); ?></td>
  <td class="osu_course_facility">
    <?php print $meeting['facility_name']; ?>
    <a href="<?php print $meeting['gmap_link']; ?>">
    <img src="<?php print base_path().drupal_get_path('module','osu_courses_feature');?>/map-icon.jpg" alt="Google Maps" style="margin:0px 2px 0px 3px;"/></a>
  </td>
  <td class="osu_course_days"><?php print $pattern[0];?></td>
  <td class="osu_course_times"><?php print $pattern[1];?></td>
  <td class="osu_course_pat_from osu_course_pat_to"><?php print date_format_date(date_make_date($meeting['start_date']), 'custom', 'n/j');?>-<?php print date_format_date(date_make_date($meeting['end_date']), 'custom', 'n/j');?></td>
  <?php endforeach;?>
</tr>