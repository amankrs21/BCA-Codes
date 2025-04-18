<!-- Write a php page and create a user form which asks for marks in five subjects out of 
100 and then displays the mark sheet of the student. The format is as follows:
Name of Student*:
Marks in Each Subject
Subject 1* :
Subject 2* :
Subject 3* :
Subject 4* :
Subject 5* :
Total Marks Obtained:
Total Marks:
Note: All the entries marked (*) are to be input by the user. And use a submit button to post 
the entries in the form using the POST method -->

<html>
<body>
    <form action="" method="post">
        <table>
            <tr> 
                <th><label for="Name"> Name<span class="required">*</span></th>
                <th><input type="text" name="name" required></th>
            </tr>
            <tr>
                <th><label for="1"> Subject 1 : <span class="required">*</span></th>
                <th> <input type="number" name="sub1" required></th>
            </tr>
            <tr>
                <th><label for="1"> Subject 2 : <span class="required">*</span></th>
                <th> <input type="number" name="sub2" required></th>
            </tr>
            <tr>
                <th><label for="1"> Subject 3 : <span class="required">*</span></th>
                <th> <input type="number" name="sub3" required></th>
            </tr>
            <tr>
                <th><label for="1"> Subject 4 : <span class="required">*</span></th>
                <th> <input type="number" name="sub4" required></th>
            </tr>
            <tr>
                <th><label for="1"> Subject 5 : <span class="required">*</span></th>
                <th> <input type="number" name="sub5" required></th>
            </tr>
            <tr>
                <th><br> <input type="submit" value="Submit"></th>
            </tr>
        </table>
    </form>
</body>
</html>

<?php
error_reporting(0);
$sub1 = $_POST['sub1'];
$sub2 = $_POST['sub2'];
$sub3 = $_POST['sub3'];
$sub4 = $_POST['sub4'];
$sub5 = $_POST['sub5'];
echo "<br><h2><b> Name of Student :- ",$_POST['name'];
echo "<br> Marks in Each Subject :";
echo "<br> Subject 1 :- ",$sub1;
echo "<br> Subject 2 :- ",$sub2;
echo "<br> Subject 3 :- ",$sub3;
echo "<br> Subject 4 :- ",$sub4;
echo "<br> Subject 5 :- ",$sub5;
echo "<br> Total Marks :- ",$sub1+$sub2+$sub3+$sub4+$sub5;
?>