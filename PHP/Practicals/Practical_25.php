<!-- Write a PHP class that sorts an ordered integer array with the help of sort() function -->

<?php

class sorting
{
    protected $numbers;
    public function sorting_num(array $numbers)
    {
        echo "<center><h1><b> Numbers are : ";
        foreach ($numbers as $number) 
        {
            echo "$number, &nbsp";
        }
        sort($numbers);
        echo "<br><br> After Sorting Number are : ";
        foreach ($numbers as $number) 
        {
            echo "$number, &nbsp";
        }
    }
}

$obj = new sorting();
$obj -> sorting_num(array(11,25,65,36,42))


?>