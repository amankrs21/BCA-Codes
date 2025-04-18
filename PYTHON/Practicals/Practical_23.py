# WAP to find length of string without using inbuilt function len() function.

# print(len(string))
# Logic to find length of string

def method1(string):
    return (len(string))

def method2(string):
    counter = 0
    for i in string:
        counter += 1
    return counter

def method3(string):
    counter = 0
    while string[counter:]:
        counter += 1
    return counter

def method4(string):
    if not string:
        return 0
    else:
        some_random_string = 'py'
        return ((some_random_string).join(string)).count(some_random_string) + 1
        # return (findLen(temp))

string_input = str(input("\n Enter any String : "))

print("\n Your Inputed String is -> ",string_input)

print("\n Length of the Given String Using Method 1 is -> ",method1(string_input))
print(" Length of the Given String Using Method 2 is -> ",method2(string_input))
print(" Length of the Given String Using Method 3 is -> ",method3(string_input))
print(" Length of the Given String Using Method 4 is -> ",method4(string_input))