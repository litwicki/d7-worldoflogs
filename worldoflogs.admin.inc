<?php

/**
 *  Copyright (c) 2012 Litwicki Media
 *  Written for Sacrifice Guild - www.sacrificeguild.org
 *  @author: Thezdin, thezdin@sacrificeguild.org
 *  @license: http://www.gnu.org/copyleft/gpl.html
 *
 */

/**
 *	Implement hook_form
 */
function worldoflogs_config_guilds_form($form, &$form_state) {

  $form['worldoflogs_gids'] = array(
  	'#type' => 'textfield',
  	'#title' => t('Guilds'),
  	'#description' => t('Comma separated list of Guild IDs from worldoflogs.com'),
  	'#multiple' => TRUE,
  );

  return system_settings_form($form);

}