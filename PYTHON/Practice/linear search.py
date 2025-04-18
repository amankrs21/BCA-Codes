#  program to perform linear search by using python

def linearSearch(array,n,x):
    for i in range(0,n):
        if (array[i] == x):
            return i
        return -1

array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 21]
n = len(array)
x = 4
result = linearSearch(array, n, x)

if (result == -1):
    print(" Element Not Found")
else:
    print(" Element Found at index : ",result)