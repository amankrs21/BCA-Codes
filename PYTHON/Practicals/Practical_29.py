# WAP to create list and perform operation like searching element, adding element, update 
# element, removing element, traverse list in both direction left to right and right to left by 
# passing list as argument in user defined function.


import os
from print_color import print

def choice():
    ch = input("\n\n want to GO Back\n[y|n] -> ")
    if ch == 'y':
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
    print("| Press 4 for Update Element           |",color='cyan')
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
    print("\n List is : ",List,color='yellow')
    element = int(input(" Enter the Index Value to Search the Element : "))
    print("\n\n Element at Index Value",element,"is -> ",List[element],color='blue')
    choice()

def Append(List):
    os.system('cls')
    choose = input("\n\n Which type of Data wants to add in the List\n\t(int/float/str) -> ")
    if choose == 'int':
        element = int(input("\n\n Enter Element to add in List : "))
    elif choose == 'float':
        element = float(input("\n\n Enter Element to add in List : "))
    elif choose == 'str':
        element = str(input("\n\n Enter Element to add in List : "))
    else:
        print("\n\n Please enter valid input")
        Append(List)
    List.append(element)
    print("\n New List is :\n ",List,color='yellow')
    choice()

def Insert(List):
    os.system('cls')
    index = int(input("\n Enter Index Number where to add Element : "))
    choose = input("\n Which type of Data wants to add in the List\n\t(int/float/str) -> ")
    if choose == 'int':
        element = int(input("\n\n Enter Element to Insert in List : "))
    elif choose == 'float':
        element = float(input("\n\n Enter Element to Insert in List : "))
    elif choose == 'str':
        element = str(input("\n\n Enter Element to Insert in List : "))
    else:
        print("\n\n Please enter valid Input")
        Insert(List)
    List.insert(index,element)
    print("\n\n New List is :\n ",List,color='yellow')
    choice()

def Update(List):
    os.system('cls')
    index = int(input("\n Enter Index Number where to update Element : "))
    choose = input("\n Which type of Data wants to add in the List\n\t(int/float/str) -> ")
    if choose == 'int':
        element = int(input("\n Enter Element to update in List : "))
    elif choose == 'float':
        element = float(input("\n Enter Element to update in List : "))
    elif choose == 'str':
        element = str(input("\n Enter Element to update in List : "))
    else:
        print("\n Please enter valid Input")
        Update(List)
    List[index] = element
    print("\n\n New List is :\n ",List,color='yellow')
    choice()

def Remove(List):
    os.system('cls')
    index = int(input("\n\n Enter Index Number where to Remove Element : "))
    List.remove(List[index])
    print("\n\n New List is :\n ",List,color='yellow')
    choice()

def Left(List):
    print("\n\n List From Left to Right is : ",List[::],color='red')
    choice()

def Right(List):
    print("\n\n List From Right to Left is : ",List[::-1],color='red')
    choice()

menu()
