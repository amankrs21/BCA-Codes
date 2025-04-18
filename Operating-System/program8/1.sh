echo Enter Choice
echo "1.. Insert"
echo "2.. View"
echo "3.. Count"
echo "4.. Search"
echo "5.. Delete"
echo "6.. Update"
echo "7.. Display judge name"
echo "8.. Display highest cases judged"

read choice

case $choice in
1) echo "Enter Judge Name :- "
read jname
echo "Enter Court Name :- "
read cname
echo "Enter City :- "
read city
echo "Enter Number of Cases judged :- "
read cases_judged
echo "Enter Total Number Of Cases :- "
read total_cases
echo $jname"|"$cname"|"$city"|"$cases_judged"|"$total_cases >> record_data.text
echo "Data Inserted Successfully" ;;

2) echo "Content of the file is :- "
cat record_data.text
;;

3) echo "Total Number of Records Are :- "
cat record_data.text | wc -l
;;

4) echo "Enter City Name :- "
read name 
grep -n -i $name record_data.text
;;

5) echo "Enter Judge Name :- "
read name
grep -v "$name" record_data.text > record_data1.text
cp record_data1.text record_data.text
;;

6) echo "Enter Judge Name :- "
read jname
echo "Enter Court Name :- "
read cname
echo "Enter City :- "
read city
echo "Enter Number of Cases judged :- "
read cases_judged
echo "Enter Total Number Of Cases :- "
read total_cases

grep -v $jname record_data.text > record_data1.text

cp record_data1.text record_data.text

echo $jname"|"$cname"|"$city"|"$cases_judged"|"$total_cases >> record_data.text

echo "Book Inserted Successfully.."
;;

7) awk -F "|" '{print $1}' record_data.text
;;

8) awk -F "|" -v max=0 '{if($5>max){content=$0;max=$5}}END{print content}' record_data.text
;;

*) echo "Enter Valid Choice"
;;

esac
