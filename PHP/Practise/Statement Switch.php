<!-- Program to understand how Switch case work in PHP -->

<?php

$name = 'jiva';
switch ($name) {
    case 'roshni':
        echo "<br> hello your name is Roshani";
        break;
    case 'aman':
        echo "<br> hello your name is Aman";
        break;
    case 'jiva':
        echo "<br> hello your name is Jiva";
        break;
    default:
        echo "<br> You are a Unknown Person... access denied";
        break;
}

?>