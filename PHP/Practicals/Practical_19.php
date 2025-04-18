<!-- Write a function to calculate the factorial of a number (non-negative integer). The 
function accept the number as a argument -->
<?php
function num($num)
{
    if ($num == 0) {
        return 1;
    }
    else {
        return $num*num($num-1);
    }
}
echo "<h1><b>Factorial of 5 is : ";
echo num(5);
?>