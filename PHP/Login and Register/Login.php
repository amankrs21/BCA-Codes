<?php

error_reporting(0);

$username = $_POST['username'];
$password = $_POST['password'];

$conn = mysqli_connect('localhost', 'root', '');
mysqli_select_db($conn, 'php');
$sql = "SELECT * from login_registration where Username='$username'";
// echo $sql;
$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while($row = mysqli_fetch_assoc($result)) {
        $id = $row["Username"];
        $name = $row['Name'];
        $email = $row['Email'];
        $pass = $row['Passsword'];
        echo "<br>",$id;
        echo "<br>",$name;
        echo "<br>",$email;
        echo "<br>",$pass;
        if ($username == $id and $password == $pass)
        {
            echo "<br><h1> Login Successfully";
        }
    }
} 
else {
  echo "0 results";
}




mysqli_close($conn);

?>