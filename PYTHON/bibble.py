# Program to use of Bubble Sort

def array_print(a, s):
    # print(a)
    for i in range(0,s):
        print(" ",a[i],end=", ")
    print()

def bubble(a, s):
    temp = 0
    for i in range(0, s-1):
        for j in range(0, s-1-i):
            if(a[j] > a[j+1]):
                temp = a[j]
                a[j] = a[j+1]
                a[j+1] = temp
    array_print(a, s)

size = int(input("\n Enter Size of Array : "))

array = [size]

for i in range(0, size):
    ele = int(input(" Enter Element of Array : "))
    array.append(ele)

print("\n Original Elements of Array is :- ")
array_print(array, size)

print("\n After Sorting Array Elements are :- ")
bubble(array, size)
# array.sort()
# print(array)
