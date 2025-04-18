clear

echo "\n Enter any String : "
read "str"

len=`echo $str | wc -c`
len=`expr $len - 1`

substr="$($str:1:3)"

#finding the Place of a Character
#echo "\n Enter Character to Search : "
#read c
# location=$($str %% $c *)

echo "\n Length of the String is - $len"
echo "\n Substring of that String is - $substr"
# echo "\n Location of the Character - ${#location}"
