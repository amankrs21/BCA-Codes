<!--Write a PHP Script that will be used for mail send.-->

<?php
error_reporting(0);
$to = "amansingh844123@gmail.com";
$from = "t3020bca208@paruluniversity.ac.in";
$subject = "Test Mail";
$msg="This mail regarding for testing mail()";
mail($to,$from,$subject,$msg);
echo "Mail sent successfully";
?>
