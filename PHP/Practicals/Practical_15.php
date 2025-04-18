<!--  Write a PHP Script that will display following pattern style as an output.
   *
  * *
 * * *
* * * * -->

<?php
for ($i=1; $i < 5; $i++) { 
    for ($k=0; $k < 5-$i; $k++) { 
        echo "&nbsp";
    }
    for ($j=1; $j <= $i; $j++) { 
        echo "<b>* <b>";
    }
    echo "<br>";
}
?>

<?php
echo "<br><br><br>";
for ($i=5; $i >= 1; $i--) { 
    for ($k=0; $k < 5-$i; $k++) { 
          echo "&nbsp";
    }
    for ($j=1; $j < $i + 1; $j++) { 
        echo "<b>* <b>";
    }
    echo "<br>";
}
?>