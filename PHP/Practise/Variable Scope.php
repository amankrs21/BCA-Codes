<?php

$a = 21;        // This is Local Variable
echo "<br><h1> Local Variable Outside of UDF :- ".$a;

function variable()
{
    global $a;      // for use of variable in UDF which is declared outside of the funtion, first we have to make it global
    echo "<br> Global variable in the UDF is :- ".$a;
}
variable();

function static_var()
{
    $b = 4;             // it is a local variable inside UDF
    static $c = 4;      // it is a static variable inside UDF
    $b += 1;
    $c += 1;
    return " Local Variable :- ".$b. "<br> Static Variable :- ".$c;
}

echo "<br><br> On the First call :<br> ".static_var();
echo "<br><br> On the Second call :<br> ".static_var();
echo "<br><br> On the Third call :<br> ".static_var();


?>