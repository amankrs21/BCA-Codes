<!-- Write PHP Script that will assign two integer values and swap their values without third 
variable. -->

<?php
$a = 4;
$b = 21;
echo "<h1><center><b> Origianl Values of <br> A = $a <br> B = $b <br><br>";
//logic for swapping two numbers
$a = $a + $b;
$b = $a - $b;
$a = $a - $b;
echo " After Swapping the Values of <br> A = $a <br> B = $b <br>";
?>