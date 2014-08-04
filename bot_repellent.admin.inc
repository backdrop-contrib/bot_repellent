<?php

/**
 * @file
 * Administration forms for the Bot repellent module.
 */

function bot_repellent_admin_settings() {
  $form = array();
  $form['bot_repellent_tags'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Tags'),
    '#options' => drupal_map_assoc(
      array(
        'all',
        'noindex',
        'nofollow',
        'none',
        'noarchive',
        'nosnippet',
        'noodp',
        'notranslate',
        'noimageindex'
      )
    ),
    '#default_value' => variable_get('bot_repellent_tags', array()),
    '#description' => t('Selected tags will be added to a !link. Some items conflict with each other like all and none.', array('!link' => l('X-Robots-Tag HTTP header', 'https://developers.google.com/webmasters/control-crawl-index/docs/robots_meta_tag?csw=1'))),
  );
  return system_settings_form($form);
}
