<!-- Write a PHP function that checks whether a passed string is palindrome or not? -->

<?php
function palindrome($s)
{
    if (strrev($s) == $s) {
        return 1;
    }
    else {
        return 0;
    }
}
$str = "AMA";
echo "<br><br><b>";
if (palindrome($str))
{
    echo "'$str'  is Palindrome";
}
else {
    echo "'$str'  is Not Palindrme";
}
?>