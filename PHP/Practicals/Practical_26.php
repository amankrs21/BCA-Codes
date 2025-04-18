<!-- Write a PHP Calculator class which will accept two values as arguments, then add them, 
subtract them, multiply them together, or divide them on request. -->

<!DOCTYPE html>
<html lang='eng'>
<head>
    <title>CALCULATOR</title>
</head>
<body bgcolor='blue'><h1><b><center>
<?php
class calculator
{
    var $add;
    var $sub;
    var $mul;
    var $div;
    var $mod;

    function calculate()
    {
        echo "<br>------------------------------------";
        echo "<br>Addition :- ",$this->add;
        echo "<br>Substraction :- ",$this->sub;
        echo "<br>Multiplication :- ",$this->mul;
        echo "<br>Division :- ",$this->div;
        echo "<br>Modulo :- ",$this->mod;
        echo "<br>------------------------------------";
    }
}

$num1 = 21;
$num2 = 4;
echo "<h1> CALCULATOR</h1>";
echo "<br> Given <br> Number 1 is $num1 <br> Number 2 is $num2<br><br>";

$cal  = new calculator;
$cal -> add = $num1 + $num2;
$cal -> sub = $num1 - $num2;
$cal -> mul = $num1 * $num2;
$cal -> div = $num1 / $num2;
$cal -> mod = $num1 % $num2;
$cal -> calculate();

?>
</center><b></h1>
</body>
</html>