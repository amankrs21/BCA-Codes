<!-- Write a HTML Form & PHP Script that will take name and message from user and 
display it -->

<html>
<body>
    <form action="" method="post">
    <table border="0" align="center">
        <tr>
            <th>Name : <input type="text" name="name"></th>
        </tr>
        <tr>
            <th>Message : <textarea rows="4" name="message"></textarea></th>
        </tr>
        <tr>
            <th><input type="submit" value="Submit"></th>
        </tr>
    </form>
</body>
</html>

<?php
error_reporting(0);
echo "<br> Your Name is :- ",$_POST['name'];
echo "<br> Your Message is :- ",$_POST['message'];
?>
