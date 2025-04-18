<!-- Write a simple PHP class which displays an introductory message like "Hello All, I am 
Karuna", where "Karuna" is an argument value of the method within the class. -->

<?php

class simple_string
{
    public function display_string($name)
    {
        echo "<center><h1><b> Hello All, I'm $name";
    }
}

$obj = new simple_string();
$obj -> display_string('Aman Singh')

?>