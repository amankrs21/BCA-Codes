# Write a menu driven program to create simple calculator using user defined function.

def calculator():
    print("\n |---------------------------------|")
    print(" | Press 1 for Addition            |")
    print(" | Press 2 for Substraction        |")
    print(" | Press 3 for Multiplication      |")
    print(" | Press 4 for Division            |")
    print(" | Press 5 for Modulo              |")
    print(" | Press 6 for Exponential         |")
    print(" | Press 7 for Floor Division      |")
    print(" | Press 8 for Exit                |")
    print(" |---------------------------------|")
    choice = int(input("\n Enter Yoour Choice : "))
    num1 = int(input("\n Enter Number 1 : "))
    num2 = int(input(" Enter Number 2 : "))

    if choice == 1:
        print("\n Addition of",num1,"and",num2,"is -> ",num1+num2)
    elif choice == 2:
        print("\n Substraction of",num1,"and",num2,"is -> ",num1-num2)
    elif choice == 3:
        print("\n Multiplication of",num1,"and",num2,"is -> ",num1*num2)
    elif choice == 4:
        print("\n Division of",num1,"and",num2,"is -> ",num1/num2)
    elif choice == 5:
        print("\n Modulo of",num1,"and",num2,"is -> ",num1%num2)
    elif choice == 6:
        print("\n Exponents of",num1,"and",num2,"is -> ",num1**num2)
    elif choice == 7:
        print("\n Floor Division of",num1,"and",num2,"is -> ",num1//num2)
    elif choice == 8:
        exit()
    else:
        print("\n Please Enter valid Input")
        calculator()
    Choice = str(input("\n Want to do another calculation....[y|n] -> "))
    if Choice == 'y':
        calculator()
    else:
        exit()

calculator()