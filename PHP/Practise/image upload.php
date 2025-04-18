<html>
<body>
<form action="" method="POST" enctype="multipart/form-data">
<input type="file" name="image" />
<input type="submit"/>
</form>
</body>
</html>

<?php

    error_reporting(0);
	$filename = $_FILES['image']['name'];
	$file_tmp = $_FILES['image']['tmp_name'];
	
	move_uploaded_file($file_tmp,"Images/".$filename);

?>