import os
from print_color import print


def menu():
    os.system('cls')

    print("+======================================+",color='green')
    print("| Press 1 for AND Operator(&)          |",color='cyan')
    print("| Press 2 for OR Operator(|)           |",color='cyan')
    print("| Press 3 for XOR Operator(^)          |",color='cyan')
    print("| Press 4 for NOT Operator(~)          |",color='cyan')
    print("| Press 5 for Left Shift Operator(<<)  |",color='cyan')
    print("| Press 6 for Right Shift Operator(>>) |",color='cyan')
    print("| Press 7 for Exit                     |",color='cyan')
    print("+======================================+",color='green')
    choice = int(input("\n Enter Your Choice : "))

    if (choice == 1):
        and_opr()
    elif (choice == 2):
        or_opr()
    elif (choice == 3):
        xor_opr()
    elif (choice == 4):
        not_opr()
    elif (choice == 5):
        left_opr()
    elif (choice == 6):
        right_opr()
    elif (choice == 7):
        exit()
    else:
        print("\n Please Enter valid Choice...")

    repeat = input("\n Want to GO Back\n\t(yes/no) -> ")
    if repeat == 'yes':
        menu()
    else:
        exit()

def and_opr():
    num1 = int(input("\n Enter Number 1 : "))
    num2 = int(input(" Enter Number 2 : "))
    print("\n ",num1,"AND(&)",num2," --> ",num1&num2)
def or_opr():
    num1 = int(input("\n Enter Number 1 : "))
    num2 = int(input(" Enter Number 2 : "))
    print("\n ",num1,"OR(|)",num2," --> ",num1|num2)
def xor_opr():
    num1 = int(input("\n Enter Number 1 : "))
    num2 = int(input(" Enter Number 2 : "))
    print("\n ",num1,"XOR(^)",num2," --> ",num1^num2)
def not_opr():
    num = int(input("\n Enter any Number : "))
    print("\n NOT(~) of ",num,"is --> ",(~num))
def left_opr():
    num1 = int(input("\n Enter Number 1 : "))
    num2 = int(input(" Enter Number 2 : "))
    print("\n ",num1,"Left Shift(<<)",num2," --> ",num1<<num2)
def right_opr():
    num1 = int(input("\n Enter Number 1 : "))
    num2 = int(input(" Enter Number 2 : "))
    print("\n ",num1,"Right Shift(>>)",num2," --> ",num1>>num2)

menu()