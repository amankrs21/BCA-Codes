echo Enter any Natural Number
read n
sum=0
while [ $n -gt 0 ]
do
k=`expr $n % 10`
n=`expr $n / 10`
sum=`expr $sum + $k`
done
echo sum is $sum
