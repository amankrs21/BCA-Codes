# WAP to find maximum number from 5 numbers

import os
os.system('cls')

num = []       #list

#taking input from user
for i in range(0,5):
    ele = int(input(" Enter the Elements : "))
    num.append(ele)     #adding elements

print(" Your input is : ",num)

#logic part
max = num[0]
for i in range(0,5):
    if(max < num[i]):
        max = num[i]

print("\n Maximum among your input is : ",max)
