<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function thacker_project_taxonomy_default_vocabularies() {
  return array(
    'skills' => array(
      'name' => 'Skills',
      'description' => 'The skills associated with a Project or User.',
      'help' => 'Design, Drupal, HTML, Copy writing, etc.',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_skills',
      'weight' => '0',
      'nodes' => array(
        'dt_project' => 'dt_project',
        'profile' => 'profile',
      ),
    ),
    'status' => array(
      'name' => 'Project Status',
      'description' => 'The status of Data Transparency projects.',
      'help' => 'Mark whether your project is done, in progress, active or still an idea.',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_status',
      'weight' => '0',
      'nodes' => array(
        'dt_project' => 'dt_project',
      ),
    ),
  );
}
