<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function thacker_project_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function thacker_project_imagecache_default_presets() {
  $items = array(
    'promotional_banner' => array(
      'presetname' => 'promotional_banner',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '585',
            'height' => '260',
          ),
        ),
      ),
    ),
    'promotional_home' => array(
      'presetname' => 'promotional_home',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '284',
            'height' => '360',
          ),
        ),
      ),
    ),
    'promotional_page' => array(
      'presetname' => 'promotional_page',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '210',
            'height' => '246',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function thacker_project_node_info() {
  $items = array(
    'dt_project' => array(
      'name' => t('Project'),
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

/**
 * Implementation of hook_views_api().
 */
function thacker_project_views_api() {
  return array(
    'api' => '2',
  );
}
