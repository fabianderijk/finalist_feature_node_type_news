<?php
/**
 * @file
 * finalist_feature_node_type_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function finalist_feature_node_type_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function finalist_feature_node_type_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Nieuws'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
