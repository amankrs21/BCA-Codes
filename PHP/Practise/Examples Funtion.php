<!-- Lets see some examples of funrion in PHP -->

<?php

function add(...$num){
    $sum = 0;
    foreach($num as $n){
        $sum = $sum + $n;
    }
    echo "Sum of all the Numbers are : ". $sum;
}
add(1,2,3,4,5);
?>
