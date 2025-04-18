<html>
<head>
    <title>Examples on Array</title>
</head>
<body bgcolor='blue'><h2>
<?php
// assigning a array
$cars = array ("Tesla", "Audi", "Tata");
// second method to assigning array
$bikes[0] = 'Bullet';
$bikes[1] = 'Yamaha';
$bikes[2] = 'Dukati';
$bikes[3] = 'Kawasaki Ninja';

var_dump($bikes);   //the var_dump() function returns the datatype and values
echo "<br><br> Printing of array using foreach loop :-<br>";
foreach ($bikes as $bike) {
    echo "$bike, &nbsp";
}

echo "<br><br>";
echo"Printing of element using index value :-<br>";
echo "Array Element1: $cars[0] <br>"; 
echo "Array Element2: $cars[1] <br>"; 
echo "Array Element3: $cars[2] <br>";

// PHP associcative array
$enroll = array('Aman'=> 159, 'Yash'=> 131, 'Varun'=> 167, 'Digpal'=> 161, 'Karik'=> 171, 'Kalpesh'=> 121);
foreach ($enroll as $name=> $en){
    echo "<br> Name is ".$name." and his Enrollnment Number is ". $en;
}

// Using of count() funtion
echo "<br><br> Length of Array Bikes is :- ",count($bikes);
echo "<br> Length of Array Cars is :- ",count($cars);

// PHP current(), end(), next() and prev() funtion
echo "<br><br> Value of the current element of Bikes :- ",current($bikes);
echo "<br> Value of the next element of Bikes :- ",next($bikes);
echo "<br> Value of the end element of Bikes :- ",end($bikes);
echo "<br> Value of the previous element of Bikes :- ",prev($bikes);

// PHP sort(), rsort(), asort() and arsort()
echo "<br><br> Array in Ascending Order :- ";
sort($bikes);
foreach ($bikes as $bike){
    echo "$bike,&nbsp";
}
echo "<br> Array in Descending Order :- ";
rsort($bikes);
foreach ($bikes as $bike){
    echo "$bike,&nbsp";
}
echo "<br><br> Associative Array in Ascending Order :- <br>";
asort($enroll);
foreach ($enroll as $name=> $en){
    echo "Name :- $name and Enrollnment Number :- $en<br>";
}
echo "<br> Associative Array in Descending Order :- <br>";
arsort($enroll);
foreach ($enroll as $name=> $en){
    echo "Name :- $name and Enrollnment No. :- $en<br>";
}

// Merging of two array by using array_merge() funtion
echo "<br> Merging of array Bikes and Cars :-<br>";
print_r(array_merge($bikes, $cars));

// array_reverse() funtion for reverse a array
echo "<br><br> Reverse of Bikes Array is :- ";
print_r(array_reverse($bikes));

// array_diff() funtion for find difference of two asociative array
$enroll2 = array('Yash'=> 159, 'Digpal'=> 131, 'Kartik'=> 167);
echo "<br><br> Differnce of two array is :- <br>";
print_r(array_diff($enroll,$enroll2));

// array_shift() function to remove first element
echo "<br><br> Removing fisrt element :- <br>";
array_shift($enroll2);
print_r($enroll2);

// array_slice() Function to print selected parts of a array
echo "<br><br> After 2nd element of array bikes :- <br>";
print_r(array_slice($bikes,1));

// array_unique() Function to remove dublicate values of array
$color = array(1=> 'Red', 2=> 'Blue', 3=> 'Red', 4=> 'Blue');
echo "<br><br> Removing the Dublicates data from the Array :- <br>";
print_r(array_unique($color));

// array_unshift() Function to add new element in the array
echo "<br><br> Adding green color in the array :- <br>";
array_unshift($color, 'green');
print_r($color);

// array_keys() function to print the keys of array if exist
echo "<br><br> Printing keys of array :- <br>";
print_r(array_keys($enroll));

// array_key_exists() Function to check the key is present in the array or not
if (array_key_exists("Aman", $enroll)){
    echo "<br><br> Aman is exists in the Array";
}
else {
    echo "<br><br> Aman is NOT exists in the Array";
}

// array_push() Function to insert elemets in the array at last
echo "<br><br> Adding MG Hector, Fortuner in the array :- <br>";
array_push($cars, 'Hector', 'Fortuner');
print_r($cars);

// array_pop() Function to delete the last element from the array
echo "<br><br> Deleting Last element from the array";
array_pop($cars);
print_r($cars);

// array_multisort() Function to sort array according to repetition
echo "<br><br> Sorting array :-<br>";
array_multisort($color);
print_r($color);

// array_search() Function to find the key of element
echo "<br><br> Name of Enrollnment No. 159 is :- ";
echo array_search(159, $enroll);

?>
</h2>
</body>
</html>
