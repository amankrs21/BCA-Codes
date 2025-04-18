fact=1

echo Enter Any Number
read n1
while [ $n1 -gt 0 ]
do
	fact=`expr $fact \* $n1`
	n1=`expr $n1 - 1`
done
echo factorial is $fact
