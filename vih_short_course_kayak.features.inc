<?php
/**
 * @file
 * vih_short_course_kayak.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function vih_short_course_kayak_commerce_line_item_default_types() {
  $items = array(
    'vih_kayak' => array(
      'name' => 'VIH Kayak',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
    'vih_short_course_kayak' => array(
      'name' => 'VIH Short Course Kayak',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function vih_short_course_kayak_commerce_product_default_types() {
  $items = array(
    'vih_kayak' => array(
      'type' => 'vih_kayak',
      'name' => 'VIH Kayak',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'vih_short_course_kayak' => array(
      'type' => 'vih_short_course_kayak',
      'name' => 'VIH Short Course Kayak',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_short_course_kayak_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_short_course_kayak_node_info() {
  $items = array(
    'vih_short_course_kajak' => array(
      'name' => t('Short Course Kajak'),
      'base' => 'node_content',
      'description' => t('Used for the <em>kayak courses</em> where you should be able to rent a kayak and add your size for the wet suit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
