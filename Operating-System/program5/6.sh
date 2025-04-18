echo Enter number 1 :- 
read n1
echo Enter Number 2 :- 
read n2
echo Enter numebr 3 :- 
read n3

if [ $n1 -gt $n2 -a $n1 -gt $n3 ]
then
	echo $n1 is max
elif [ $n2 -gt $n1 -a $n2 -gt $n3 ]
then
	echo $n2 is max
else
	echo $n3 is max
fi
