<!-- Calculate the difference between two dates using PHP OOP approach.
Sample Dates : 1981-11-03, 2013-09-04
Expected Result : Difference : 31 years, 10 months, 1 days -->

<?php
$sdate = new DateTime("1981-11-03");
$edate = new DateTime("2013-09-04");
$interval = $sdate->diff($edate);
echo "<h1><b><center>";
echo "Difference is :- " . $interval->y . " years, " . $interval->m." months, ".$interval->d." days ";


// $date1=date_create("2013-03-15");
// $date2=date_create("2013-12-12");
// $diff=date_diff($date1,$date2);

?>