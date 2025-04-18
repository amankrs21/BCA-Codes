<!-- Program to understand how do while loop works -->

<?php
$num  = 21;
echo "<br><h1><center> Table of Number = $num<br>";
$a = 1;
do{
    echo "$num * $a = ",$num*$a;
    echo "<br>";
    $a++;
}while ($a <= 10);
?>