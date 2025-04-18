<!DOCTYPE html>
<html>
<head>
    <title>Form Submission</title>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
</head>
<body><center>
    <form action="" method="POST">
    <table>
    <tr>
        <th> Username : 
        <th> <input type="text" name="name">
    </tr>
    <tr>
        <th> Password : 
        <th> <input type="password" name="password">
    </tr>
    <tr>
        <th><br><br><input type="hidden" name="form_submitted" value="1"/>
        <th><input type="Submit" value="Submit">
        <input type="reset" value="clear">
    </tr>
    </table>
    </form>
</center>
</body>
</html>

<?php
error_reporting(0);

$name = $_POST['name'];
$password = $_POST['password'];
echo "<br> Username :- $name";
echo "<br> Password :- $password";
?>