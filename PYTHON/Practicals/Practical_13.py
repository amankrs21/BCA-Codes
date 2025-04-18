# WAP to print multiplication table in proper format for entered number using for loop as well 
# as while loop.

import os

from print_color import print   # be sure to install print_color module

# os.system('cls')

num = int(input("\n Enter number to Find Table : "))

# Table by using FOR LOOP
print("\n Table by using FOR LOOP",color='red')
print("\t==============")
for i in range(1,11):
    print("\t ",num, "*", i, "=",num*i,color='purple')
print("\t===============")

#Table by using WHILE LOOP
print("\n Table by usnig WHILE LOOP",color='green')
print("\t==============")
i = 1
while i < 11:
    print("\t ",num, "*", i, "=",num*i,color='blue')
    i += 1
print("\t===============")
