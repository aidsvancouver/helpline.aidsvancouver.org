<?php
/**
 * Implementation of template_preprocess_comment.
 */

function bourbon_base_preprocess_comment(&$variables) {
	$variables['submitted'] = t('<span class="comment-author">!username says: </span>', array('!username' => $variables['author']));
	$variables['submit_date'] = t('<span class="comment-date">Posted on !datetime</span>', array('!datetime' => $variables['created']));
}

/**
 * Implementation of theme_field()
 * Changing the display of the DS 'Submitted By' field.
 */
function bourbon_base_field__author($variables) {
	$output = "";
 	foreach ($variables['items'] as $delta => $item) {
    	$classes = 'field field-' . $variables['element']['#title'];
    	$output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . 'Written by ' . drupal_render($item) . '</div>';
  	}
  	return $output;
}