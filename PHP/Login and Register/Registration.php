
<?php
error_reporting(0);

$username = $_POST['username'];
$name = $_POST['name'];
$email = $_POST['email'];
$password = $_POST['password'];
$c_password = $_POST['c_password'];

$conn = mysqli_connect('localhost', 'root', '');
mysqli_select_db($conn, 'php');
$query = ("INSERT INTO login_registration values ('$username', '$name', '$email', '$password')");
echo $query;
if ($password == $c_password) 
{
    if(mysqli_query($conn, $query))
    {
        echo "<br><br><br><br><h1><center>Successfully Registered";
    }
    else 
    {
        echo "<br><br><br><br><h1><center>Error while inserting data";
    }
}
else 
{
    echo "Password and Confirm Password doesn't Match";
}
mysqli_close($conn);
?>