<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function thacker_project_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project';
  $context->description = 'The data Transparency Project overview';
  $context->tag = 'section';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'dt_project_page' => 'dt_project_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'thacker_project-0' => array(
          'module' => 'thacker_project',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-dt_project_ideas-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_project_ideas-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views--exp-dt_project_page-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-dt_project_page-page_1',
          'region' => 'preface_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The data Transparency Project overview');
  t('section');

  $export['project'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_node';
  $context->description = 'Data Transparency node view';
  $context->tag = 'node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'dt_project' => 'dt_project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dt_project_members_block-block' => array(
          'module' => 'views',
          'delta' => 'dt_project_members_block-block',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-e8395831fe63b88e2403d2f899120ad0' => array(
          'module' => 'views',
          'delta' => 'e8395831fe63b88e2403d2f899120ad0',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-dt_project_skills-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_project_skills-block_1',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
        'views-dt_project_promo-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_project_promo-block_1',
          'region' => 'preface_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Data Transparency node view');
  t('node');

  $export['project_node'] = $context;
  return $export;
}
