<?php

/**
 * Implementation of hook_node_info().
 */
function thacker_project_node_info() {
  $items = array(
    'dt_project' => array(
      'name' => t('Data Transparency Project'),
      'module' => 'features',
      'description' => t('A Project in data transparency'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
