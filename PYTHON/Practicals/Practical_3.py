# WAP to take basic details of employee like name, phone number, email id, salary,
# designation, address, blood group and birth date through keyboard and print it in proper
# format

# pip install os
import os

Employee_name = str(input("\n\t Employee Name : ")) 
Phone_Number = int(input("\t Phone Number : "))
Email_ID = str(input("\t Email ID : "))
Salary = int(input("\t Salary : "))
Designation = str(input("\t Designation : "))
Address = str(input("\t Address : "))
Blood_Group = str(input("\t Blood Group : "))
Birtdate = str(input("\t Birth Date : "))

try:
    os.system('cls')
except:
    os.system('clear')

print("\n-------------------------------------------")
print("\tEmployee Name -> ",Employee_name)
print("\tPhone Number -> ",Phone_Number)
print("\tEmail ID -> ",Email_ID)
print("\tSalary -> ",Salary)
print("\tDesignation -> ",Designation)
print("\tAddress -> ",Address)
print("\tBlood Group -> ",Blood_Group)
print("\tBirth Date -> ",Birtdate)
print("-------------------------------------------\n")
