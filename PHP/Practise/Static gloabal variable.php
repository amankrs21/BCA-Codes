<?php
$num = 21;
function global_var(){
    global $num;
    echo "<br>Gloabal Inside Funtion is $num";
}
function static_var(){
    static $n1 = 4;
    $n2 = 21;
    $n2++;
    $n1++;
    echo "<br>Static Number = $n1";
    echo "<br>Local Number = $n2";
}
global_var();
echo "<br>On First Call : ";
static_var();
echo "<br>On Second Call : ";
static_var();