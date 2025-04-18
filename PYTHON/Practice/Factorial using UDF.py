# program to find factorial using Recursive funtion

number = int(input("\n Enter Number to find Facetorial : "))

def factorial(num):
    if num == 1:
        return 1
    else:
        return (num * factorial(num-1))     # when funtion call again and again value of num will be decreased by 1 everytime

print("\n Factorial of",number,"is -> ",factorial(number))