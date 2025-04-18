# WAP to find maximum (largest) number among three numbers.

import os
import time
os.system('cls')

num = []

#taking input from user using for loop
for i in range(0,3):
    ele = int(input(" Enter the Elements : "))
    num.append(ele)     #adding elements

print("\n Your Input is : ",num)

max = num[0]
for i in range(0,3):
    if(max < num[i]):
        max = num[i]

print("\n Maximum elements from your Input is --> ",max)
time.sleep(3)
# os.system('cls')

print("\n\t By using Second Method...")
num1 = int(input(" Enter Number 1 : "))
num2 = int(input(" Enter Number 2 : "))
num3 = int(input(" Enter Number 3 : "))

if num1>num2 and num1>num3:
    print(num1,"is Greater")

elif num2>num3 and num2>num1:
    print(num2,"is Greater")

elif num3>num2 and num3>num1:
    print(num3,"is Greater")
