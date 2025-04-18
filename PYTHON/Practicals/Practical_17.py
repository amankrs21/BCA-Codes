# WAP to print Fibonacci series/ sequence.

import os
import time
from print_color import print
os.system('cls')

limit = int(input("\n Enter the Limit to Print Fibonasis Series : "))
n1 = 0
n2 = 1
print("\n Fibonasis Series upto",limit,"is : \n","\n\t",n1,",",n2,end=", ",color='blue')

for i in range(2,limit):
    n3 = n1 + n2
    print(n3,end=", ",color='blue')
    n1 = n2
    n2 = n3
time.sleep(10)