# To run this Program pass two value as argument like (sh Lab5.5.sh 2 3)

clear

if [ $1 -gt $2 ]
then
	echo "\n Number 1 is Greater, i.e., $1"
else
	echo "\n Number 2 is Greater, i.e., $2"
fi
