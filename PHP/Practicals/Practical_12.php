<!-- Write a PHP Script that will check number is divisible by 13 and 7. -->

<?php
$num = 91;

echo "<br> Given Number is --> $num<br><br>";

if ($num % 13 == 0 and $num % 7 == 0)   //we can use both (&&)operator and "and"operator to check to values at a time
{
    echo "<b> $num is Divisible by Both 13 and 7</b>";
}
elseif ($num % 13 == 0) {
    echo "<b> $num is Divisible by 13 But Not Divisible by 7</b>";
}
elseif ($num % 7 == 0) {
    echo "<b> $num is Divisible by 7 But Not Divisible by 13</b>";
}
else
{
    echo "<b> $num is NOT Divisible by Both 13 and 7</b>";
}

?>