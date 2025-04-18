# Program to Check Number is Prime or Not

import os                           # This directory will help this program to clear the screen
from print_color import print       # This directory will help this program to Print the output in Different color
os.system('cls')                    # This code is for clear the screen

# Logic to check number is Prime or Not using UDF
def check_prime(num):
    flag = 0
    for i in range(2,num):
        if (num % i == 0):
            flag = 1
            break
    if flag == 1:
        return (num," is NOT PRIME NUMBER")
    else:
        return (num," is a PRIME NUMBER")
        
number = int(input("\n Enter Number to Check Prime : "))    # this code will take input from User

print(check_prime(number),color="blue")     # Calling of UDF inside print funtion