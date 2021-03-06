<?php
/**
 * @file
 * pw_vote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_vote_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pw_vote_node_info() {
  $items = array(
    'vote' => array(
      'name' => t('jetzt abstimmen'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
