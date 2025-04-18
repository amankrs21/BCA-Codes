# WAP to find whether inputted number is Armstrong or not.

import os
os.system('cls')

num = int(input("\n Enter Number to Check Armstrong : "))
num_copy = num
order = len(str(num))

temp = 0
while num > 0:
    rem = num % 10
    temp = temp + (rem ** order)
    num = num // 10

if temp == num_copy:
    print(num_copy,"is an ArmStrong Number")

else:
    print(num_copy,"is NOT an ArmStrong Number")
