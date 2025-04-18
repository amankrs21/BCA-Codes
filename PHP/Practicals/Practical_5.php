<!-- Write a PHP Script that will assign two integer values and swap their values -->

<?php
$a = 2001;
$b = 2002;
echo "<h1><center><b><i> Origianl Values of <br> A = $a <br> B = $b <br><br>";
//logic for swapping two numbers by using third variable
$temp = $a;
$a = $b;
$b = $temp;
echo " After Swapping the Values of <br> A = $a <br> B = $b <br>";
?>