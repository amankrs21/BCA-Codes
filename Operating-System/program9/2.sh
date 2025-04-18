echo "1..Insert"
echo "2..View"
echo "3..Count"
echo "4..Delete"
echo "5..Search"

read choice

case $choice in
while [ $choice -eq 0 ]
do

1) echo "Enter Account Number :- "
read account_no
echo "Enter Author_Name :- "
read author_name
echo "Enter Title :- "
read title
echo "Enter Publisher Name :- "
read publisher_name
echo "Enter Edition :- "
read edition

echo $account_no"|"$author_name"|"$title"|"$publisher_name"|"$edition >> data.txt

echo "Data Inserted Successfully.."
;;

2) echo "Books are :- "
cat data.txt
;;

3) echo "Number of Books are :- "
cat data.txt | wc -l
;;

4) echo "Enter Author Name :- "
read name
grep -v $name data.txt > data1.txt
cp data1.txt data.txt
echo "Entry Deleted Successfullly.."
;;

5) echo "Enter Author Name :- "
read name
echo "Record is :- "
grep -i -n $name data.txt

;;
done
esac
