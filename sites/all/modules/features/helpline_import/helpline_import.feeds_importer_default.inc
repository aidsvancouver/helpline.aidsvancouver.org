<?php
/**
 * @file
 * helpline_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function helpline_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'helpline_comments';
  $feeds_importer->config = array(
    'name' => 'Helpline Comments',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommentProcessor',
      'config' => array(
        'input_format' => 'plain_text',
        'update_existing' => '0',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Parent CID',
            'target' => 'pid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Post Date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Title',
            'target' => 'subject',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Comment',
            'target' => 'comment',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Approved',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['helpline_comments'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'helpline_post';
  $feeds_importer->config = array(
    'name' => 'Helpline Post',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'helpline_post',
        'expire' => '-1',
        'author' => '5',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Path',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Question',
            'target' => 'field_question',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Answer',
            'target' => 'field_answer',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Terms',
            'target' => 'field_question_tags',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Author',
            'target' => 'uid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['helpline_post'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'helpline_users';
  $feeds_importer->config = array(
    'name' => 'Helpline Users',
    'description' => 'Volunteer and staff account associated with the Helpline',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(),
        'status' => 1,
        'defuse_mail' => FALSE,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'uid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['helpline_users'] = $feeds_importer;

  return $export;
}
