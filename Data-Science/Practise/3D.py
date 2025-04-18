import numpy as np

# 3-D array
arr1 = np.array([[[1,2,3],[4,5,6]],[[10,11,12],[14,15,16]],[[100,34,101],[12,451,120]]])
arr2 = np.array([[[1,2,3],[4,5,6]],[[10,11,12],[14,15,16]],[[100,34,101],[12,451,120]]],dtype=complex)
arr3 = np.array([[[1,2,3],[4,5,6]],[[10,11,12],[14,15,16]],[[100,34,101],[12,451,120]]],dtype=float)

# Printing 3-D arrays
print("Your 3-D array is-\n",arr1)
print("Your 3-D array is-\n",arr2)
print("Your 3-D array is-\n",arr3)

# To check the dimension
print("Dimension of the array is-",arr1.ndim)
print("Dimension of the array is-",arr2.ndim)
print("Dimension of the array is-",arr3.ndim)

# To check the shape
print("Shape of the array1 is-",arr1.shape)
print("Shape of the array2 is-",arr2.shape)
print("Shape of the array3 is-",arr3.shape)

# To check the size
print("Size of the array1 is-",arr1.size)
print("Size of the array2 is-",arr2.size)
print("Size of the array3 is-",arr3.size)

# To check the memory of element
print("ItemSize of the array1 is-",arr1.itemsize)
print("ItemSize of the array2 is-",arr2.itemsize)
print("ItemSize of the array3 is-",arr3.itemsize)

# Simple Itemsize
city=np.array(["delhi",'gujrat','jaipur','bihar'])
print("Itemsize of the city array is-",city.itemsize)

# Transpose of Matrix
print("\n Transpose of Matrix is : ")
print(arr2.T)