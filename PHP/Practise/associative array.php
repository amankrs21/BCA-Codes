<?php

$birth_day = array("Aman"=>"2001", "Yash"=>"2000", "Jiva"=>"2025", "Romansi"=>"2002", "Varun"=>"2005","Digpal"=>"2004");
$year = array("Kartik"=>"2005","Kalpesh"=>"2000","Subhash"=>"2004");
echo "<h1> Associative Array Elements are : <br>";
foreach($birth_day as $day => $day_value)
{
    echo "Key = ".$day.", Value = ".$day_value;
    echo "<br>";
}

function lenght($birth_day)
{
    $b_length = count($birth_day);
    echo "<br> Length of Associative Array is = ",$b_length;
}

function sorting($birth_day)
{
    asort($birth_day);
    echo "<br><br> Array in the Sorted Form : <br>";
    foreach($birth_day as $day => $day_value)
    {
        echo "Key = ".$day.", Value = ".$day_value;
        echo "<br>";
    }
}

function reverse($birth_day)
{
    $d_reverse = array_reverse($birth_day);
    echo "<br> Array in the Reverse Form : <br>";
    foreach($d_reverse as $d => $d_value)
    {
        echo "key = ".$d.", Value = ".$d_value;
        echo "<br>";
    }
}
function difference($birth_day,$year)
{
    $diff = array_diff($birth_day,$year);
    echo "<br> Data Difference in the Array<br>";
    foreach($diff as $a => $a_value)
    {
 		echo "" . $a . "=>" . $a_value;
 		echo "<br>";
	}
}
lenght($birth_day);
sorting($birth_day);
reverse($birth_day);
difference($birth_day,$year);

?>