# WAP to find sum of natural numbers using for loop as well as while loop.

import os
os.system('cls')

limit = int(input("\n Enter the Limit of Natural Number to ADD : "))

sum = 0
for i in range(1,limit+1):
    sum += i
print("\n Sum of Natural Number using For Loop --> ",sum)

sum = 0
j = 1
while j < limit+1:
    sum += j
    j += 1
print("\n Sum of Natural Number using While Loop --> ",sum)
