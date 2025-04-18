<!DOCTYPE html>
<html lang='eng'>
    <head>
        <title>Form using GET Method</title>
    </head>
    <body>
        <form action="" method='GET'>
            <table border="1" align="center" bordercolor='green'><br><br><br><br>
                <tr>
                    <h2><center> Fillup Your Details <center></h2>
                    <td>First Name 
                    <td><input type='text' name='f_name'>
                </tr>
                <tr>
                    <td>Middle Name 
                    <td><input type='text' name='m_name'>
                </tr>
                <tr>
                    <td>Last Name 
                    <td><input type="text" name="l_name">
                </tr>
                <tr>
                    <td>Mobile Number 
                    <td><input type="number" name="m_num">
                </tr>
                <tr>
                    <td>City 
                    <td><input type="name" name="city">
                </tr>
                <tr>
                    <td>Enrollnment Number 
                    <td><input type="number" name="en">
                </tr>
                <tr>
                    <td>Batch 
                    <td><select name="batch">
                        <option>Select</option>
                        <option>A</option>
                        <option>B</option>
                        <option>C</option>
                        <option>D</option>
                    </select>
                </tr>
                <tr>
                    <td>Semester 
                    <td><select name="sem">
                        <option>Select</option>
                        <option>1st</option>
                        <option>2nd</option>
                        <option>3rd</option>
                        <option>4th</option>
                        <option>5th</option>
                        <option>6th</option>
                    </select>
                </tr>
                <tr>
                    <td>Branch 
                    <td><select name="branch">
                        <option>Select</option>
                        <option>BCA</option>
                        <option>BSC IT</option>
                        <option>IMCA</option>
                        <option>MCA</option>
                    </select>
                </tr>
                <tr>
                    <td colspan="2">
                    <input type="submit" value="SUBMIT">
                </tr>
            </table>
        </form>
    </body>
</html>


<?php
error_reporting(0);

$fname = $_GET['f_name'];
$mname = $_GET['m_name'];
$lname = $_GET['l_name'];
$mobno = $_GET['m_num'];
$city = $_GET['city'];
$enrno = $_GET['en'];
$batch = $_GET['batch'];
$Sem = $_GET['sem'];
$branch = $_GET['branch'];

?>

<html>
<head>
    <title>Student Information</title>
    <style>
        h1 {
            font-size: 35px;
            color: rgb(21, 207, 46);
            font-family: Verdana, Geneva, Tahoma, sans-serif;
            font-style: italic;
        }
        th {
            font-size: 25px;
            font-family: 'Times New Roman', Times, serif;
            font-style: unset;
            color: rgb(64, 8, 216);
            text-align: left;
            
        }
        td {
            font-size: 20px;
            font-family: 'Times New Roman', Times, serif;
            font-style: unset;
            text-align: center;
            
        }
    </style>
</head>
<body>
    <table align="center" border="2" bordercolor='red'><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
        <tr>
            <h1><center>Student Information</center></h1>
            <th> First Name 
            <th> <?php echo $fname ?>
        </tr>
        <tr>
            <th> Middle Name 
            <th> <?php echo $mname ?>
        </tr>
        <tr>
            <th> Last Name 
            <th> <?php echo $lname ?>
        </tr>
        <tr>
            <th> Enrollnment No 
            <th> <?php echo $enrno ?>
        </tr>
        <tr>
            <th> Batch 
            <th> <?php echo $batch ?>
        </tr>
        <tr>
            <th> Semester 
            <th> <?php echo $Sem ?>
        </tr>
        </tr>
        <tr>
            <th> Branch 
            <th> <?php echo $branch ?>
        </tr>
        </tr>
        <tr>
            <th> City 
            <th> <?php echo $city ?>
        </tr>
        <tr>
            <th> Mobile No 
            <th> <?php echo $mobno ?>
            
        </tr>
    </table>
</body>
</html>
