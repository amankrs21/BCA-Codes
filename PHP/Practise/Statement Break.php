<!-- Program that shows how break statements work in PHP -->

<?php
echo "<h1><br>";

for ($i=0; $i < 10; $i++) { 
    echo "$i, ";
    if ($i == 7) {
        break ;     // if you are using break then it depends on loop layer
    }               // if there are two innner loop then we have to use (break 2);
}

?>