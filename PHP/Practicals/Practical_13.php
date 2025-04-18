<!-- Write a PHP Script that will display following pattern style as an output.
1
12
123
1234 -->

<?php
for ($i=0; $i < 5; $i++) { 
    for ($j=1; $j <= $i; $j++) { 
        echo "<b>$j</b>";
    }
    echo "<br>";
}

?>