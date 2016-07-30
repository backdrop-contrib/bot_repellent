<?php

/**
 * @file
 * Administration settings for Bot repellent.
 */

/**
 * Configuration form callback.
 */
function bot_repellent_admin_settings() {
  $form['bot_repellent'] = array(
    '#type' => 'fieldset',
    '#title' => t('X-Robots-Tag HTTP header'),
    '#description' => t('Selected tags will be added to a !link. Some items conflict with each other like all and none.', array('!link' => l(t('X-Robots-Tag HTTP header'), 'https://developers.google.com/webmasters/control-crawl-index/docs/robots_meta_tag?csw=1'))),
  );
  $form['bot_repellent']['bot_repellent_tags'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Tags'),
    '#options' => backdrop_map_assoc(
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
    '#default_value' => config_get('bot_repellent.settings', 'tags'),
  );

  $form['#submit'][] = 'bot_repellent_admin_settings_submit';

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Submit handler for inserted form item.
 */
function bot_repellent_admin_settings_submit($form, &$form_state) {
  config('bot_repellent.settings')
    ->set('tags', $form_state['values']['bot_repellent_tags'])
    ->save();
}

