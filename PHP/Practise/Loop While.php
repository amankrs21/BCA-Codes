<!-- Program to understand how while loop works in PHP -->

<?php
$num  = 4;
$a = 1;
echo "<br><h1><center> Table of Number = $num<br>";
while ($a <= 10) {
    echo "$num * $a = ",$num*$a;
    echo "<br>";
    $a++;
}
?>