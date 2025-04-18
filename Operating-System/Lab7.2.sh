clear
echo "\nEnter a Number to check Prime : "
read num

temp=0
i=2
while [ $num -gt $i ]
do
	rem=`expr $num % $i`
	if [ $rem -eq 0 ]
	then
		temp=1
	else
		temp=0
	fi
	i=`expr $i + 1`
done

if [ $temp -eq 0 ]
then
	echo "Number is Prime"
else
	echo "Number is Not Prime"
fi
