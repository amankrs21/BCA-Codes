<!-- Program that shows how current statements work in PHP -->

<?php
echo "<h1><br>";

for ($i=0; $i < 10; $i++) { 
    if ($i == 5) {
        continue ;  // it will skip 5 then print all the numbers
    }
    echo "$i, ";
}

?>