# WAP to swap value of two variables with all five possibilities a. Using temp variable b. Using + 
# and ±Operator c. Using // and * Operator d. Using ^ (XOR) operator e. By using concept of 
# different value to multiple variable allocation concept

import os
# pip3 install random
import random
# pip install time
import time

os.system('cls')

a = int(input("\n Enter Number 1 : "))
b = int(input(" Enter Number 2 : "))

print("\n Orginal value of \n\t a -> ",a,"\n\t b -> ",b)

def Home():
    method1(a,b)
    method2(a,b)
    method3(a,b)
    method4(a,b)
    method5(a,b)

#method 1 of swapping
def method1(a,b):
    print("\n========================================================================")
    temp = a
    a = b
    b = temp
    print(" After Swapping using temp, value of \n\t a -> ",a, "\n\t b -> ",b)

#method 2 of swapping
def method2(a,b):
    a = a + b
    b = a - b
    a = a - b
    print("\n After Swapping using Addition and Substraction, value of \n\t a -> ",a, "\n\t b -> ",b)

#method 3 of swapping
def method3(a,b):
    a = a * b
    b = a // b
    a = a // b
    print("\n After Swapping using Multiplication and Division, value of \n\t a -> ",a, "\n\t b -> ",b)

#method 4 of swapping
def method4(a,b):
    a ^= b
    b ^= a
    a ^= b
    print("\n After Swapping using xor(^), value of \n\t a -> ",a, "\n\t b -> ",b)


# method 5 of swapping
def method5(a,b):
    a,b = b,a
    print("\n After Swapping using one line, value of \n\t a = ",a, "\n\t b = ",b)
    print("========================================================================")

print("\n Processing... PLEASE WAIT...")
time.sleep(5)    #it pause the program for 5 second
os.system('cls')
Home()