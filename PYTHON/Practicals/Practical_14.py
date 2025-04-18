# WAP to find number is prime or not.

import os
os.system('cls')

num = int(input("\n Enter any Number : "))
flag = 0
for i in range(2,num):
    if(num%i==0):
        flag = 1
        break

if flag==1:
    print(num," is NOT Prime")

else:
    print(num," is PRIME")