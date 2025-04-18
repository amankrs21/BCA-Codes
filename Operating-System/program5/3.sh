echo Enter Your Basic Salary
read bs

hra=`expr $bs \* 10 / 100`

da=`expr $bs \* 15 / 100`

gs=`expr $hra + $bs + $da`

echo              Salary

echo hra         :           $hra
echo da          :           $da
echo gs          :           $gs
