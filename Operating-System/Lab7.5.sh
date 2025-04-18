if [ $1 -eq 0 ]
then
	echo \"Enter Proper Parameter\"
else
	if [ -f $1 ]
	then
		echo \"file is Ordinary\"
	fi
fi
