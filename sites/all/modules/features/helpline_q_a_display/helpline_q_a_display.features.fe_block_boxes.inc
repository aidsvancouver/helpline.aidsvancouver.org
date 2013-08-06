<?php
/**
 * @file
 * helpline_q_a_display.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function helpline_q_a_display_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ask a question button';
  $fe_block_boxes->format = 'markdown';
  $fe_block_boxes->machine_name = 'ask_question';
  $fe_block_boxes->body = '<a href="http://localhost/helpline.aidsvanouver.org/public_html/?q=node/add/helpline-post/" class="button ask-question">Ask a Question</a>';

  $export['ask_question'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Disclaimer';
  $fe_block_boxes->format = 'markdown';
  $fe_block_boxes->machine_name = 'disclaimer';
  $fe_block_boxes->body = '<small>
The AIDS Vancouver Helpline is a volunteer-driven information, referral and support service related to HIV and sexual health. Volunteers are trained in active listening, HIV and sexual health information, and local resources and services. Volunteers are not doctors, nurses, or other licensed professionals. Volunteers do not give advice, and strive to provide service-users with adequate information and appropriate referrals.

Helpline volunteers uphold the agency’s confidentiality and privacy policies. Your calls, forum posts, and emails are anonymous. We welcome you to use a pseudonym or “fake name” when using Helpline services.  We will not ask for or track your personal information. To ensure that the Helpline program is providing quality services, the Helpline Coordinator regularly monitors online content (forum posts and emails) and supervises volunteers who are receiving calls.  

The Helpline Program should not be used in replacement of medical examination, diagnosis, advice counseling or follow-up care. We strongly recommend routine testing (HIV and STI tests) and discussing your healthcare directly with a physician.

We would love to hear from you! If you have feedback or questions related to the operations of the Helpline, please contact David at helpline@aidsvancouver.org or by calling 604.696.4689.
</small>';

  $export['disclaimer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Message';
  $fe_block_boxes->format = 'markdown';
  $fe_block_boxes->machine_name = 'footer_message';
  $fe_block_boxes->body = 'AIDS Vancouver plays a special role in providing quality health care to people affected by HIV/AIDS living in the Lower Mainland. It is clearly more than just a community health care organization. It is an organization whose presence and continued strength is essential to the quality for life of this community and of each individual and family who draws on its services. Our Agency is a vital community asset which everyone affected by HIV/AIDS can share, and in which we all have a stake.';

  $export['footer_message'] = $fe_block_boxes;

  return $export;
}
