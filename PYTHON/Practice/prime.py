def table(n):
    for i in range(1, 11):
        print("\t",n," * ",i," = ",n*i)

def check_prime(num):
    temp = 0
    if (num > 1):
        for i in range (2, num):
            if (num % i == 0):
                temp = 1
                break
            else:
                temp = 0
        if (temp == 0):
            print("\n ",num," is a Prime Number\n\n\n")
            table(num)
        else:
            print("\n ",num," is NOT a Prime Number")
    else:
        print("\n Error")

number = int(input("\n Enter a Positive Number to Check for Prime : "))
check_prime(number)
