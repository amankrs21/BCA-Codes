echo Enter String
read str
len=`echo $str | awk '{print length}'`
echo Length of the String is $len
