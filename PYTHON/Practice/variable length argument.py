# program to print lowest among varable length argument

def minimum(*num):
    print("\n ",num)
    print(" Lowest Number is -> ",end="")
    print(min(num))

def maximum(*num):
    print("\n ",num)
    print(" Greatest Number is -> ",end="")
    print(max(num))

def ascending(*num):
    print("\n ",num)
    print(" Numbers in Ascending Order -> ",end="")
    print(sorted(num))

def decending(*num):
    print("\n ",num)
    # num_list = []
    # num_list.append(num)
    # print(num_list)
    dec = reversed(num)
    print(" Numbers in Decending Order -> ",end="")
    print(dec)

def multiply(*num):
    print("\n ",num)
    mul = 1
    for i in num:
        mul *= i
    print(" Multiplication of Given Numbers are -> ",mul)

minimum(2,5,1,4,8,9)
maximum(2,5,1,4,8,9)
ascending(2,5,1,4,8,9)
# decending(2,5,1,4,8,9)
multiply(1,2,3,4,5)

num__list = [2,4,5,7,8,1,6,9]
print(num__list)
rev = reversed(num__list)
print(rev)