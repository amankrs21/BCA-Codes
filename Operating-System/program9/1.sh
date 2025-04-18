echo "1..View Records"
echo "2..Add Records"
echo "3..Delete Records"
echo "4..Count Records"
echo "5..Update"

read choice

case $choice in

1) cat library.txt
;;

2) echo "Enter Account Number :- "
read acc_no
echo "Enter Title of The Book :- "
read title
echo "Enter Author Name of The Book :- "
read author
echo "Enter Edition Of The Book :- "
read edition
echo "Enter Publisher of The Book :- "
read publisher

echo $acc_no"|"$title"|"$author"|"$edition"|"$publisher >> library.txt

echo "Record Inserted Successfully..."
;;

3) echo "Enter Title Of the Book"
read name
grep -i -v $name library.txt > library1.txt
cp library1.txt library.txt

echo "Record Deleted Successfully"
;;

4) echo "Total Number of Records are :- "
cat library.txt | wc -l
;;

5) 
echo "Enter Judge Name :- "
read name


esac
