clear

echo "\n Enter any String Value : "
read "str"

len=`echo $str | wc -c`
rev=" "
while [ $len -gt 0 ]
do
	rev1=`echo $str | cut -c $len`
	rev=$rev$rev1
	len=`expr $len - 1`
done
echo "\n Reverse String - $rev"

# Second Method
reve=`echo $str | rev`
echo "\n Reversed String by 2nd Method - $reve"
