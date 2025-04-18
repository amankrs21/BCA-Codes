<!-- Write a PHP function to check a number is prime or not -->
<?php
function check_prime($num)
{
    if ($num == 1){
        return 0;
    }
    for ($i=2; $i < $num/2; $i++) { 
        if ($num % $i == 0) {
            return 0;
        }
    }
    return 1;
}
$num = 25;
$flag_val = check_prime($num);
echo "<b><br><br><br><h1><b>";
if ($flag_val == 1) {
    echo "It is a Prime Number";
}
else {
    echo "It is not a Prime Number";
}
?>
