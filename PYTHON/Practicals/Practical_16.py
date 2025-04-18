# WAP to find factorial of given number.

import os
import time
from print_color import print
os.system('cls')

num = int(input("\n Enter Number to find Factorial : "))
fac = 1
if num == 0:
    fac = 1
elif num == 1:
    fac == 1
else:
    for i in range(1,num+1):
        fac = fac * i

print("\n Factorial of Number",num,"is : ",fac,color='blue')
time.sleep(10)