import numpy as np
print("\tconcatenation of two matrixs")
b=np.array([[1,5,6],[4,2,3]])
c=np.array([[10,8,12],[11,7,9]])
print("the given matrix is ",b,c)
d=np.concatenate((b,c))
print("after concatenation \n column-wise concatenation\n",d)
e=np.concatenate((b,c),axis=1)
print("row-wise concatenation\n",e)
