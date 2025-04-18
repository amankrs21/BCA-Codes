# Program to check voting eligibility
import os
import time
from print_color import print
os.system('cls')

name = str(input("\n Please Enter Your Name : "))
age =  int(input(" Enter Your AGE : "))

print("\n==============================================")
print(" Name : ",name,color="red")
print(" Age  : ",age,color="blue")
if (age >= 18):
    print(" Your are Eligible For Voting",color="green")
else:
    print(" You are Not Eligible For voting")
if (age >= 100):
    print(" Please verfy your Voter ID card")
elif (age < 100 and age >= 60):
    print(" Super Senior Citizen...\r You can VOTE but Please GO in Senior Citizen Line")
elif (age < 60 and age >= 40):
    print(" Senior Citizen...\r Please Go in Que")
elif (age < 40 and age >= 18):
    print(" Youngsters...\r Please first help senior citizen in Voting")
print("==============================================")