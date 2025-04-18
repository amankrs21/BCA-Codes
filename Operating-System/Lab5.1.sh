echo "Enter Number 1 : "
read n1

echo "Enter Number 2 : "
read n2

echo "Enter Number 3 : "
read n3

echo "Enter Number 4 : "
read n4

sum=`expr $n1 + $n2 + $n3 + $n4`
mul=`expr $n1 \* $n2 \* $n3 \* $n4`
avg=`expr $sum / 4`

clear
echo " Sum of the Numbers are - $sum"
echo " Multiplication of the Numbers are - $mul"
echo " Average of the Numbers are - $avg"
