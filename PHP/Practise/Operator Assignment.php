<!-- Program that perform all the assignment operator -->

<?php

$assign = 21;   // it will assign 24 in the variable assign as a local variable
echo "<br> Assigned Number is :- $assign";
$add = $assign += 4;
$sub = $assign -= 4;
$mul = $assign *= 4;
$div = $assign /= 4;
$mod = $assign %= 4;

echo "<br> Add then assign number is :- $add";
echo "<br> Subtract then assign number is :- $sub";
echo "<br> Multiply then assign number is :- $mul";
echo "<br> Divide then assign number is :- $div";
echo "<br> Modulo then assign number is :- $mod";

?>