<!DOCTYPE html>
<html lang='eng'>
<head>
    <title>Object Class</title>
</head>
<body bgcolor='blue'><h1>
<?php
class student_info
{
    var $name;
    var $enro;
    var $dob;
    var $batch;
    var $dep;
    var $sem;
    var $dir;
    var $photo;
    function student_inf()
    {
        echo "<br><img src='{$this->photo}' width='30%' height='50%'>";
        echo "<br>Student Name :- ",$this->name;
        echo "<br>Enrollnment No :- ",$this->enro;
        echo "<br>Date of Birth :- ",$this->dob;
        echo "<br>Batch :- ",$this->batch;
        echo "<br>Department :- ",$this->dep;
        echo "<br>Semester :- ",$this->sem;
    }
}
echo "<br> Student 1 all information :- ";
$student_1 = new student_info;
$student_1->name = 'Aman Kumar Singh';
$student_1->enro = 200510101159;
$student_1->dob = '21st Feb 2001';
$student_1->batch = 'C';
$student_1->dep = 'BCA';
$student_1->sem = '2nd';
$student_1->photo = 'aman.jpg';
$student_1->student_inf();

echo "<h1><br> Student 2 all information :- ";
$student_2 = new student_info;
$student_2->name = 'Roshani Singh';
$student_2->enro = 200510101164;
$student_2->dob = '4th April 2002';
$student_2->batch = 'C';
$student_2->dep = 'BCA';
$student_2->sem = '2nd';
$student_2->photo = 'rosh.jpg';
$student_2->student_inf();
?>
</center></h1>
</body>
</html>