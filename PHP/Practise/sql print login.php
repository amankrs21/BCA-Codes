<?php
$servername = "localhost";
$username = "root";
$password = "";

// Create connection
$conn = mysqli_connect($servername, $username, $password);
mysqli_select_db($conn, 'aman');

// Check connection
if (!$conn) {
  die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully";

$query = "SELECT * FROM login";
$execute = mysqli_query($conn, $query);
?>

<html>
<head>
    <style>
        table {
          font-family: arial, sans-serif;
          border-collapse: collapse;
          width: 100%;
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
<body>
    <table>
        <tr>
            <th>Username</th>
            <th>Password</th>
        </tr>
        <?php   
        while($row = mysqli_fetch_assoc($execute))
        {
        ?>
        <tr>
            <td><?php echo $row['Login_ID'];?></td>
            <td><?php echo $row['Password'];?></td>
        </tr>
        <?php } ?>
    </table>
</body>
</html>
