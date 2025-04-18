<!-- Write a PHP Script that will assign two numbers and check they are identical or not. -->


<?php
//Identical mean --> Both value and data-type will be same
$num1 = 21;     //Number 1 is Integer type
$num2 = '21';   //number 2 is String type
//So both is Not Identical

echo "<br> Number 1 is --> $num1 <br> Number 2 is --> $num2<br>";

if ($num1 === $num2)    //(===) is used to check identical
{
    echo "<br> Number 1 and Number 2 is <b>Identical</b>";
}
else
{
    echo "<br> Number 1 and Number 2 is <b>NOT Identical</b>";
}
?>