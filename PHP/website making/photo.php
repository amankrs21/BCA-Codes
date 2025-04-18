<html>
<head>
    <title>Taking photo from user</title>
</head>
<body>
    <form action="demo.php" method="POST">
        <!-- <input type="image" name="image_input.png" src="image_input.png" alt="submit" width="48" height="48"> -->
        <input type="file" accept="image/*" name="image_input.png">
        <input type="Submit" value="Submit"><br>
        <!-- <input id="myFileInput" type="file" accept="image/*;capture=camera"> -->

<!-- var myInput = document.getElementById('myFileInput');

function sendPic() {
    var file = myInput.files[0];

    // Send file here either by adding it to a `FormData` object 
    // and sending that via XHR, or by simply passing the file into 
    // the `send` method of an XHR instance.
}

myInput.addEventListener('change', sendPic, false); -->
    </form>
</body>
</html>