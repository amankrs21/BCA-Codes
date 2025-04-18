import numpy as np

# a = np.array([1,2,3])
# print(a)

# b = np.array([[4.0,21.0,2.0],[23.0,28.0,26.0]])
# print(b)

# # Get Dimension
# print(a.ndim)
# print(b.ndim)

# # Get Shape
# print(a.shape)
# print(b.shape)

# # Get Type
# print(a.dtype)
# print(b.dtype)
# a_copy = np.array([1,2,3], dtype = 'int16')
# print(a_copy.dtype)

# # Get Size
# print(a.itemsize)
# print(b.itemsize)

# # Get total size
# print(a.nbytes)
# print(b.nbytes)

# # Get a specific Element
# c = np.array([[1,2,3,4,5,6,7],[8,9,10,11,12,13,14]])
# print(c)
# print(c[1,4])

# # Get a specific Row
# print(c[0, :])

# # Get a specific column
# print(c[:, 3])

# # Geting a Little more fancy [start_index : stop_index : step_size]
# print(c[0, 1:-1:2])

# # Change any element
# c[1,3] = 21
# print(c)
# c[:,2] = [2,4]
# print(c)

# # 3-D Example
# print("\n\n 3-D Examples :- ")
# d = np.array([[[1,2],[3,4]],[[10,20],[11,21]]])
# print(d)

# # Get special element
# print(d[0,1,1])
# print(d[1,1,1])
# print(d[:,:,0])
# print(d[:,:,1])
# print(d[0,:,:])
# print(d[0,0,:])
# print(d[1,:,0])
# print(d[1,:,1])

# # replace a 3-D
# d[1,:,1] = [4,21]
# print(d)
# d[:,0,0] = [2,4]
# print(d)

# All the zeros matrix
# e = np.zeros((2,3))
# print(e)
# f = np.ones((4,2), dtype='int32')
# print(f)
# g = np.full((4,4), 21)
# print(g)

# Take the vale of Trignometry
# h = np.cos(90)
# print(h)

# Linear Algebra
i = np.ones((2,3))
print(i)
j = np.full(3,2, 3)
print(j)
k = np.matmul(i,j)
print(k)
