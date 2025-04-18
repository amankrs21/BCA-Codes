<?php 
// Open a file for reading 
 $handle = fopen("NULL.php", "r"); var_dump($handle); 
 echo "<br>";
 // Connect to MySQL database server with default setting 
$link = mysqli_connect("localhost", "aman", ""); 
var_dump($link); 
?>
