# Write a Menu driven program to perform all Arithmetic operation using UDF
import os
from print_color import print       #it is used to print statements in different color
os.system('cls')                    #it is used to clear the output screen

print("\t*********************************",color="blue")
print("\t   Press 1 for Addition",color="red")
print("\t   Press 2 for Substraction",color="red")
print("\t   Press 3 for Multiplication",color="red")
print("\t   Press 4 for Division",color="red")
print("\t   Press 5 for Modulo",color="red")
print("\t   Press 6 for Exponent",color="red")
print("\t   Press 7 for Floor Division",color="red")
print("\t*********************************",color="blue")
choice = int(input(" Enter Your Choice : "))

def add(a,b):
    print("\n|| Addition is --> ",a+b,"      ||",color="green")
def sub(a,b):
    print("\n|| Substraction is --> ",a-b,"  ||",color="green")
def multi(a,b):
    print("\n|| Multyplication is --> ",a*b,"||",color="green")
def div(a,b):
    print("\n|| Division is --> ",a/b,"       ||",color="green")
def mod(a,b):
    print("\n|| Modulo is --> ",a%b,"        ||",color="green")
def exp(a,b):
    print("\n|| Exponent is --> ",a**b,"      ||",color="green")
def fl_div(a,b):
    print("\n|| Floor Division is --> ",a//b,"||",color="green")


if (choice <= 7):       #first it will check choice condition then it will take input from user and then enter into UDF
    num1 = int(input("\n Enter Number 1 : "))
    num2 = int(input(" Enter Number 2 : "))
    print("\n##############################",color='yellow',end=" ")
    if choice == 1:
        add(num1,num2)
    elif choice == 2:
        sub(num1,num2)
    elif choice == 3:
        multi(num1,num2)
    elif choice == 4:
        div(num1,num2)
    elif choice == 5:
        mod(num1,num2)
    elif choice == 6:
        exp(num1,num2)
    elif choice == 7:
        fl_div(num1,num2)
    print("##############################",color='yellow')
else:
    print("\n Please enter valid Choice...",color='yellow')
