<!-- Write a PHP Script that will create sem_2 table under BCA Database -->

<?php
error_reporting(0);
$con = mysqli_connect("localhost","root","");
$db = mysqli_select_db($con, "bca");

$query = "Create Table sem_2 (
    Name varchar(20),
    Enroll bigint(12),
    Batch varchar(1),
    Branch varchar(5))";

if ($con->query($query) === TRUE) {
    echo "Table sem_2 created successfully in the BCA Database";
}
else {
    echo "Error creating table ";
}
  
?>
