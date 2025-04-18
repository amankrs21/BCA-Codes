import numpy as np

b=np.array([[1,2,3],[4,5,6],[7,8,9]])
print(b)
c=np.array([[1,2,3],[4,5,6],[7,8,9]],order="C")
print(c)
d=np.array([[1,2,3],[4,5,6],[7,8,9]],order="A")
print(d)
d=np.array([[1,2,3],[4,5,6],[7,8,9]],order=None)
print(d)
e=np.array([[1,2,3],[4,5,6],[7,8,9]],order="F")
print(e)