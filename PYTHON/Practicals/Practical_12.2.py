# WAP to find minimum number from 3 numbers

import os
os.system('cls')

num = []

for i in range(0,3):
    ele = int(input(" Enter the Elements : "))
    num.append(ele)

print("\n Your input is : ",num)

min = num[0]
for i in range(0,3):
    if min > num[i]:
        min = num[i]

print("\n Smallest element from your Input is ",min)