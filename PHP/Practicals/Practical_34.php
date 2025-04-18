<!-- Write a PHP that will create an BCA database -->

<?php
error_reporting(0);
$con = mysqli_connect("localhost","root","");
if ($con == TRUE) {
    echo "<br><h2> Succesfully Connected to SQL Server";
}
else {
    echo "<br><h2> Unable to Connect with SQL Server";
}
$sql = "CREATE DATABASE BCA";
if ($con->query($sql) === TRUE) {
  echo "<br><br><h2> Database created successfully";
} 
else {
  echo "<br><br><h2> Error creating database ";
}
?>
