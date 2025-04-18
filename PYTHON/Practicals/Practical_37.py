# WAP to perform all set operation like intersection, union, difference, symmetric difference 
# and other operation.

import os

def menu():
    os.system('cls')
    print("\n\n\n\n\n Given Set 1 is -> ",set1)
    print(" Given Set 2 is -> ",set2)
    print("\n +-------------------------------------------+")
    print(" | Press 1 For find SET Intersection         |")
    print(" | Press 2 For find SET Union                |")
    print(" | Press 3 For find SET Difference           |")
    print(" | Press 4 For find SET Symmetric Difference |")
    print(" | Press 5 For Searching Operation           |")
    print(" | Press 6 For Exit                          |")
    print(" +-------------------------------------------+")

    ch = int(input("\n Enter Your Choice -> "))
    if ch == 1:
        print("\n Intersection of Set1 and Set2 is -> ",set1&set2)      # intersection(&) is used to find the intersection of sets
    elif ch == 2:
        print("\n Union of Set1 and Set2 is -> ",set1|set2)             # union(|) is used to find the union of sets
    elif ch == 3:
        print("\n Difference of Set1 and Set2 is -> ",set1-set2)        # difference(-) is used to find the difference of sets
    elif ch == 4:
        print("\n Symmetric Difference of Set1 and Set2 is -> ",set1^set2)  # symmetric_difference(^) is used to find the difference of sets
    elif ch == 5:
        find = input("\n Enter Element to Find : ")
        if find in set1 and find in set2:
            print("\n Element Found in Both the Set")
        elif find in set1:
            print("\n Element Found in the Set 1")
        elif find in set2:
            print("\n Element Found in the Set 2")
        else:
            print("\n Element NOT Found")
    elif ch == 6:
        os.system('cls')
        exit()
    else:
        print("\n Please Enter Valid Input")
        menu()
        
    ch2 = input("\n Want to GO Back\n\t(yes/no) -> ")
    if ch2 == 'yes':
        menu()
    else:
        os.system('cls')
        exit()

global set1
set1 = {'Mango', 'Banana', 'Guava', 'Pineapple', 'Apple'}
global set2
set2 = {'Apple', 'Litchi', 'Banana', 'Mango', 'Grapes'}

menu()
