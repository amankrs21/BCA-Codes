echo Enter two number

read n1 n2

echo Enter your choice

echo 1. Addition
echo 2. Subtraction
echo 3. Multiplication
echo 4. Division

read ch

case $ch in
1) add=`expr $n1 + $n2`
echo Addition is :- $add;;

2) sub=`expr $n1 - $n2`
echo Subtraction is :- $sub;;

3) mul=`expr $n1 \* $n1`
echo Multiplication is :- $mul;;

4) div=`expr $n1 / $n2`
echo Division is :- $div;;

esac
