# WAP which show how string is immutable by passing string as argument in user defined function.


def change_string(variable):
    variable = 'How'
    print("\n Printing the String inside function : ",variable)

variable1 = 'Hello'
change_string(variable1)

print(" Printing the String outside the Function : ",variable1)
