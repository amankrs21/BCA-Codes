# Write a menu driven program which shows the use of string inbuilt function and its 
# operation like concatenation, repletion and slicing.

def menu(str1):
    print("\n\n +------------------------------------------+")
    print(" | Press 1 for Find the Length of String    |")
    print(" | Press 2 for Convert String in uppercase  |")
    print(" | Press 3 for Convert String in lowercase  |")
    print(" | Press 4 for find substring using slicing |")
    print(" | Press 5 for Concatenation of String      |")
    print(" | Press 6 for Repetion of String           |")
    print(" | Press 7 for Exit                         |")
    print(" +------------------------------------------+")

    ch = int(input("\n Enter Your Choice -> "))
    if ch == 1:
        print("\n Length of the String is -> ",len(str1))
    elif ch == 2:
        print("\n String in Upper Case -> ",str1.upper())
    elif ch == 3:
        print("\n String in Lower Case -> ",str1.lower())
    elif ch == 4:
        print("\n Slicing of String -> ",str1[2:5])
    elif ch == 5:
        str2 = input("\n Enter String for Concatenation : ")
        print("\n Concatenation of the Strings -> ",str1 + str2)
    elif ch == 6:
        repe = int(input("\n Enter How many times you Reapeat the String : "))
        print("\n Repetion of String -> ",str1 * repe)
    elif ch == 7:
        exit()
    else:
        print("\n Please Enter Valid Choice")
    ch2 = input("\n Want to GO Back...[y|n] -> ")
    if ch2 == 'y':
        menu(str1)
    else:
        exit()

str1 = input(" Enter the String : ")
menu(str1)
