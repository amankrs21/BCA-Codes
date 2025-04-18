# WAP to print list of Armstrong number from given interval.

import os
os.system('cls')

l_limit = int(input("\n Enter lower Limit to find Armstrong Number : "))
u_limit = int(input("\n Enter upper Limit to find Armstrong Number : "))

for i in range(l_limit,u_limit+1):
    sum = 0
    copy = i
    order = len(str(i))
    while copy>0:
        rem = copy % 10
        sum = sum + (rem ** order)
        copy = copy // 10

    if i == sum:
        print(i,end=", ")