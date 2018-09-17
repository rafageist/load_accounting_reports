<?php

/**
 * Class LoadTotalsRowCalc
 *
 * @author @rafageist
 * @version 1.0
 */
class LoadTotalsRowCalc{

	public $dispatch_service_earned;
	public $dispatch_service_dispatcher;
	public $bonus_earned;
	public $owned_percent;
	public $owned;
	public $bonus_dispatcher;
	public $bonus_carrier;

	static $nid = null;
	static $instance = null;

	/**
	 * LoadTotalsRowCalc constructor.
	 *
	 * @param $data
	 */
	function __construct($data){
		$this->dispatch_service_earned = isset($data->field_field_sold_payment) ? $this->floatValue($data->field_field_sold_payment) * $this->floatValue($data->field_field_rate, 5) / 100 : 0;
		$this->dispatch_service_dispatcher = isset($data->field_field_sold_payment) ? 0.25 * $this->dispatch_service_earned : 0;
		$this->bonus_earned = isset($data->field_field_gross_payment) ? $this->floatValue($data->field_field_gross_payment) - $this->floatValue($data->field_field_sold_payment) : 0;
		if (isset($data->field_field_owned)) $this->owned = $this->rawValue($data->field_field_owned);
		$this->owned_percent = $this->owned ? 0.35 : 0.25;
		$this->bonus_dispatcher = isset($data->field_field_sold_payment) ? $this->bonus_earned * $this->owned_percent : 0;
		$this->bonus_carrier = $this->owned ? 0 : abs($this->bonus_earned - $this->bonus_dispatcher) / 2;
	}

	static function getInstance($data)
	{
		if ($data->nid != self::$nid)
			self::$instance = new self($data);

		return self::$instance;
	}

	/**
	 * Raw value
	 *
	 * @param $field
	 *
	 * @return null
	 */
	function rawValue($field){
		if(isset($field[0]['raw']['value'])){
			return $field[0]['raw']['value'];
		}

		return null;
	}

	/**
	 * Float value
	 *
	 * @param $field
	 * @param int $default
	 *
	 * @return float|int
	 */
	function floatValue($field, $default = 0){
		$v = $this->rawValue($field);
		if(empty($v)){
			return $default;
		}

		return floatval(str_replace(",", "", $v));
	}
}