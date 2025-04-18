<!-- Program to understand how foreach works -->

<?php
$singh = array('Aman'=>18,'Roshni'=>18,'Jiva'=>-5);

echo "<br><h1> Singh family and their age :- <br>";
foreach ($singh as $family => $age) {
    echo "$family :- ($age)<br>";
}

?>