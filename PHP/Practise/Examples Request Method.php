<!DOCTYPE html>
<html>
<head>
    <title>Form Using Request Method</title>
</head>
<body>
    <form action="<?php echo $_SERVER['PHP_SELF'];?>"" method="POST">
        <table border="0" align="center">
            <tr>
                <th> Name : </th>
                <th> <input type="text" name="name"></th>
            </tr>
            <tr>
                <th> Email : </th>
                <th> <input type="email" name="email"></th>
            </tr>
            <tr>
                <th> DOB : </th>
                <th> <input type="date" name="dob"></th>
            </tr>
            <tr>
                <th colspan="2"> <input type="submit" value="SUBMIT"></th>
            </tr>
        </table>
    </form>

    <table border="1">
        <tr><br><br><br><br><br><br>
            <th> Your Name is :- </th>
            <th><?php echo $_REQUEST['name']; ?></th>
        </tr>
        <tr>
            <th> Your Email is :- </th>
            <th><?php echo $_REQUEST['email']; ?></th>
        </tr>
        <tr>
            <th> Your Date of Birth is :- </th>
            <th><?php echo $_REQUEST['dob']; ?></th>
        </tr>
    </table>

</body>
</html>
