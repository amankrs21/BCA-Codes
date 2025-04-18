<!-- Write a PHP function that will take an integer value and return sum of digits. -->

<html>
<body>
    <form action="" method="POST">
        Number : <input type="number" name='no'><br>
        <input type="submit" value='Submit'>
    </form>
</body>
</html>

<?php
error_reporting(0);
$num = $_POST['no'];
function number($num)
{
    $sum = 0;
    for ($i=0; $i < strlen($num); $i++) { 
        $sum += $num[$i];
    }
    echo "<br><br> Sum of the elements of Given Number is : ",$sum;
}
number($num)
?>