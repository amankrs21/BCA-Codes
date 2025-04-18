# WAP to program to create tuple and perform operation like searching, find length, slicing, 
# also change first and last or entered index element by using concept of slicing and 
# concatenation.

def search():
    choose = input("\n\n Which type of Data wants to add in the List\n\t(int/float/str) -> ")
    if choose == 'int':
        element = int(input("\n\n Enter Element for Search : "))
    elif choose == 'float':
        element = float(input("\n\n Enter Element for Search : "))
    elif choose == 'str':
        element = str(input("\n\n Enter Element for Search : "))
    else:
        print("\n\n Please enter valid input")
    flag = 1
    for i in range(len(Tuple)):
        if Tuple[i] == element:
            flag = 0
            break
    if flag == 0:
        print("\n Element Found")

def menu():
    global Tuple
    Tuple = (2,3,4,21,25,214,421,'hello','tesla','audi','BMW','Jiva',21.4)
    print("\n\n Tuple is : ",Tuple)

    print("\n +=====================================================+")
    print(" | Press 1 For Searching Operation                     |")
    print(" | Press 2 For Finding Length                          |")
    print(" | Press 3 For Slicing Operation                       |")
    print(" | Press 4 For Convert First Character in upper case   |")
    print(" | Press 5 For Convert Last Character in upper case    |")
    print(" | Press 6 For Concatenation                           |")
    print(" | Press 7 For Exit                                    |")
    print(" +=====================================================+")

    ch = int(input("\n Enter Your Choice -> "))
    if ch == 1:
        search()
    elif ch == 2:
        print("\n Length of the Given Tuple is -> ",len(Tuple))
    elif ch == 3:
        print("\n By Slicing, Tuple in the Reverse Form -> ",Tuple[::-1])
        print("\n By Slicing, First 5 Elements of Tuple -> ",Tuple[:5:])
        print("\n By Slicing, Last 5 Elements of Tuple -> ",Tuple[-1:-6:-1])
        print("\n By Slicing, Printing only hello in reverse form -> ",Tuple[7][::-1])
    elif ch == 4:
        print("\n Converting First element of hello as Captial -> ",Tuple[7][0].upper() + Tuple[7][1::])
    elif ch == 5:
        print("\n Converting Last element of tesla as Captial -> ",Tuple[8][0:4:] + Tuple[8][4].upper())
    elif ch == 6:
        print("\n By Concatenation, adding tesla and audi from Tuple -> ",Tuple[8]+Tuple[9])
    elif ch == 7:
        exit()
    else:
        print("\n Please Enter Valid Choice")
        menu()
    ch2 = input("\n\n Want to GO Back\n\t(yes/no) -> ")
    if ch2 == 'yes':
        menu()
    else:
        exit()

menu()
