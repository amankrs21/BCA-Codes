# Finding dimension of array : ndim is use for finding dimension of array
import numpy as np
b=np.array([[1,2,3],[4,5,6],[7,8,9]])
print(b.ndim)
b=np.array([[[1,2,3]],[[4,5,6]],[[7,8,9]]])
print(b.ndim)