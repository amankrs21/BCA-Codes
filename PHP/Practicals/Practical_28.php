<!-- Write a PHP script to convert string to Date and DateTime.
Sample Date : '12-08-2004'
Expected Output : 2004-12-08
Note : PHP considers '/' to mean m/d/Y format and '-' to mean d-m-Y format -->

<?php

$p = strtotime("12/08/2004");
$s = getdate($p);
echo "<pre>";
print_r($s);

?>
