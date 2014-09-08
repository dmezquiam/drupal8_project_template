<?php

// Get all users
$result = db_select('users', 'u')
  ->fields('u', array('uid', 'picture'))
  ->execute()
  ->fetchAll();

$num_updated = 0;
// Open or create and initialize the log file
$fp = fopen(drupal_get_path('module', 'ijnet_migrate') . '/scripts/update-user-pictures-uri-log.txt', 'a');
fwrite($fp, PHP_EOL);
fwrite($fp, date('d/m/Y') . ' - Executing Script' . PHP_EOL);
fwrite($fp, 'Old user picture uri - New user picture uri' . PHP_EOL);

// For each user
foreach ($result as $row) {
  // Get the associated user picture (managed file)
  $files = db_select('file_managed', 'f')
    ->fields('f', array('uri'))
    ->condition('fid', $row->picture)
    ->execute()
    ->fetchAll();

  // If have one
  if (!empty($files)) {
    $file = $files[0];
    // If the file uri start with the string "./sites/default"
    if (strpos($file->uri, './sites/default') === 0) {
      $new_uri = str_replace('./sites/default/files/', 'public://', $file->uri); // Get the new file uri
      fwrite($fp, $file->uri . ' - ' . $new_uri . PHP_EOL); // Log the change

      // Update the file_managed table
      $num_updated += db_update('file_managed')
        ->fields(array('uri' => $new_uri))
        ->condition('fid', $row->picture)
        ->execute();
    }
  }
}

// Log the final result
fwrite($fp, 'Number of updates: ' . $num_updated . PHP_EOL);
fclose($fp);