echo "Enter any String to Check Palindrome : "
read str

reve=`echo $str | rev`

if [ $str = $reve ]
then
	echo "$str is Palindrome"
else
	echo "$str is Not Palindrome"
fi
