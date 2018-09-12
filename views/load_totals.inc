<?php

$view = new view();
$view->name = 'load_totals';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'load_totals';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = false; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Load totals';
$handler->display->display_options['css_class'] = 'load-totals';
$handler->display->display_options['use_more_always'] = false;
$handler->display->display_options['group_by'] = true;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = true;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'tablesummarized';
$handler->display->display_options['style_options']['columns'] = [
	'nid' => 'nid',
	'title' => 'title',
	'field_broker_load_number' => 'field_broker_load_number',
	'field_csctatus' => 'field_csctatus',
	'field_customer' => 'field_customer',
	'field_driver' => 'field_driver',
	'field_single_carrier' => 'field_single_carrier',
	'field_truck' => 'field_truck',
	'field_loadpoint' => 'field_loadpoint',
	'field_address' => 'field_address',
	'name' => 'name',
	'field_dispatcher' => 'field_dispatcher',
	'field_date_time' => 'field_date_time',
	'field_empty_miles' => 'field_empty_miles',
	'field_total_miles' => 'field_total_miles',
	'field_gross_payment' => 'field_gross_payment',
	'field_sold_payment' => 'field_sold_payment',
	'field_diference' => 'field_diference',
	'field_percent' => 'field_percent',
	'field_accessories' => 'field_accessories',
	'field_rate_x_miles' => 'field_rate_x_miles',
	'field_billoflading' => 'field_billoflading',
	'field_rate_confirmation' => 'field_rate_confirmation',
];
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = [
	'nid' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'title' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_broker_load_number' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_csctatus' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_customer' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_driver' => [
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_single_carrier' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_truck' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_loadpoint' => [
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_address' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'name' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_dispatcher' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_date_time' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_empty_miles' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'field_total_miles' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'field_gross_payment' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_sold_payment' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'field_diference' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_percent' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_accessories' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_rate_x_miles' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'average_no_empties',
	],
	'field_billoflading' => [
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_rate_confirmation' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
];
/* Header: Global: PHP */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['php_output'] = '<p align="right">
<a class="btn btn-danger" href="<?php echo str_replace(\'loads/totals\',\'loads/pdf\',$_SERVER[\'REQUEST_URI\']);?>">Download as PDF</a>
</p>
';
/* Footer: Global: PHP */
$handler->display->display_options['footer']['php']['id'] = 'php';
$handler->display->display_options['footer']['php']['table'] = 'views';
$handler->display->display_options['footer']['php']['field'] = 'php';
$handler->display->display_options['footer']['php']['php_output'] = 'Algo
<a class="btn btn-default" href="/loads/totals/pdf/?">Download as PDF</a>';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_dispatcher_target_id']['id'] = 'field_dispatcher_target_id';
$handler->display->display_options['relationships']['field_dispatcher_target_id']['table'] = 'field_data_field_dispatcher';
$handler->display->display_options['relationships']['field_dispatcher_target_id']['field'] = 'field_dispatcher_target_id';
/* Relationship: Content: Load points (field_loadpoint) */
$handler->display->display_options['relationships']['field_loadpoint_value']['id'] = 'field_loadpoint_value';
$handler->display->display_options['relationships']['field_loadpoint_value']['table'] = 'field_data_field_loadpoint';
$handler->display->display_options['relationships']['field_loadpoint_value']['field'] = 'field_loadpoint_value';
$handler->display->display_options['relationships']['field_loadpoint_value']['required'] = true;
$handler->display->display_options['relationships']['field_loadpoint_value']['delta'] = '-1';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
$handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
$handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = true;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '4G ID';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = false;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = false;
/* Field: Content: Load Number */
$handler->display->display_options['fields']['field_broker_load_number']['id'] = 'field_broker_load_number';
$handler->display->display_options['fields']['field_broker_load_number']['table'] = 'field_data_field_broker_load_number';
$handler->display->display_options['fields']['field_broker_load_number']['field'] = 'field_broker_load_number';
$handler->display->display_options['fields']['field_broker_load_number']['label'] = 'Load #';
/* Field: Content: Status */
$handler->display->display_options['fields']['field_csctatus']['id'] = 'field_csctatus';
$handler->display->display_options['fields']['field_csctatus']['table'] = 'field_data_field_csctatus';
$handler->display->display_options['fields']['field_csctatus']['field'] = 'field_csctatus';
/* Field: Field: Customer */
$handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
$handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
$handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
$handler->display->display_options['fields']['field_customer']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
/* Field: Content: Drivers */
$handler->display->display_options['fields']['field_driver']['id'] = 'field_driver';
$handler->display->display_options['fields']['field_driver']['table'] = 'field_data_field_driver';
$handler->display->display_options['fields']['field_driver']['field'] = 'field_driver';
$handler->display->display_options['fields']['field_driver']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
$handler->display->display_options['fields']['field_driver']['delta_offset'] = '0';
/* Field: Content: Carrier */
$handler->display->display_options['fields']['field_single_carrier']['id'] = 'field_single_carrier';
$handler->display->display_options['fields']['field_single_carrier']['table'] = 'field_data_field_single_carrier';
$handler->display->display_options['fields']['field_single_carrier']['field'] = 'field_single_carrier';
$handler->display->display_options['fields']['field_single_carrier']['label'] = 'Carrier Company';
$handler->display->display_options['fields']['field_single_carrier']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
/* Field: Content: Truck */
$handler->display->display_options['fields']['field_truck']['id'] = 'field_truck';
$handler->display->display_options['fields']['field_truck']['table'] = 'field_data_field_truck';
$handler->display->display_options['fields']['field_truck']['field'] = 'field_truck';
$handler->display->display_options['fields']['field_truck']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
/* Field: Content: Load points */
$handler->display->display_options['fields']['field_loadpoint']['id'] = 'field_loadpoint';
$handler->display->display_options['fields']['field_loadpoint']['table'] = 'field_data_field_loadpoint';
$handler->display->display_options['fields']['field_loadpoint']['field'] = 'field_loadpoint';
$handler->display->display_options['fields']['field_loadpoint']['label'] = 'From';
$handler->display->display_options['fields']['field_loadpoint']['settings'] = [
	'add' => '',
	'edit' => '',
	'translate' => '',
	'delete' => '',
	'description' => 1,
	'view_mode' => 'full',
];
$handler->display->display_options['fields']['field_loadpoint']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['field_loadpoint']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_loadpoint']['delta_offset'] = '0';
/* Field: MAX(Field: Address) */
$handler->display->display_options['fields']['field_address']['id'] = 'field_address';
$handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address']['field'] = 'field_address';
$handler->display->display_options['fields']['field_address']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['fields']['field_address']['group_type'] = 'max';
$handler->display->display_options['fields']['field_address']['label'] = 'To';
$handler->display->display_options['fields']['field_address']['click_sort_column'] = 'locality';
$handler->display->display_options['fields']['field_address']['settings'] = [
	'use_widget_handlers' => 0,
	'format_handlers' => [
		'address' => 'address',
		'address-hide-postal-code' => 'address-hide-postal-code',
		'address-hide-street' => 'address-hide-street',
		'address-hide-country' => 'address-hide-country',
	],
];
$handler->display->display_options['fields']['field_address']['group_column'] = 'entity_id';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Author';
/* Field: Content: Dispatcher */
$handler->display->display_options['fields']['field_dispatcher']['id'] = 'field_dispatcher';
$handler->display->display_options['fields']['field_dispatcher']['table'] = 'field_data_field_dispatcher';
$handler->display->display_options['fields']['field_dispatcher']['field'] = 'field_dispatcher';
$handler->display->display_options['fields']['field_dispatcher']['settings'] = [
	'bypass_access' => 0,
	'link' => 0,
];
/* Field: MAX(Field collection item: Scheduled) */
$handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
$handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
$handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
$handler->display->display_options['fields']['field_date_time']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['fields']['field_date_time']['group_type'] = 'max';
$handler->display->display_options['fields']['field_date_time']['settings'] = [
	'format_type' => 'views',
	'fromto' => 'both',
	'multiple_number' => '',
	'multiple_from' => '',
	'multiple_to' => '',
	'show_remaining_days' => 0,
];
/* Field: Content: Empty Miles */
$handler->display->display_options['fields']['field_empty_miles']['id'] = 'field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['table'] = 'field_data_field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['field'] = 'field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Total Miles */
$handler->display->display_options['fields']['field_total_miles']['id'] = 'field_total_miles';
$handler->display->display_options['fields']['field_total_miles']['table'] = 'field_data_field_total_miles';
$handler->display->display_options['fields']['field_total_miles']['field'] = 'field_total_miles';
$handler->display->display_options['fields']['field_total_miles']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Gross Payment */
$handler->display->display_options['fields']['field_gross_payment']['id'] = 'field_gross_payment';
$handler->display->display_options['fields']['field_gross_payment']['table'] = 'field_data_field_gross_payment';
$handler->display->display_options['fields']['field_gross_payment']['field'] = 'field_gross_payment';
$handler->display->display_options['fields']['field_gross_payment']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Sold Payment */
$handler->display->display_options['fields']['field_sold_payment']['id'] = 'field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['table'] = 'field_data_field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['field'] = 'field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Diference */
$handler->display->display_options['fields']['field_diference']['id'] = 'field_diference';
$handler->display->display_options['fields']['field_diference']['table'] = 'field_data_field_diference';
$handler->display->display_options['fields']['field_diference']['field'] = 'field_diference';
$handler->display->display_options['fields']['field_diference']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Percent */
$handler->display->display_options['fields']['field_percent']['id'] = 'field_percent';
$handler->display->display_options['fields']['field_percent']['table'] = 'field_data_field_percent';
$handler->display->display_options['fields']['field_percent']['field'] = 'field_percent';
$handler->display->display_options['fields']['field_percent']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Field: Accessories */
$handler->display->display_options['fields']['field_accessories']['id'] = 'field_accessories';
$handler->display->display_options['fields']['field_accessories']['table'] = 'field_data_field_accessories';
$handler->display->display_options['fields']['field_accessories']['field'] = 'field_accessories';
$handler->display->display_options['fields']['field_accessories']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Rate x Miles */
$handler->display->display_options['fields']['field_rate_x_miles']['id'] = 'field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['table'] = 'field_data_field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['field'] = 'field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Bill of lading (BOL) */
$handler->display->display_options['fields']['field_billoflading']['id'] = 'field_billoflading';
$handler->display->display_options['fields']['field_billoflading']['table'] = 'field_data_field_billoflading';
$handler->display->display_options['fields']['field_billoflading']['field'] = 'field_billoflading';
$handler->display->display_options['fields']['field_billoflading']['label'] = 'BOL';
$handler->display->display_options['fields']['field_billoflading']['alter']['alter_text'] = true;
$handler->display->display_options['fields']['field_billoflading']['alter']['text'] = 'bol.pdf
';
$handler->display->display_options['fields']['field_billoflading']['alter']['make_link'] = true;
$handler->display->display_options['fields']['field_billoflading']['alter']['path'] = '[field_billoflading]';
$handler->display->display_options['fields']['field_billoflading']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['field_billoflading']['hide_empty'] = true;
$handler->display->display_options['fields']['field_billoflading']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_billoflading']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_billoflading']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['field_billoflading']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_billoflading']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_billoflading']['delta_reversed'] = true;
/* Field: Content: Rate Confirmation */
$handler->display->display_options['fields']['field_rate_confirmation']['id'] = 'field_rate_confirmation';
$handler->display->display_options['fields']['field_rate_confirmation']['table'] = 'field_data_field_rate_confirmation';
$handler->display->display_options['fields']['field_rate_confirmation']['field'] = 'field_rate_confirmation';
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['alter_text'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['text'] = 'confirmation.pdf';
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['make_link'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['path'] = '[field_rate_confirmation]';
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['field_rate_confirmation']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_rate_confirmation']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_rate_confirmation']['group_column'] = 'entity_id';
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
/* Filter criterion: Field collection item: Type (field_type) */
$handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
$handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
$handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
$handler->display->display_options['filters']['field_type_value']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['filters']['field_type_value']['value'] = [
	'min' => '',
	'max' => '',
	'value' => '',
	'delivery' => 'delivery',
];
$handler->display->display_options['filters']['field_type_value']['group'] = 1;
/* Filter criterion: Field collection item: Scheduled (field_date_time) */
$handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
$handler->display->display_options['filters']['field_date_time_value']['table'] = 'field_data_field_date_time';
$handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
$handler->display->display_options['filters']['field_date_time_value']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['filters']['field_date_time_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
$handler->display->display_options['filters']['field_date_time_value']['exposed'] = true;
$handler->display->display_options['filters']['field_date_time_value']['expose']['operator_id'] = 'field_date_time_value_op';
$handler->display->display_options['filters']['field_date_time_value']['expose']['label'] = 'Delivery date';
$handler->display->display_options['filters']['field_date_time_value']['expose']['operator'] = 'field_date_time_value_op';
$handler->display->display_options['filters']['field_date_time_value']['expose']['identifier'] = 'field_date_time_value';
$handler->display->display_options['filters']['field_date_time_value']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_date_time_value']['form_type'] = 'date_popup';
$handler->display->display_options['filters']['field_date_time_value']['year_range'] = '-3:+0';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = false;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = [
	'dispatch' => 'dispatch',
];
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Dispatcher (field_dispatcher) (reference filter) */
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['id'] = 'field_dispatcher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['table'] = 'field_data_field_dispatcher';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['field'] = 'field_dispatcher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['exposed'] = true;
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['expose']['operator_id'] = 'field_dispatcher_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['expose']['label'] = 'Dispatcher';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['expose']['operator'] = 'field_dispatcher_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['expose']['identifier'] = 'field_dispatcher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['group_info']['label'] = 'Dispatcher (field_dispatcher) (reference filter)';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['group_info']['identifier'] = 'field_dispatcher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['group_info']['remember'] = false;
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['group_info']['group_items'] = [
	1 => [],
	2 => [],
	3 => [],
];
$handler->display->display_options['filters']['field_dispatcher_target_id_entityreference_filter']['reference_display'] = 'dispatchers:dispatchers';
/* Filter criterion: Content: Author uid (reference filter) */
$handler->display->display_options['filters']['uid_entityreference_filter']['id'] = 'uid_entityreference_filter';
$handler->display->display_options['filters']['uid_entityreference_filter']['table'] = 'node';
$handler->display->display_options['filters']['uid_entityreference_filter']['field'] = 'uid_entityreference_filter';
$handler->display->display_options['filters']['uid_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['uid_entityreference_filter']['exposed'] = true;
$handler->display->display_options['filters']['uid_entityreference_filter']['expose']['operator_id'] = 'uid_entityreference_filter_op';
$handler->display->display_options['filters']['uid_entityreference_filter']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid_entityreference_filter']['expose']['operator'] = 'uid_entityreference_filter_op';
$handler->display->display_options['filters']['uid_entityreference_filter']['expose']['identifier'] = 'uid_entityreference_filter';
$handler->display->display_options['filters']['uid_entityreference_filter']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['uid_entityreference_filter']['reference_display'] = 'dispatchers:dispatchers';
/* Filter criterion: Field: Customer (field_customer) (reference filter) */
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['id'] = 'field_customer_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['table'] = 'field_data_field_customer';
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['field'] = 'field_customer_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['exposed'] = true;
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['expose']['operator_id'] = 'field_customer_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['expose']['label'] = 'Customer';
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['expose']['operator'] = 'field_customer_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['expose']['identifier'] = 'field_customer_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_customer_target_id_entityreference_filter']['reference_display'] = 'view_entities:entitycustomer';
/* Filter criterion: Content: Carrier (field_single_carrier) (reference filter) */
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['id'] = 'field_single_carrier_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['table'] = 'field_data_field_single_carrier';
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['field'] = 'field_single_carrier_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['exposed'] = true;
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['expose']['operator_id'] = 'field_single_carrier_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['expose']['label'] = 'Carrier';
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['expose']['operator'] = 'field_single_carrier_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['expose']['identifier'] = 'field_single_carrier_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_single_carrier_target_id_entityreference_filter']['reference_display'] = 'view_entities:entitycarrier';
/* Filter criterion: Content: Drivers (field_driver) (reference filter) */
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['id'] = 'field_driver_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['table'] = 'field_data_field_driver';
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['field'] = 'field_driver_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['exposed'] = true;
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['expose']['operator_id'] = 'field_driver_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['expose']['label'] = 'Driver';
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['expose']['operator'] = 'field_driver_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['expose']['identifier'] = 'field_driver_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_driver_target_id_entityreference_filter']['reference_display'] = 'view_entities:entitydriver';
/* Filter criterion: Content: Truck (field_truck) (reference filter) */
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['id'] = 'field_truck_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['table'] = 'field_data_field_truck';
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['field'] = 'field_truck_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['exposed'] = true;
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['expose']['operator_id'] = 'field_truck_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['expose']['label'] = 'Truck';
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['expose']['operator'] = 'field_truck_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['expose']['identifier'] = 'field_truck_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_truck_target_id_entityreference_filter']['reference_display'] = 'view_entities:entitytruck';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['footer'] = false;
$handler->display->display_options['path'] = 'loads/totals';

/* Display: For pdf */
$handler = $view->new_display('page', 'For pdf', 'pdf');
$handler->display->display_options['defaults']['fields'] = false;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = true;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '4G ID';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = false;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = false;
/* Field: Content: Load Number */
$handler->display->display_options['fields']['field_broker_load_number']['id'] = 'field_broker_load_number';
$handler->display->display_options['fields']['field_broker_load_number']['table'] = 'field_data_field_broker_load_number';
$handler->display->display_options['fields']['field_broker_load_number']['field'] = 'field_broker_load_number';
$handler->display->display_options['fields']['field_broker_load_number']['label'] = 'Load #';
/* Field: Content: Status */
$handler->display->display_options['fields']['field_csctatus']['id'] = 'field_csctatus';
$handler->display->display_options['fields']['field_csctatus']['table'] = 'field_data_field_csctatus';
$handler->display->display_options['fields']['field_csctatus']['field'] = 'field_csctatus';
/* Field: Field: Customer */
$handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
$handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
$handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
$handler->display->display_options['fields']['field_customer']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
/* Field: Content: Drivers */
$handler->display->display_options['fields']['field_driver']['id'] = 'field_driver';
$handler->display->display_options['fields']['field_driver']['table'] = 'field_data_field_driver';
$handler->display->display_options['fields']['field_driver']['field'] = 'field_driver';
$handler->display->display_options['fields']['field_driver']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
$handler->display->display_options['fields']['field_driver']['delta_offset'] = '0';
/* Field: Content: Carrier */
$handler->display->display_options['fields']['field_single_carrier']['id'] = 'field_single_carrier';
$handler->display->display_options['fields']['field_single_carrier']['table'] = 'field_data_field_single_carrier';
$handler->display->display_options['fields']['field_single_carrier']['field'] = 'field_single_carrier';
$handler->display->display_options['fields']['field_single_carrier']['label'] = 'Carrier Company';
$handler->display->display_options['fields']['field_single_carrier']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
/* Field: Content: Truck */
$handler->display->display_options['fields']['field_truck']['id'] = 'field_truck';
$handler->display->display_options['fields']['field_truck']['table'] = 'field_data_field_truck';
$handler->display->display_options['fields']['field_truck']['field'] = 'field_truck';
$handler->display->display_options['fields']['field_truck']['settings'] = [
	'bypass_access' => 0,
	'link' => 1,
];
/* Field: Content: Load points */
$handler->display->display_options['fields']['field_loadpoint']['id'] = 'field_loadpoint';
$handler->display->display_options['fields']['field_loadpoint']['table'] = 'field_data_field_loadpoint';
$handler->display->display_options['fields']['field_loadpoint']['field'] = 'field_loadpoint';
$handler->display->display_options['fields']['field_loadpoint']['label'] = 'From';
$handler->display->display_options['fields']['field_loadpoint']['settings'] = [
	'add' => '',
	'edit' => '',
	'translate' => '',
	'delete' => '',
	'description' => 1,
	'view_mode' => 'full',
];
$handler->display->display_options['fields']['field_loadpoint']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['field_loadpoint']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_loadpoint']['delta_offset'] = '0';
/* Field: MAX(Field: Address) */
$handler->display->display_options['fields']['field_address']['id'] = 'field_address';
$handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address']['field'] = 'field_address';
$handler->display->display_options['fields']['field_address']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['fields']['field_address']['group_type'] = 'max';
$handler->display->display_options['fields']['field_address']['label'] = 'To';
$handler->display->display_options['fields']['field_address']['click_sort_column'] = 'locality';
$handler->display->display_options['fields']['field_address']['settings'] = [
	'use_widget_handlers' => 0,
	'format_handlers' => [
		'address' => 'address',
		'address-hide-postal-code' => 'address-hide-postal-code',
		'address-hide-street' => 'address-hide-street',
		'address-hide-country' => 'address-hide-country',
	],
];
$handler->display->display_options['fields']['field_address']['group_column'] = 'entity_id';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Author';
/* Field: Content: Dispatcher */
$handler->display->display_options['fields']['field_dispatcher']['id'] = 'field_dispatcher';
$handler->display->display_options['fields']['field_dispatcher']['table'] = 'field_data_field_dispatcher';
$handler->display->display_options['fields']['field_dispatcher']['field'] = 'field_dispatcher';
$handler->display->display_options['fields']['field_dispatcher']['settings'] = [
	'bypass_access' => 0,
	'link' => 0,
];
/* Field: MAX(Field collection item: Scheduled) */
$handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
$handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
$handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
$handler->display->display_options['fields']['field_date_time']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['fields']['field_date_time']['group_type'] = 'max';
$handler->display->display_options['fields']['field_date_time']['element_label_colon'] = false;
$handler->display->display_options['fields']['field_date_time']['settings'] = [
	'format_type' => 'views',
	'fromto' => 'both',
	'multiple_number' => '',
	'multiple_from' => '',
	'multiple_to' => '',
	'show_remaining_days' => 0,
];
/* Field: Content: Empty Miles */
$handler->display->display_options['fields']['field_empty_miles']['id'] = 'field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['table'] = 'field_data_field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['field'] = 'field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Total Miles */
$handler->display->display_options['fields']['field_total_miles']['id'] = 'field_total_miles';
$handler->display->display_options['fields']['field_total_miles']['table'] = 'field_data_field_total_miles';
$handler->display->display_options['fields']['field_total_miles']['field'] = 'field_total_miles';
$handler->display->display_options['fields']['field_total_miles']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Gross Payment */
$handler->display->display_options['fields']['field_gross_payment']['id'] = 'field_gross_payment';
$handler->display->display_options['fields']['field_gross_payment']['table'] = 'field_data_field_gross_payment';
$handler->display->display_options['fields']['field_gross_payment']['field'] = 'field_gross_payment';
$handler->display->display_options['fields']['field_gross_payment']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Sold Payment */
$handler->display->display_options['fields']['field_sold_payment']['id'] = 'field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['table'] = 'field_data_field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['field'] = 'field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Diference */
$handler->display->display_options['fields']['field_diference']['id'] = 'field_diference';
$handler->display->display_options['fields']['field_diference']['table'] = 'field_data_field_diference';
$handler->display->display_options['fields']['field_diference']['field'] = 'field_diference';
$handler->display->display_options['fields']['field_diference']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Percent */
$handler->display->display_options['fields']['field_percent']['id'] = 'field_percent';
$handler->display->display_options['fields']['field_percent']['table'] = 'field_data_field_percent';
$handler->display->display_options['fields']['field_percent']['field'] = 'field_percent';
$handler->display->display_options['fields']['field_percent']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Field: Accessories */
$handler->display->display_options['fields']['field_accessories']['id'] = 'field_accessories';
$handler->display->display_options['fields']['field_accessories']['table'] = 'field_data_field_accessories';
$handler->display->display_options['fields']['field_accessories']['field'] = 'field_accessories';
$handler->display->display_options['fields']['field_accessories']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Rate x Miles */
$handler->display->display_options['fields']['field_rate_x_miles']['id'] = 'field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['table'] = 'field_data_field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['field'] = 'field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Bill of lading (BOL) */
$handler->display->display_options['fields']['field_billoflading']['id'] = 'field_billoflading';
$handler->display->display_options['fields']['field_billoflading']['table'] = 'field_data_field_billoflading';
$handler->display->display_options['fields']['field_billoflading']['field'] = 'field_billoflading';
$handler->display->display_options['fields']['field_billoflading']['label'] = 'BOL';
$handler->display->display_options['fields']['field_billoflading']['exclude'] = true;
$handler->display->display_options['fields']['field_billoflading']['alter']['alter_text'] = true;
$handler->display->display_options['fields']['field_billoflading']['alter']['text'] = 'bol.pdf
';
$handler->display->display_options['fields']['field_billoflading']['alter']['make_link'] = true;
$handler->display->display_options['fields']['field_billoflading']['alter']['path'] = '[field_billoflading]';
$handler->display->display_options['fields']['field_billoflading']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['field_billoflading']['hide_empty'] = true;
$handler->display->display_options['fields']['field_billoflading']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_billoflading']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_billoflading']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['field_billoflading']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_billoflading']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_billoflading']['delta_reversed'] = true;
/* Field: Content: Rate Confirmation */
$handler->display->display_options['fields']['field_rate_confirmation']['id'] = 'field_rate_confirmation';
$handler->display->display_options['fields']['field_rate_confirmation']['table'] = 'field_data_field_rate_confirmation';
$handler->display->display_options['fields']['field_rate_confirmation']['field'] = 'field_rate_confirmation';
$handler->display->display_options['fields']['field_rate_confirmation']['exclude'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['alter_text'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['text'] = 'confirmation.pdf';
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['make_link'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['path'] = '[field_rate_confirmation]';
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['field_rate_confirmation']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_rate_confirmation']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_rate_confirmation']['group_column'] = 'entity_id';
$handler->display->display_options['path'] = 'loads/totals/for/pdf';
