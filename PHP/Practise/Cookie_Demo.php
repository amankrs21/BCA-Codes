<?php
$cookie_name = "User";
$cookie_value = "Karuna";
setcookie($cookie_name,$cookie_value);
?>
<html>
<body>
<?php
if(!isset($_COOKIE['$cookie_name']))
{
    echo "Cookie Name is : ".$cookie_name;
    echo "<br>";
    echo "Cookie Value is : ".$cookie_value
}
else
{
    echo "Not Set Value of cookies";
}
?>
</body>
</html>