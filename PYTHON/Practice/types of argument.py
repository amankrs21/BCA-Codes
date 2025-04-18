# program to understand concept of all types of Argument

# Required Argument
def required_arg(a,b,c):
    return(a*b-c)

# Keyword Argument
def keyword_arg(a,b,c):
    return (a*b-c)
    
# Default Argument
def default_arg(a,b,c=2):
    return (a*b-c)

# Variable Length Argument
def variable_length_arg(*num):
    sum = 0
    for i in num:
        sum += i
    return sum

print("\n Returned value by Required Argument is ->",required_arg(21,4,2))
print(" Returned value by Keyword Argument is ->",keyword_arg(b=4,a=21,c=2))
# Note in the default argument single default value is always passed at last
print(" Returned value by Keyword Argument is ->",default_arg(a=21,b=4))
print(" Returned value by Variable Length Argument is ->",variable_length_arg(1,2,3,4,21,5,6,7,8,9))