# WAP to check entered number is positive, negative, zero, odd or even using if else 
# statement

import os
import time
os.system('cls')

num = int(input("\n Enter any Number : "))

#logic part
if num > 0:
    if num % 2 == 0:
        print("\n",num," is Positive and EVEN")
    else:
        print("\n",num," is Positive and ODD")

elif num < 0:
    if num % 2 == 0:
        print("\n",num," is Negetive and EVEN")
    else:
        print("\n",num," is Negetive and ODD")

else:
    print("\n Number is ZERO")

time.sleep(10)