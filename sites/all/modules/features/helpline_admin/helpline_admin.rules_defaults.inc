<?php
/**
 * @file
 * helpline_admin.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function helpline_admin_default_rules_configuration() {
  $items = array();
  $items['rules_helpline_post_workflow'] = entity_import('rules_config', '{ "rules_helpline_post_workflow" : {
      "LABEL" : "Helpline Question Posted",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "helpline" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "helpline_post" : "helpline_post" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "joelb@aidsvancouver.org",
            "subject" : "New Helpline Question",
            "message" : "[node:edit-url]",
            "language" : [ "" ]
          }
        },
        { "redirect" : { "url" : "\\u003Cfront\\u003E" } }
      ]
    }
  }');
  return $items;
}
