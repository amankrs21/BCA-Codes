<!-- Write a PHP Script that will display following pattern style as an output.
1
22
333
4444 -->

<?php
for ($i=1; $i < 5; $i++) { 
    for ($j=1; $j <= $i; $j++) { 
        echo "<b>$i</b>";
    }
    echo "<br>";
}
?>