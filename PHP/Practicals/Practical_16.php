<!-- 16. Write a PHP Script that will display following pattern style as an output.
4444
333
22
1 -->

<?php

for ($i=4; $i >= 1; $i--) { 
    for ($j=$i; $j >= 1; $j--) { 
        echo "<b>$i</b>";
    }
    echo "<br>";
}

?>