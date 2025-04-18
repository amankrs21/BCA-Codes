num1 = 100
def print_val():
    global num1
    num1 = 21
    num2 = 4
    print("\n Gloabal variable inside UDF is : ",num1)
    print(" Local Variable inside UDF is : ",num1)

print_val()
