clear
printf "Enter any Single Character : "
IFS= read -r c
case $c in 
	([[:lower:]]) echo Lowercase Charcter;;
	([[:upper:]]) echo Uppercase Charcter;;
	([[:digit:]]) echo Digit ;;
esac
