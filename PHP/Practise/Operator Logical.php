<!-- Program to Understand the how Logical operator works -->

<?php

$a = 11;
$b = 22;
echo "<br> Given number a = $a and b = $b<br>";
echo "<br> And Operator : ",$a and $b;
if ($a == 11 and $b == 22)      // it returns true if both the condition will be true
{
    echo "<br> Hii..";
}
if ($a == 11 or $b == 22)       // it returns true if one of the condition will be true
{
    echo "<br> Hello";
}
if ($a == 11 xor $b == 20)      // it returns true if only one condition will be true
{
    echo "<br> Bravo!";
}
if ( ! ($a == 10))        // it returns true if condition will be false 
{
    echo "<br> Hurreh!";
}
if ($a == 11 && $b == 22) 
{
    echo "<br> Same as and operator";
}
if ($a == 11 || $b == 22)
{
    echo "<br> Same as or operator";
}
?>