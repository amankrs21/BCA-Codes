clear
while true
do
echo "\n\n\n"
echo " +--------------------------------------------+"
echo " | Press 1 for Insert Records                 |"
echo " | Press 2 for View Records                   |"
echo " | Press 3 for Count Records                  |"
echo " | Press 4 for Search Records                 |"
echo " | Press 5 for Delete Records                 |"
echo " | Press 6 for Update Records                 |"
echo " | Press 7 for Display Judge Name             |"
echo " | Press 8 for Display highest Cases judged   |"
echo " + Press 9 for Exit                           |"
echo " +--------------------------------------------+"

printf "\n Enter Your Choice : "
read choice

case $choice in
1) 
	printf "\n Enter Judge Name : "
	read jname
	printf "\n Enter Court Name : "
	read cname
	printf "\n Enter City : "
	read city
	printf "\n Enter Number of Cases judged : "
	read cases_judged
	printf "\n Enter Total Number Of Cases : "
	read total_cases
	echo $jname"|"$cname"|"$city"|"$cases_judged"|"$total_cases >> record_data.text
	echo "Data Inserted Successfully" 
	;;

2) 
	echo "Content of the file is :- "
	cat record_data.text 
	;;

3) 
	echo "Total Number of Records Are :- "
	cat record_data.text | wc -l 
	;;

4) 
	echo "Enter City Name :- "
	read name 
	grep -n -i $name record_data.text
	;;

5) 
	printf "\n Enter Judge Name : "
	read name
	grep -v "$name" record_data.text > record_data1.text
	cp record_data1.text record_data.text
	;;

6) 
	printf "\n Enter Judge Name :- "
	read jname
	printf "\n Enter Court Name :- "
	read cname
	printf "\n Enter City :- "
	read city
	printf "\n Enter Number of Cases judged :- "
	read cases_judged
	printf "\n Enter Total Number Of Cases :- "
	read total_cases

	grep -v $jname record_data.text > record_data1.text

	cp record_data1.text record_data.text

	echo $jname"|"$cname"|"$city"|"$cases_judged"|"$total_cases >> record_data.text

	echo "Book Inserted Successfully.."
	;;

7) 
	awk -F "|" '{print $1}' record_data.text
	;;

8) 
	awk -F "|" -v max=0 '{if($5>max){content=$0;max=$5}}END{print content}' record_data.text
	;;
	
9)
	exit;;

*) 
	echo "Enter Valid Choice"
	;;

esac
done
