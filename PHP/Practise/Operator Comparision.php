<!-- Program to undestand all the concept of comparision operator -->

<?php
$a = 10;
$b = 20;
echo "<br> Given -:- a = $a and b = $b<br>";
if ($a == $b) {
    echo "<br>a and b are equal";
}
if ($a == $b) {
    echo "<br>a and b are identical";
}
if ($a != $b) {
    echo "<br>a and b are not equal";
}
if ($a !== $b) {
    echo "<br>a and b are not identical";
}
if ($a > $b) {
    echo "<br>a is greater than b";
}
if ($a < $b) {
    echo "<br>a is less than b";
}
if ($a >= $b) {
    echo "<br>a is greater than equals to b";
}
if ($a <= $b) {
    echo "<br>a is less than equals to b";
}
if ($a <=> $b) {
    echo "<br>spaceship";
}
?>