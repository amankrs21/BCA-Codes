echo Enter Number 1 :- 
read n1
echo Enter Number 2 :- 
read n2

if [ $n1 -gt $n2 ]
then
	echo $n1 is max and $n2 is min

else
	echo $n2 is max and $n1 is min
fi

