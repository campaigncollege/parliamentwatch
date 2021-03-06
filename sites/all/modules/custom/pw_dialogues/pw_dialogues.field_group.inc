<?php
/**
 * @file
 * pw_dialogues.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_dialogues_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|node|dialogue|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_dialogue_recipient',
      1 => 'node_link',
      2 => 'search_snippet',
      3 => 'group_sender',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grid 6 Wrapper',
      'instance_settings' => array(
        'classes' => 'grid-6 omega',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_grid_6|node|dialogue|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sender|node|dialogue|search_result';
  $field_group->group_name = 'group_sender';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'search_result';
  $field_group->parent_name = 'group_grid_6';
  $field_group->data = array(
    'label' => 'Sender Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_dialogue_sender_name',
      1 => 'field_dialogue_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sender Wrapper',
      'instance_settings' => array(
        'classes' => 'push-bottom-s',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sender|node|dialogue|search_result'] = $field_group;

  return $export;
}
