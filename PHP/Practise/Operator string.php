<!-- Program to understang how string operator works -->

<?php

$a = 11;
$b = 22;
echo "<br><h1> Given number a = $a and b = $b<br>";

// Concatenation joins the two operator
echo "<br> Concatenation(.) of a and b (a.b) is : ",$a.$b;

// Concatenation and Assignment(.=)
$a .= $b;       // a will assign the concatenation value
echo "<br> (.=) of a and b (a .= b) is ",$a;
?>