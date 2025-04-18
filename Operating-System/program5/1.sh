echo Enter Four Numbers
read n1 n2 n3 n4

sum=`expr $n1 + $n2 + $n3 + $n4`
product=`expr $n1 \* $n2 \* $n3 \* $n4`
average=`expr $sum / 4`

echo Sum is :- $sum
echo Product is :- $product
echo Average is :- $average

