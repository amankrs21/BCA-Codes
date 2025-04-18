<?php
$con = mysqli_connect("localhost","root","amanraj");
$db = mysqli_select_db($con, "php");

$sql = "select * from login";
$res = mysqli_query($con, $sql);
?>
<!DOCTYPE html>
<html>
<head>
<style>
table {
  font-family: arial, sans-serif;
  border-collapse: collapse;
  width: 50%;
}

td, th {
  border: 1px solid #dddddd;
  text-align: left;
  padding: 8px;
}

tr:nth-child(even) {
  background-color: #dddddd;
}
</style>
</head>
<body bgcolor='green'><center>

<h2>HTML Table</h2>

<table>
  <tr>
    <th>ID</th>
    <th>Username</th>
    <th>Password</th>
  </tr>
  <?php   
  while($row = mysqli_fetch_assoc($res))
  {
  ?>
  <tr>
    <td><?php echo $row['ID']; ?></td>
    <td><?php echo $row['Username']; ?></td>
    <td><?php echo $row['Password']; ?></td>
  </tr>
  <?php } ?>
</table>
</center>
</body>
</html>
