<!-- Addition of two number using class and object -->

<?php

class Addition
{
    public function add($num1,$num2)
    {
        echo "<center><h1><b> Addition of $num1 and $num2 is : ",$num1+$num2;

    }
}

$obj = new Addition();
$obj -> add(10,20)

?>