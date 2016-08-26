<?php

/**
* Access plugin that provides property based access control.
*/
class fe_opportunity_access_plugin extends views_plugin_access {

	function summary_title() {
	  return t('Language');
	}

	/**
	* Determine if the current language is Spanish.
	*/
	function access($account) {
	  return fe_opportunity_access($account);
	}

	function get_access_callback() {
	  return array('fe_opportunity_access', array());
	}
}
