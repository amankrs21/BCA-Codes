<!-- Write a PHP function to reverse a string -->

<?php
function reverse($str)
{
    return strrev($str);
}
//Drive Code
$str = "AMAN";
echo "Given String is : ",$str;
echo "<b><br>Reverse of String is : ";
echo reverse($str);
?>