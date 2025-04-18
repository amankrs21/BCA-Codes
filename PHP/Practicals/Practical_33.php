<!-- Write a php script that will help to upload a file. -->

<html>
<body>
<form action="" method="POST" enctype="multipart/form-data">
<input type="file" name="image" /><br><br><br>
<input type="submit"/>
</form>
</body>
</html>

<?php
error_reporting(0);
$filename = $_FILES['image']['name'];
$file_tmp = $_FILES['image']['tmp_name'];

move_uploaded_file($file_tmp,"C:/xampp/htdocs/aman/PHP/Images/".$filename);

?>
