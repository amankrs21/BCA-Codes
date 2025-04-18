from art import *
from print_color import print
import time
import os
os.system('cls')


# program to print floyed triangle using different method
tprint("Floyed Triangle")
print("\nUsing Nested For Loop (* pattern)\n")
for i in range(5):
    for j in range(i+1):
        print("*",color="blue",end=" ")
        time.sleep(0.35)
    print("\r")     # (\r) is used to print in new Line similar like (\n)
                    #  but it (\r) gives proper space
time.sleep(2)

# os.system('cls')
print("\nUsing Nested While Loop (number pattern) \n")
i = 1
while i < 6:
    j = 1
    while j <= i:
        print(i,color="red",end=" ")
        j += 1
        time.sleep(0.35)
    print("\r")
    i += 1
time.sleep(2)

# os.system('cls')
print("\n(Number Pattern... 2) \n")
for i in range(1,6):
    for j in range(1,i+1):
        print(j,color='purple',end=" ")
        time.sleep(0.35)
    print("\r")
time.sleep(2)

# os.system('cls')
print("\n(Alphabets Pattern)\n")
for i in range(5):
    ch = chr(65 + i)
    for j in range(i+1):
        print(ch,color='green',end=" ")
        time.sleep(0.35)
    print("\r")
time.sleep(2)

# os.system('cls')
print("\n(Alphabets Pattern... 2)\n")
for i in range(5):
    for j in range(i+1):
        ch = chr(65+j)
        print(ch,color='yellow',end=" ")
        time.sleep(0.35)
    print("\r")
time.sleep(5)

os.system('cls')
# Program to print Triangle Patters with using star(*), numbers and Alphabets
tprint("TRIANGLE")
print("\n(Star Pattern Triangle)")
for i in range(5):
    for k in range (5-i):
        print(end=" ")
    for j in range(i+1):
        print("*",end=" ",color="blue")
        time.sleep(0.35)
    print("\r")

print("\n(Number Pattern Triangle)")
for i in range(1,6):
    for k in range(1,6-i):
        print(end=" ")
    for j in range(1,i+1):
        print(i,end=" ",color="red")
        time.sleep(0.35)
    print("\r")

print("\n(Number Pattern Triangle...2)")
for i in range(1,6):
    for k in range(1,6-i):
        print(end=" ")
    for j in range(1,i+1):
        print(j,end=" ",color="purple")
        time.sleep(0.35)
    print("\r")

print("\n(Alphabets Pattern Triangle)")
for i in range(5):
    for k in range(5-i):
        print(end=" ")
    for j in range(i+1):
        print(chr(65+i),end=" ",color="green")
        time.sleep(0.35)
    print("\r")

print("\n(Alphabets Pattern Triangle...2)")
for i in range(5):
    for k in range(5-i):
        print(end=" ")
    for j in range(i+1):
        print(chr(65+j),end=" ",color="yellow")
        time.sleep(0.35)
    print("\r")
time.sleep(30)