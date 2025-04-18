# Write a menu driven program which show use of all arithmetic operators and print its result.
# Take input form key board.

import os
os.system('cls')

print("\n\t----------------------------------")
print("\t Press 1 -> For Addition")
print("\t Press 2 -> For Substraction")
print("\t Press 3 -> For Multiplication")
print("\t Press 4 -> For Division")
print("\t Press 5 -> For Modulo")
print("\t Press 6 -> For Exponent")
print("\t Press 7 -> For Fllor Division")
print("\t----------------------------------\n")

ch = int(input(" Enter Your Choice : "))

num1 = int(input(" Enter Number 1 : "))
num2 = int(input(" Enter Number 2 : "))

if ch == 1:
    print(" Addition is : ",num1+num2)
elif ch == 2:
    print(" Substraction is : ",num1-num2)
elif ch == 3:
    print(" Multiplication is : ",num1*num2)
elif ch == 4:
    print(" Division is : ",num1/num2)
elif ch == 5:
    print(" Modulo is : ",num1%num2)
elif ch == 6:
    print(" Exponent is : ",num1**num2)
elif ch == 7:
    print(" Floor Division : ",num1//num2)
else:
    print(" Enter valid Input...")    
