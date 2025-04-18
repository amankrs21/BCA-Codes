clear

echo "\n Enter a Number : "
read num
sum=0

while [ $num -gt 0 ]
do
	mod=`expr $num % 10`
	num=`expr $num / 10`
	sum=`expr $sum + $mod`
done
clear
echo "\n Sum of the Numbers is - $sum"
