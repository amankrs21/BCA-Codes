<!-- Write a PHP Script that will assign two numbers and check their equality -->

<?php
//equal mean --> if value is same then both will be equal doesn't depend on data-type
$num1 = '10';       //it is of int type
$num2 = 10;         //it is of str type

echo "Number 1 = $num1<br> Number 2 = $num2<br><br>";

if ($num1 ==  $num2)    //(==) is used to check equality
{
    echo "Number 1 and Number 2 are Equal<br>";
}
else {
    echo "Number 1 and Number 2 are NOT Equal<br>";
}
?>