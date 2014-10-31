<?php
/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for Bootstrap based themes when admin theme is not.
 *
 * @see theme/settings.inc
 */


/**
 * Implements hook_form_FORM_ID_alter().
 */
function drupinas_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  if (isset($form_id)) {
    return;
  }

  // For Social Media
  $form['social_media'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social Media'),
    '#group' => 'bootstrap',
  );

  //For Facebook
  $form['social_media']['facebook'] = array(
    '#type' => 'fieldset',
    '#title' => t('Facebook'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['social_media']['facebook']['facebook_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook Link'),
    '#default_value' => theme_get_setting('facebook_link'),
  );

  $form['social_media']['facebook']['facebook_fa_class'] = array(
    '#type' => 'textfield',
    '#title' => t('Font Awesome Class'),
    '#default_value' => theme_get_setting('facebook_fa_class'),
  );


  //For Twitter
  $form['social_media']['twitter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Twitter'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['social_media']['twitter']['twitter_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter Link'),
    '#default_value' => theme_get_setting('twitter_link'),
  );

  $form['social_media']['twitter']['twitter_fa_class'] = array(
    '#type' => 'textfield',
    '#title' => t('Font Awesome Class'),
    '#default_value' => theme_get_setting('twitter_fa_class'),
  );


  //For LinkedIn
  $form['social_media']['linkedin'] = array(
    '#type' => 'fieldset',
    '#title' => t('LinkedIn'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['social_media']['linkedin']['linkedin_link'] = array(
    '#type' => 'textfield',
    '#title' => t('LinkedIn Link'),
    '#default_value' => theme_get_setting('linkedin_link'),
  );

  $form['social_media']['linkedin']['linkedin_fa_class'] = array(
    '#type' => 'textfield',
    '#title' => t('Font Awesome Class'),
    '#default_value' => theme_get_setting('linkedin_fa_class'),
  );


  //For Instagram
  $form['social_media']['instagram'] = array(
    '#type' => 'fieldset',
    '#title' => t('Instagram'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['social_media']['instagram']['instagram_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Instagram Link'),
    '#default_value' => theme_get_setting('instagram_link'),
  );

  $form['social_media']['instagram']['instagram_fa_class'] = array(
    '#type' => 'textfield',
    '#title' => t('Font Awesome Class'),
    '#default_value' => theme_get_setting('instagram_fa_class'),
  );


  //Others
  $form['others'] = array(
    '#type' => 'fieldset',
    '#title' => t('Others'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'bootstrap',
  );

  $form['others']['footer_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Footer Text'),
    '#default_value' => theme_get_setting('footer_text'),
    '#description' => t('Text to be shown at the bootom of the page'),
  );


}
