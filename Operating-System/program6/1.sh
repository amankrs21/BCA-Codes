echo Enter value of x
read x

sum=`expr 1 + $x + $x \* $x + $x \* $x \* $x + $x \* $x \* $x \* $x`

echo sum of series is $sum
