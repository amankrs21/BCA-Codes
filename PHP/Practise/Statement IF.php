<!-- Program to understand how if statement works -->

<?php

$num = 11.25;
echo "<br><h1> Given Number is $num";
if ($num > 0)
{
    if ($num % 2 == 0)
    {
        echo "<br> Number is Positive and Even";
    }
    else {
        echo "<br> Number is Positive and Odd";
    }
}
elseif ($num < 0) {
    if ($num % 2 == 0)
    {
        echo "<br> Number is Negetive and Even";
    }
    else {
        echo "<br> Number is Negetive and Odd";
    }
}
else {
    echo "<br> Number is Zero (0)";
}

?>