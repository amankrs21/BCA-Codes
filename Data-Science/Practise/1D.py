import numpy as np

# # for declaration of 1-D array
# arr1 = np.array([1,23,34,44,55])
# arr2 = np.array([1,23,34,44,55],dtype=complex)
# arr3 = np.array([1,23,34,44,55],dtype=float)

# # Printing Arrays
# print("Your 1-D array is-",arr1)
# print("Your 1-D array is-",arr2)
# print("Your 1D array is-",arr3)

# # For check dimension
# print("Dimension of the array is-",arr1.ndim)
# print("Dimension of the array is-",arr2.ndim)
# print("Dimension of the array is-",arr3.ndim)

# # To check the shape
# print("Shape of the array1 is-",arr1.shape)
# print("Shape of the array2 is-",arr2.shape)
# print("Shape of the array3 is-",arr3.shape)

# # Declaring another array
# arra1 = np.array([2,4,6,8,10])
# arra2 = np.array([1,3,5,7,9])
# arra3 = np.array([11,13,15,17,19])

# # Addition of array
# c = np.add(arra1,arra2,arr3)
# print("The addition of array is :- \n",c)

# # Substraction of 1-D array
# sub = np.subtract(arra3,arra1)
# print("The Substraction of array is :- \n",sub)

# # Multiplication of 1-D array
# mul = np.multiply(arra1,arra2)
# print(" Multiplication of array is :- \n",mul)

# # Trignometry funtions and  examples on 1-D array
# arr = np.array([0, 30, 45, 60, 90, 120, 150, 180]) 

# # sin function 
# print("\n Sin value of array is -> ")
# print(np.sin(arr))
# print(np.sin(arr * np.pi / 180))

# # cos funtions
# print("\n Cos value of array is -> ")
# print(np.cos(arr))

# # tan funtion
# print("\n Tan value of array is -> ")
# print(np.tan(arr))

# # round off funtion
# in_array = [0.5, 1.5, 2.4, 2.5, 2.7, 3.5, 5.5, 6.5]
# print("\n Input array is -> \n",in_array)
# round_off_values = np.around(in_array)
# print("\n Round off values of array is -> \n",round_off_values)

# # Floor funtion just convert decimal to int
# arr = np.array([12.202, 90.23120, 123.020, 23.202])  
# print(np.floor(arr))
# arr = np.array([12.202, 90.23120, 123.020, 23.202])  
# print(np.ceil(arr))

a1 = np.array([1,2,3,4,5,6,7,8,9,10,11,12])
print(a1.reshape(6,2))

a = np.arange(8).reshape(2,4) 

print('The original array is:') 
print(a) 
print('\n')  
# default is column-major 

print('The flattened array is:') 
print (a.flatten()) 
print('\n')  

print ('The flattened array in F-style ordering:') 
#'C'− row major (default. 'F': column major 'A': flatten in column-major order
print (a.flatten(order = 'F'))

emp_arr3 = np.empty([2,3,4], dtype=complex)
print(emp_arr3)

zero_arr = np.zeros([2,2],dtype=int)
print(zero_arr)