# WAP to create list and perform operation like searching element, adding element, update 
# element, removing element, traverse list in both direction left to right and right to left by 
# passing list as argument in user defined function.

import os
from print_color import print

def choice():
    ch = input("\n\n want to do another operation\n\t(yes/no) -> ")
    if ch == 'yes':
        menu()
    else:
        exit()

def menu():
    os.system('cls')
    global List
    List = [2,3,4,21,25,214,421,'hello','audi','BMW','Jiva']
    print("\n\n List is : ",List,color='yellow')
    print("\n+======================================+",color='green')
    print("| Press 1 for Searching                |",color='cyan')
    print("| Press 2 for Append Element           |",color='cyan')
    print("| Press 3 for Insert Element           |",color='cyan')
    print("| Press 4 for Update element           |",color='cyan')
    print("| Press 5 for Remove Element           |",color='cyan')
    print("| Press 6 for List Left to Right       |",color='cyan')
    print("| Press 7 for List Right to Left       |",color='cyan')
    print("+======================================+",color='green')
    choice = int(input("\n Enter Your Choice : "))

    if (choice == 1):
        searching(List)
    elif (choice == 2):
        Append(List)
    elif (choice == 3):
        Insert(List)
    elif (choice == 4):
        Update(List)
    elif (choice == 5):
        Remove(List)
    elif (choice == 6):
        Left(List)
    elif (choice == 7):
        Right(List)
    else:
        print("\n Please Enter valid Choice...")
        menu()

def searching(List):
    os.system('cls')
    print(" List is : ",List,color='yellow')
    element = int(input(" Enter the Index Value to Search the Element : "))
    print(" Element at Index Value",element,"is -> ",List[element],color='blue')
    choice()

def Append(List):
    os.system('cls')
    choose = input(" Which type of Data wants to add in the List\n\t(int/float/str) -> ")
    if choose == 'int':
        element = int(input(" Enter Element to add in List : "))
    elif choose == 'float':
        element = float(input(" Enter Element to add in List : "))
    elif choose == 'str':
        element = str(input(" Enter Element to add in List : "))
    else:
        print(" Please enter valid input")
        Append(List)
    List.append(element)
    print("\n New List is :\n ",List,color='yellow')
    choice()

def Insert(List):
    os.system('cls')
    index = int(input(" Enter Index Number where to add Element : "))
    choose = input(" Which type of Data wants to add in the List\n\t(int/float/str) -> ")
    if choose == 'int':
        element = int(input(" Enter Element to Insert in List : "))
    elif choose == 'float':
        element = float(input(" Enter Element to Insert in List : "))
    elif choose == 'str':
        element = str(input(" Enter Element to Insert in List : "))
    else:
        print(" Please enter valid Input")
        Insert(List)
    List.insert(index,element)
    print("\n New List is :\n ",List,color='yellow')
    choice()

def Update(List):
    os.system('cls')
    index = int(input(" Enter Index Number where to update Element : "))
    choose = input(" Which type of Data wants to add in the List\n\t(int/float/str) -> ")
    if choose == 'int':
        element = int(input(" Enter Element to update in List : "))
    elif choose == 'float':
        element = float(input(" Enter Element to update in List : "))
    elif choose == 'str':
        element = str(input(" Enter Element to update in List : "))
    else:
        print(" Please enter valid Input")
        Update(List)
    List[index] = element
    print("\n New List is :\n ",List,color='yellow')
    choice()

def Remove(List):
    os.system('cls')
    index = int(input(" Enter Index Number where to Remove Element : "))
    List.remove(List[index])
    print("\n New List is :\n ",List,color='yellow')
    choice()

def Left(List):
    print("\n List From Left to Ridgt is : ",List[::],color='red')
    choice()

def Right(List):
    print("\n List From Left to Right is : ",List[::-1],color='red')
    choice()

menu()
