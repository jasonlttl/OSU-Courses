<?php 
jquery_ui_add(array('ui.core', 'ui.tabs'));
drupal_add_js('
  $(function() {
	 $("#course_tabs").tabs();
	});', 'inline');


// Summer 2009, Autumn 2009, etc...
$sessions = array_keys($all_schedule_data);

?>

<div id="course_tabs">
	
  <!-- Output the jquery ui tab menu -->
  <ul>
    <?php foreach($sessions as $session): ?>
    <li><a href="#<?php print preg_replace('/[^a-zA-Z0-9]/', '', $session); ?>"><?php print $session; ?></a></li>
    <?php endforeach; ?>
  </ul>
  
  <!-- Output the jquery ui tab contents -->
  <?php foreach($sessions as $session): ?>
	<div class="osu_course_session_schedule" id="<?php print preg_replace('/[^a-zA-Z0-9]/', '', $session); ?>">
		<?php print theme('osu_courses_feature_schedule_session_theme', $all_schedule_data[$session]);?>
	</div>
	<?php endforeach; ?>
</div>