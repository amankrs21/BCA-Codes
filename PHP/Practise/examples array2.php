<?php
	$virus = array("Varun"=>"1990", "Arun"=>"2000", "Kartick"=>"2001","Yash" => "2002","Ajay" => "2003");
    $disease = array("Aadarsh"=>"1995","Kartick" =>"2001","varun"=>"1990");
    $len_array = count($virus);
    echo "Length of array : " , $len_array;
    echo "<br>";
    //Sorting the data array:
    echo "<br><br>Sorting array : <br><br>";
    ksort($virus);
   	$i =0;
    foreach($virus as $a => $a_value) {
 		echo "" . $a . "=>" . $a_value;
 		echo "<br>";
	}
    
    
    //Reversing the sorted data array:
    echo "<br><br>Reverse sort array : <br><br>";
  	$virus = array_reverse($virus);
    foreach($virus as $a => $a_value) {
 		echo "" . $a . "=>" . $a_value;
 		echo "<br>";
	}
    
    //difference of array
    echo "<br><br>";
    echo "Data Difference of data <br><br>";
    $diff = array_diff($virus,$disease);
    foreach($diff as $a => $a_value) {
 		echo "" . $a . "=>" . $a_value;
 		echo "<br>";
	}
?>