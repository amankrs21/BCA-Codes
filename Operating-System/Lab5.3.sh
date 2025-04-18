clear
echo Enter Basic Salary : 
read bs

hra=`expr $bs \* 10 / 100`
da=`expr $bs \* 15 / 100`
bs=`expr $bs + $hra + $da`

echo "\n Basic Salary is - $bs"
