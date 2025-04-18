<!-- Write a simple PHP class which displays the following string : 'MyClass class has 
initialized!' -->

<?php

class simple_string
{
    public function display_string()
    {
        echo "<h1><b><center>My Class has Initialized";
    }
}

$obj = new simple_string();
$obj -> display_string()

?>