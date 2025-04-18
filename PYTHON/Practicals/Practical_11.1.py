#WAP to find number is odd or even

import os
os.system('cls')

num = int(input(" Enter any Number to Check EVEN or ODD : "))

if num % 2 == 0:
    print(num," is EVEN")
else:
    print(num," is ODD")