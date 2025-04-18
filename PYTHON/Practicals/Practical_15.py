# WAP to print list of prime number from given interval.

import os
os.system('cls')

limit = int(input("\n Enter the Limit to find Prime Number : "))

print("\n Prime Numbers between 1 to ",limit)
#logic part
flag = 0
for i in range(1,limit):
    for j in range(2,i):
        if(i%j==0):
            flag = 1
            break
        else:
            flag = 0
    if flag==0:
        print("\t",i)