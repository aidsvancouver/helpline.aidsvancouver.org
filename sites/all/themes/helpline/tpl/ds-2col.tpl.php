<?php

/**
 * @file
 * Display Suite 2 column template.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-2col clearfix">
  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <<?php print $right_wrapper ?> class="group-right<?php print $right_classes; ?>">
    <div class="inner"><?php print $right; ?></div>
  </<?php print $right_wrapper ?>>

  <<?php print $left_wrapper ?> class="group-left<?php print $left_classes; ?>">
    <div class="inner"><?php print $left; ?></div>
  </<?php print $left_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
