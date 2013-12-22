<?php
/**
 * @file
 * datacleaner_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datacleaner_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_business_name' => 'field_business_name',
    'field_db_contact' => 'field_db_contact',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_gender' => 'field_gender',
    'field_chinese_name' => 'field_chinese_name',
    'field_job' => 'field_job',
    'field_city' => 'field_city',
    'field_sales' => 'field_sales',
    'field_distribution' => 'field_distribution',
    'field_email' => 'field_email',
    'field_address' => 'field_address',
    'field_chinese_address' => 'field_chinese_address',
    'field_district' => 'field_district',
    'field_landline' => 'field_landline',
    'field_mobile_phone' => 'field_mobile_phone',
    'field_website' => 'field_website',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_business_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gender' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chinese_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sales' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_distribution' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chinese_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_district' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_landline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mobile_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Business Name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'field_data_field_business_name';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['element_label_colon'] = FALSE;
  /* Field: Content: DB Contact */
  $handler->display->display_options['fields']['field_db_contact']['id'] = 'field_db_contact';
  $handler->display->display_options['fields']['field_db_contact']['table'] = 'field_data_field_db_contact';
  $handler->display->display_options['fields']['field_db_contact']['field'] = 'field_db_contact';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  /* Field: Content: Chinese Name */
  $handler->display->display_options['fields']['field_chinese_name']['id'] = 'field_chinese_name';
  $handler->display->display_options['fields']['field_chinese_name']['table'] = 'field_data_field_chinese_name';
  $handler->display->display_options['fields']['field_chinese_name']['field'] = 'field_chinese_name';
  /* Field: Content: Job */
  $handler->display->display_options['fields']['field_job']['id'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['table'] = 'field_data_field_job';
  $handler->display->display_options['fields']['field_job']['field'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: Sales */
  $handler->display->display_options['fields']['field_sales']['id'] = 'field_sales';
  $handler->display->display_options['fields']['field_sales']['table'] = 'field_data_field_sales';
  $handler->display->display_options['fields']['field_sales']['field'] = 'field_sales';
  /* Field: Content: Distribution */
  $handler->display->display_options['fields']['field_distribution']['id'] = 'field_distribution';
  $handler->display->display_options['fields']['field_distribution']['table'] = 'field_data_field_distribution';
  $handler->display->display_options['fields']['field_distribution']['field'] = 'field_distribution';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  /* Field: Content: Chinese Address */
  $handler->display->display_options['fields']['field_chinese_address']['id'] = 'field_chinese_address';
  $handler->display->display_options['fields']['field_chinese_address']['table'] = 'field_data_field_chinese_address';
  $handler->display->display_options['fields']['field_chinese_address']['field'] = 'field_chinese_address';
  /* Field: Content: District */
  $handler->display->display_options['fields']['field_district']['id'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
  $handler->display->display_options['fields']['field_district']['field'] = 'field_district';
  /* Field: Content: Landline */
  $handler->display->display_options['fields']['field_landline']['id'] = 'field_landline';
  $handler->display->display_options['fields']['field_landline']['table'] = 'field_data_field_landline';
  $handler->display->display_options['fields']['field_landline']['field'] = 'field_landline';
  /* Field: Content: Mobile Phone */
  $handler->display->display_options['fields']['field_mobile_phone']['id'] = 'field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['table'] = 'field_data_field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['field'] = 'field_mobile_phone';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  /* Filter criterion: Content: Contact Type (field_contact_type) */
  $handler->display->display_options['filters']['field_contact_type_tid']['id'] = 'field_contact_type_tid';
  $handler->display->display_options['filters']['field_contact_type_tid']['table'] = 'field_data_field_contact_type';
  $handler->display->display_options['filters']['field_contact_type_tid']['field'] = 'field_contact_type_tid';
  $handler->display->display_options['filters']['field_contact_type_tid']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_contact_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_type_tid']['expose']['operator_id'] = 'field_contact_type_tid_op';
  $handler->display->display_options['filters']['field_contact_type_tid']['expose']['label'] = 'Contact Type';
  $handler->display->display_options['filters']['field_contact_type_tid']['expose']['operator'] = 'field_contact_type_tid_op';
  $handler->display->display_options['filters']['field_contact_type_tid']['expose']['identifier'] = 'field_contact_type_tid';
  $handler->display->display_options['filters']['field_contact_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_contact_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_contact_type_tid']['vocabulary'] = 'contact_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'contacts';
  $export['contacts'] = $view;

  return $export;
}
