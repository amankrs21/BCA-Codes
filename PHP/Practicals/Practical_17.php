<!-- Write a PHP function that will take three integer values and find out max number. -->

<?php
function maximum(){
    $num1 = 10;
    $num2 = 20;
    $num3 = 30;
    echo "<h1><font color='red'><b> Given<br> Number 1 is --> $num1<br> Number 2 is --> $num2<br> Number 3 is --> $num3<br><br>";
    if ($num1 > $num2 && $num1 > $num3) {
        echo " Number 1 is Greater which is $num1";
    }
    elseif ($num2 > $num1 && $num2 > $num3) {
        echo " Number 2 is Greater which is $num2";
    }
    else {
        echo "<font color='green'> Number 3 is Greater which is $num3<br><br><br>";
    }
}
maximum();
?>

<!-- Method 2 -->

<html>
	<body>
		<form action = "" method="POST">
			no1 : <input type="number" name="no1"></br>
			no2 : <input type="number" name="no2"></br>
			no3 : <input type="number" name="no3"></br>
			<input type="submit" value="submit">
		</form>
	</body>
</html>

<?php
error_reporting(0);
$a = $_POST['no1'];
$b = $_POST['no2'];
$c = $_POST['no3'];
if($a > $b && $a > $c)
{
	echo "$a is greater than $b and $c";
}
elseif($b > $a && $b > $c)
{
	echo "$b is greater than $a and $c";
}
else
{
	echo "$c is greater than $a and $b";
   }
?>