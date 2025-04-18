echo "Enter Number 1 : "
read n1

echo "Enter Number 2 : "
read n2

while [ true ]
do
	echo " +---------------------------+"
	echo " | Press 1 for Addition      |"
	echo " | Press 2 for Substraction  |"
	echo " | Press 3 for Multiplication|"
	echo " | Press 4 for Division      |"
	echo " | Press 5 for Modulo        |"
	echo " | Press 6 for Exit          |"
	echo " +---------------------------+\n"
	echo Enter Your Choice : 
	read ch

	clear
	case $ch in
		1) add=`expr $n1 + $n2`
			echo " Addition is - $add";;
		2) sub=`expr $n1 - $n2`
			echo " Substraction is - $sub";;
		3) mul=`expr $n1 \* $n2`
			echo " Multiplication is - $mul";;
		4) div=`expr $n1 / $n2`
			echo " Division is - $div";;
		5) mod=`expr $n1 % $n2`
			echo " Modulo is - $mod";;
		6) exit;;
	esac
	echo "\n\n\n\n"
done
