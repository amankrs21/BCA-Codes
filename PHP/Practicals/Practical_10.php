<!--  Write a PHP Script that will check number is positive or negative -->

<?php
$num = -21;
$num1 = '21';

echo "Given Number is $num(",gettype($num),") and $num1(",gettype($num1),")<br><br>";

if ($num > 0) {
    echo "$num is a <b>Positive</b> Number<br><br>";
}
else {
    echo "$num is a <b>Negetive</b> Number<br><br>";
}
if ($num1 > 0) {
    echo "$num1 is a <b>Positive</b> Number<br><br>";
}
else {
    echo "$num1 is a <b>Negetive</b> Number";
}

?>