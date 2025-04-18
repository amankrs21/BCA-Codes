import os
import time
import colorterminal
from print_color import print
from art import *
os.system('cls')

name = str(input("\n Enter the Name of Student : "))
enrollment = int(input(" Enter Enrollment ID : "))
department = str(input(" Enter Department : "))
semester = str(input(" Enter Semester : "))
batch = str(input(" Enter Batch : "))

sub1 = str(input("\n Enter Subject 1 Name : "))
sub2 = str(input(" Enter Subject 2 Name : "))
sub3 = str(input(" Enter Subject 3 Name : "))
sub4 = str(input(" Enter Subject 4 Name : "))
sub5 = str(input(" Enter Subject 5 Name : "))

print("\n Maximum marks is 50 for each subject")
print(" Enter the Marks of ",sub1,end=" :")
marks1 = int(input(" "))
print(" Enter the Marks of ",sub2,end=" :")
marks2 = int(input(" "))
print(" Enter the Marks of ",sub3,end=" :")
marks3 = int(input(" "))
print(" Enter the Marks of ",sub4,end=" :")
marks4 = int(input(" "))
print(" Enter the Marks of ",sub5,end=" :")
marks5 = int(input(" "))

percentage = ((marks1+marks2+marks3+marks4+marks5)/250)*100

if percentage <= 100 and percentage >= 75:
    performance = 'Distiction'
elif percentage < 75 and percentage >= 60:
    performance = 'First Class'
elif percentage < 60 and percentage >= 50:
    performance = 'Second Class'
elif percentage < 50 and percentage >= 40:
    performance = 'Third Class'
else:
    performance = 'Fail'

os.system('cls')
print("\n\n\n\n\n\n\t Your Marksheet is Preparing... wait for 5 Second")
time.sleep(5)
os.system('cls')

# Now printing the Marksheet
tprint("\nParul  University")
print("   ================================================")
print("\t Name            :  ",name)
print("\t Enrollment ID   :  ",enrollment)
print("\t Department      :  ",department)
print("\t Batch           :  ",batch)
print("\t Semester        :  ",semester)
print("\t Percentage      :  ",percentage)
print("\t Passing Class   :  ",performance)
print("\n\t  Subjects -->  Marks",color='red')
print("\t--------------------------")
print("\t ",sub1,"  --> ",marks1,color='blue')
print("\t ",sub2,"  --> ",marks2,color='purple')
print("\t ",sub3,"  --> ",marks3,color='green')
print("\t ",sub4,"  --> ",marks4,color='yellow')
print("\t ",sub5,"  --> ",marks5,color='cyan')
print("   ================================================")
time.sleep(30)