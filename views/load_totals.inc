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
$handler->display->display_options['title'] = 'Loads totals';
$handler->display->display_options['css_class'] = 'load-totals';
$handler->display->display_options['use_more_always'] = false;
$handler->display->display_options['group_by'] = true;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access loads totals report';
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
	'title_1' => 'title_1',
	'title_2' => 'title_2',
	'field_loadpoint' => 'field_loadpoint',
	'field_address' => 'field_address',
	'field_full_name_1' => 'field_full_name_1',
	'field_full_name' => 'field_full_name',
	'field_date_time' => 'field_date_time',
	'field_empty_miles' => 'field_empty_miles',
	'field_total_miles' => 'field_total_miles',
	'field_gross_payment' => 'field_gross_payment',
	'field_sold_payment' => 'field_sold_payment',
	'field_accessories' => 'field_accessories',
	'field_bonus' => 'field_bonus',
	'field_rate_x_miles' => 'field_rate_x_miles',
	'field_billoflading' => 'field_billoflading',
	'field_rate_confirmation' => 'field_rate_confirmation',
	'title_3' => 'title_3',
	'title_4' => 'title_4',
	'field_rate' => 'field_rate',
	'field_owned' => 'field_owned',
	'php' => 'php',
	'php_2' => 'php_2',
	'php_1' => 'php_1',
	'php_3' => 'php_3',
	'php_4' => 'php_4',
];
$handler->display->display_options['style_options']['default'] = '-1';
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
	'title_1' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'title_2' => [
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
	'field_full_name_1' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_full_name' => [
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
		'summarize' => 'total',
	],
	'field_sold_payment' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'field_accessories' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_bonus' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
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
	'title_3' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'title_4' => [
		'sortable' => 1,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_rate' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'field_owned' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'none',
	],
	'php' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'php_2' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'php_1' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'php_3' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
	'php_4' => [
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
		'summarize' => 'total',
	],
];
$handler->display->display_options['style_options']['summary'] = 'Summary';
/* Header: Global: PHP */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['php_output'] = '<form action="<?php echo str_replace(\'loads/totals\', \'loads/pdf\', $_SERVER[\'REQUEST_URI\']); ?>" method="POST">
<p align="right">
<button id ="download-button" class="btn btn-danger" type="submit">Download as PDF</button><br/>
<input type="checkbox" name="exclude-columns"> Exclude unnecessary fields
</p>
</form>
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
$handler->display->display_options['relationships']['field_dispatcher_target_id']['label'] = 'Dispatcher relationship';
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
$handler->display->display_options['relationships']['field_customer_target_id']['label'] = 'Customer relationship';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_driver_target_id']['id'] = 'field_driver_target_id';
$handler->display->display_options['relationships']['field_driver_target_id']['table'] = 'field_data_field_driver';
$handler->display->display_options['relationships']['field_driver_target_id']['field'] = 'field_driver_target_id';
$handler->display->display_options['relationships']['field_driver_target_id']['label'] = 'Driver relationship';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_single_carrier_target_id']['id'] = 'field_single_carrier_target_id';
$handler->display->display_options['relationships']['field_single_carrier_target_id']['table'] = 'field_data_field_single_carrier';
$handler->display->display_options['relationships']['field_single_carrier_target_id']['field'] = 'field_single_carrier_target_id';
$handler->display->display_options['relationships']['field_single_carrier_target_id']['label'] = 'Carrier relationship';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_truck_target_id']['id'] = 'field_truck_target_id';
$handler->display->display_options['relationships']['field_truck_target_id']['table'] = 'field_data_field_truck';
$handler->display->display_options['relationships']['field_truck_target_id']['field'] = 'field_truck_target_id';
$handler->display->display_options['relationships']['field_truck_target_id']['label'] = 'Truck relationship';
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
$handler->display->display_options['fields']['title']['exclude'] = true;
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_customer_target_id';
$handler->display->display_options['fields']['title_1']['label'] = 'Customer';
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '15';
$handler->display->display_options['fields']['title_1']['alter']['trim'] = true;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_2']['id'] = 'title_2';
$handler->display->display_options['fields']['title_2']['table'] = 'node';
$handler->display->display_options['fields']['title_2']['field'] = 'title';
$handler->display->display_options['fields']['title_2']['relationship'] = 'field_driver_target_id';
$handler->display->display_options['fields']['title_2']['label'] = 'Driver';
$handler->display->display_options['fields']['title_2']['alter']['trim_whitespace'] = true;
$handler->display->display_options['fields']['title_2']['alter']['max_length'] = '18';
$handler->display->display_options['fields']['title_2']['alter']['strip_tags'] = true;
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
/* Field: User: Full name */
$handler->display->display_options['fields']['field_full_name_1']['id'] = 'field_full_name_1';
$handler->display->display_options['fields']['field_full_name_1']['table'] = 'field_data_field_full_name';
$handler->display->display_options['fields']['field_full_name_1']['field'] = 'field_full_name';
$handler->display->display_options['fields']['field_full_name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_full_name_1']['label'] = 'Author';
/* Field: User: Full name */
$handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
$handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
$handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
$handler->display->display_options['fields']['field_full_name']['relationship'] = 'field_dispatcher_target_id';
$handler->display->display_options['fields']['field_full_name']['label'] = 'Dispatcher';
$handler->display->display_options['fields']['field_full_name']['exclude'] = true;
$handler->display->display_options['fields']['field_full_name']['alter']['trim_whitespace'] = true;
$handler->display->display_options['fields']['field_full_name']['alter']['strip_tags'] = true;
$handler->display->display_options['fields']['field_full_name']['group_column'] = 'entity_id';
/* Field: MAX(Field collection item: Scheduled) */
$handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
$handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
$handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
$handler->display->display_options['fields']['field_date_time']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['fields']['field_date_time']['group_type'] = 'max';
$handler->display->display_options['fields']['field_date_time']['label'] = 'Delivered';
$handler->display->display_options['fields']['field_date_time']['alter']['max_length'] = '10';
$handler->display->display_options['fields']['field_date_time']['alter']['ellipsis'] = false;
$handler->display->display_options['fields']['field_date_time']['settings'] = [
	'format_type' => 'views',
	'fromto' => '',
	'multiple_number' => '',
	'multiple_from' => '',
	'multiple_to' => '',
	'show_remaining_days' => 0,
];
/* Field: Content: Empty Miles */
$handler->display->display_options['fields']['field_empty_miles']['id'] = 'field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['table'] = 'field_data_field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['field'] = 'field_empty_miles';
$handler->display->display_options['fields']['field_empty_miles']['exclude'] = true;
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
$handler->display->display_options['fields']['field_total_miles']['label'] = 'Miles';
$handler->display->display_options['fields']['field_total_miles']['exclude'] = true;
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
$handler->display->display_options['fields']['field_gross_payment']['label'] = 'Gross';
$handler->display->display_options['fields']['field_gross_payment']['settings'] = [
	'thousand_separator' => ',',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Sold Payment */
$handler->display->display_options['fields']['field_sold_payment']['id'] = 'field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['table'] = 'field_data_field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['field'] = 'field_sold_payment';
$handler->display->display_options['fields']['field_sold_payment']['label'] = 'Sold';
$handler->display->display_options['fields']['field_sold_payment']['settings'] = [
	'thousand_separator' => ',',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Field: Accessories */
$handler->display->display_options['fields']['field_accessories']['id'] = 'field_accessories';
$handler->display->display_options['fields']['field_accessories']['table'] = 'field_data_field_accessories';
$handler->display->display_options['fields']['field_accessories']['field'] = 'field_accessories';
$handler->display->display_options['fields']['field_accessories']['exclude'] = true;
$handler->display->display_options['fields']['field_accessories']['empty'] = '0';
$handler->display->display_options['fields']['field_accessories']['settings'] = [
	'thousand_separator' => '',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Bonus */
$handler->display->display_options['fields']['field_bonus']['id'] = 'field_bonus';
$handler->display->display_options['fields']['field_bonus']['table'] = 'field_data_field_bonus';
$handler->display->display_options['fields']['field_bonus']['field'] = 'field_bonus';
$handler->display->display_options['fields']['field_bonus']['exclude'] = true;
/* Field: Content: Rate x Miles */
$handler->display->display_options['fields']['field_rate_x_miles']['id'] = 'field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['table'] = 'field_data_field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['field'] = 'field_rate_x_miles';
$handler->display->display_options['fields']['field_rate_x_miles']['settings'] = [
	'thousand_separator' => ',',
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
$handler->display->display_options['fields']['field_rate_confirmation']['label'] = 'CONFIRMATION';
$handler->display->display_options['fields']['field_rate_confirmation']['exclude'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['alter_text'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['text'] = 'confirmation.pdf';
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['make_link'] = true;
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['path'] = '[field_rate_confirmation]';
$handler->display->display_options['fields']['field_rate_confirmation']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['field_rate_confirmation']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_rate_confirmation']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_rate_confirmation']['group_column'] = 'entity_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_3']['id'] = 'title_3';
$handler->display->display_options['fields']['title_3']['table'] = 'node';
$handler->display->display_options['fields']['title_3']['field'] = 'title';
$handler->display->display_options['fields']['title_3']['relationship'] = 'field_single_carrier_target_id';
$handler->display->display_options['fields']['title_3']['label'] = 'Carrier';
$handler->display->display_options['fields']['title_3']['exclude'] = true;
$handler->display->display_options['fields']['title_3']['alter']['max_length'] = '15';
$handler->display->display_options['fields']['title_3']['alter']['trim'] = true;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_4']['id'] = 'title_4';
$handler->display->display_options['fields']['title_4']['table'] = 'node';
$handler->display->display_options['fields']['title_4']['field'] = 'title';
$handler->display->display_options['fields']['title_4']['relationship'] = 'field_truck_target_id';
$handler->display->display_options['fields']['title_4']['label'] = 'Truck';
$handler->display->display_options['fields']['title_4']['exclude'] = true;
/* Field: Content: Rate */
$handler->display->display_options['fields']['field_rate']['id'] = 'field_rate';
$handler->display->display_options['fields']['field_rate']['table'] = 'field_data_field_rate';
$handler->display->display_options['fields']['field_rate']['field'] = 'field_rate';
$handler->display->display_options['fields']['field_rate']['relationship'] = 'field_single_carrier_target_id';
$handler->display->display_options['fields']['field_rate']['label'] = 'Carrier Rate';
$handler->display->display_options['fields']['field_rate']['exclude'] = true;
$handler->display->display_options['fields']['field_rate']['settings'] = [
	'thousand_separator' => ',',
	'decimal_separator' => '.',
	'scale' => '2',
	'prefix_suffix' => 1,
];
/* Field: Content: Owned by 4Global */
$handler->display->display_options['fields']['field_owned']['id'] = 'field_owned';
$handler->display->display_options['fields']['field_owned']['table'] = 'field_data_field_owned';
$handler->display->display_options['fields']['field_owned']['field'] = 'field_owned';
$handler->display->display_options['fields']['field_owned']['relationship'] = 'field_single_carrier_target_id';
$handler->display->display_options['fields']['field_owned']['exclude'] = true;
/* Field: dispatch-service-earned */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'dispatch-service-earned';
$handler->display->display_options['fields']['php']['label'] = 'Earned';
$handler->display->display_options['fields']['php']['element_label_class'] = 'border-left-white';
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_value'] = 'return isset($data->field_field_sold_payment) ? 
(
  floatval(str_replace(",","",$data->field_field_sold_payment[0][\'raw\'][\'value\'])) 
      * (empty($data->field_field_rate[0][\'raw\'][\'value\']) ?  0.05 : floatval($data->field_field_rate[0][\'raw\'][\'value\']))
): 0;';
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
if (isset($data->field_field_sold_payment))
  echo number_format(floatval(str_replace(",","",$data->field_field_sold_payment[0][\'raw\'][\'value\'])) 
   * (empty($data->field_field_rate[0][\'raw\'][\'value\']) ?  0.05 : floatval($data->field_field_rate[0][\'raw\'][\'value\'])), 2); 
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '1';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: dispatch-service-dispatcher */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['ui_name'] = 'dispatch-service-dispatcher';
$handler->display->display_options['fields']['php_2']['label'] = 'Dispatcher';
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_value'] = 'return isset($data->field_field_sold_payment) ?
(
0.25 *
 ( floatval(str_replace(",","",$data->field_field_sold_payment[0][\'raw\'][\'value\'])) 
  * (empty($data->field_field_rate[0][\'raw\'][\'value\']) ?  0.05 : 
     floatval($data->field_field_rate[0][\'raw\'][\'value\'])))
) : 0;';
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if (isset($data->field_field_sold_payment))
 echo number_format(0.25 *
 ( floatval(str_replace(",","",$data->field_field_sold_payment[0][\'raw\'][\'value\'])) 
  * (empty($data->field_field_rate[0][\'raw\'][\'value\']) ?  0.05 : floatval($data->field_field_rate[0][\'raw\'][\'value\']))), 2); ?>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '1';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: bonus-earned */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'bonus-earned';
$handler->display->display_options['fields']['php_1']['label'] = 'Earned';
$handler->display->display_options['fields']['php_1']['element_label_class'] = 'border-left-white';
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_value'] = 'return isset($data->field_field_gross_payment) ? (floatval($data->field_field_gross_payment[0][\'raw\'][\'value\']) - floatval($data->field_field_sold_payment[0][\'raw\'][\'value\'])) : 0;';
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
if (isset($data->field_field_sold_payment))
echo number_format($data->field_field_gross_payment[0][\'raw\'][\'value\'] - $data->field_field_sold_payment[0][\'raw\'][\'value\'], 2); 
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '1';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: bonus-dispatcher */
$handler->display->display_options['fields']['php_3']['id'] = 'php_3';
$handler->display->display_options['fields']['php_3']['table'] = 'views';
$handler->display->display_options['fields']['php_3']['field'] = 'php';
$handler->display->display_options['fields']['php_3']['ui_name'] = 'bonus-dispatcher';
$handler->display->display_options['fields']['php_3']['label'] = 'Dispatcher';
$handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_3']['php_value'] = 'return isset($data->field_field_sold_payment) ?
(
 (floatval($data->field_field_gross_payment[0][\'raw\'][\'value\']) - floatval($data->field_field_sold_payment[0][\'raw\'][\'value\']))  *  ($data->field_field_owned[0][\'raw\'][\'value\'] ? 0.35 : 0.25)
) : 0;';
$handler->display->display_options['fields']['php_3']['php_output'] = '<?php
if (isset($data->field_field_sold_payment))
echo number_format(
   (floatval($data->field_field_gross_payment[0][\'raw\'][\'value\']) - floatval($data->field_field_sold_payment[0][\'raw\'][\'value\'])) 
    * ($data->field_field_owned[0][\'raw\'][\'value\']? 0.35 : 0.25), 
2);
?>';
$handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '1';
$handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
/* Field: bonus-carrier */
$handler->display->display_options['fields']['php_4']['id'] = 'php_4';
$handler->display->display_options['fields']['php_4']['table'] = 'views';
$handler->display->display_options['fields']['php_4']['field'] = 'php';
$handler->display->display_options['fields']['php_4']['ui_name'] = 'bonus-carrier';
$handler->display->display_options['fields']['php_4']['label'] = 'Carrier';
$handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_4']['php_value'] = 'if (isset($data->field_field_owned))
{
	$owned = $data->field_field_owned[0][\'raw\'][\'value\'];
	
	$bonus_earned = floatval($data->field_field_gross_payment[0][\'raw\'][\'value\']) 
	                - floatval($data->field_field_sold_payment[0][\'raw\'][\'value\']);
	
	$bonus_dispatcher = $bonus_earned *  ($owned ? 0.35 : 0.25);
				
	return $owned ? 0 : 0.5 * abs($bonus_earned - $bonus_dispatcher);
}   ';
$handler->display->display_options['fields']['php_4']['php_output'] = '<?php

if (isset($data->field_field_owned))
{
	$owned = $data->field_field_owned[0][\'raw\'][\'value\'];
	
	$bonus_earned = floatval($data->field_field_gross_payment[0][\'raw\'][\'value\']) 
	                - floatval($data->field_field_sold_payment[0][\'raw\'][\'value\']);
	
	$bonus_dispatcher = $bonus_earned *  ($owned ? 0.35 : 0.25);
				
	echo number_format($owned ? 0 : 0.5 * abs($bonus_earned - $bonus_dispatcher), 2);
}     

?>';
$handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '1';
$handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
$handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
$handler->display->display_options['filters']['field_date_time_value']['exposed'] = true;
$handler->display->display_options['filters']['field_date_time_value']['expose']['operator_id'] = 'field_date_time_value_op';
$handler->display->display_options['filters']['field_date_time_value']['expose']['label'] = 'From date';
$handler->display->display_options['filters']['field_date_time_value']['expose']['operator'] = 'field_date_time_value_op';
$handler->display->display_options['filters']['field_date_time_value']['expose']['identifier'] = 'delivery_date_from';
$handler->display->display_options['filters']['field_date_time_value']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_date_time_value']['form_type'] = 'date_popup';
$handler->display->display_options['filters']['field_date_time_value']['year_range'] = '-3:+0';
/* Filter criterion: Field collection item: Scheduled (field_date_time) */
$handler->display->display_options['filters']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
$handler->display->display_options['filters']['field_date_time_value_1']['table'] = 'field_data_field_date_time';
$handler->display->display_options['filters']['field_date_time_value_1']['field'] = 'field_date_time_value';
$handler->display->display_options['filters']['field_date_time_value_1']['relationship'] = 'field_loadpoint_value';
$handler->display->display_options['filters']['field_date_time_value_1']['operator'] = '<=';
$handler->display->display_options['filters']['field_date_time_value_1']['group'] = 1;
$handler->display->display_options['filters']['field_date_time_value_1']['exposed'] = true;
$handler->display->display_options['filters']['field_date_time_value_1']['expose']['operator_id'] = 'field_date_time_value_1_op';
$handler->display->display_options['filters']['field_date_time_value_1']['expose']['label'] = 'To date';
$handler->display->display_options['filters']['field_date_time_value_1']['expose']['operator'] = 'field_date_time_value_1_op';
$handler->display->display_options['filters']['field_date_time_value_1']['expose']['identifier'] = 'delivery_date_to';
$handler->display->display_options['filters']['field_date_time_value_1']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_date_time_value_1']['form_type'] = 'date_popup';
$handler->display->display_options['filters']['field_date_time_value_1']['year_range'] = '-3:+0';
/* Filter criterion: User: Full name (field_full_name) */
$handler->display->display_options['filters']['field_full_name_value_1']['id'] = 'field_full_name_value_1';
$handler->display->display_options['filters']['field_full_name_value_1']['table'] = 'field_data_field_full_name';
$handler->display->display_options['filters']['field_full_name_value_1']['field'] = 'field_full_name_value';
$handler->display->display_options['filters']['field_full_name_value_1']['relationship'] = 'uid';
$handler->display->display_options['filters']['field_full_name_value_1']['operator'] = 'allwords';
$handler->display->display_options['filters']['field_full_name_value_1']['group'] = 1;
$handler->display->display_options['filters']['field_full_name_value_1']['exposed'] = true;
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['operator_id'] = 'field_full_name_value_1_op';
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['label'] = 'Dispatcher';
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['operator'] = 'field_full_name_value_1_op';
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['identifier'] = 'author';
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['autocomplete_filter'] = 1;
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['autocomplete_field'] = 'field_full_name_1';
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_full_name_value_1']['expose']['autocomplete_dependent'] = 0;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title_2']['id'] = 'title_2';
$handler->display->display_options['filters']['title_2']['table'] = 'node';
$handler->display->display_options['filters']['title_2']['field'] = 'title';
$handler->display->display_options['filters']['title_2']['relationship'] = 'field_single_carrier_target_id';
$handler->display->display_options['filters']['title_2']['operator'] = 'allwords';
$handler->display->display_options['filters']['title_2']['group'] = 1;
$handler->display->display_options['filters']['title_2']['exposed'] = true;
$handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
$handler->display->display_options['filters']['title_2']['expose']['label'] = 'Carrier';
$handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
$handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'carrier';
$handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = [
	2 => '2',
	1 => 0,
	3 => 0,
	12 => 0,
];
$handler->display->display_options['filters']['title_2']['expose']['autocomplete_filter'] = 1;
$handler->display->display_options['filters']['title_2']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['title_2']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['title_2']['expose']['autocomplete_field'] = 'title_3';
$handler->display->display_options['filters']['title_2']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['title_2']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['title_2']['expose']['autocomplete_dependent'] = 0;
/* Filter criterion: Content: Status (field_csctatus) */
$handler->display->display_options['filters']['field_csctatus_value']['id'] = 'field_csctatus_value';
$handler->display->display_options['filters']['field_csctatus_value']['table'] = 'field_data_field_csctatus';
$handler->display->display_options['filters']['field_csctatus_value']['field'] = 'field_csctatus_value';
$handler->display->display_options['filters']['field_csctatus_value']['value'] = [
	'Negotiating' => 'Negotiating',
	'Transit' => 'Transit',
	'Completed' => 'Completed',
];
$handler->display->display_options['filters']['field_csctatus_value']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['footer'] = false;
$handler->display->display_options['path'] = 'loads/totals';
