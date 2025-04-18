import numpy as np

# 2-D array
arr1 = np.array([[1,23,34],[44,55,88],[12,34,44]])
arr2 = np.array([[1,23,34],[44,55,88],[12,34,44]],dtype=complex)
arr3 = np.array([[1,23,34],[44,55,88],[12,34,44]],dtype=float)

# Printing 2-D Arrays
print("Your 2-D array is-",arr1)
print("Your 2-D array is-",arr2)
print("Your 2-D array is-",arr3)

# To check the dimension
print("Dimension of the array is-",arr1.ndim)
print("Dimension of the array is-",arr2.ndim)
print("Dimension of the array is-",arr3.ndim)

# To check shape
print("Shape of the array1 is-",arr1.shape)
print("Shape of the array2 is-",arr2.shape)
print("Shape of the array3 is-",arr3.shape)
