import numpy as np
print("\tarray slicing")
x=np.array([1,2,3,4,5,6,7,8,9,10])
print("the given array is :",x)
print("the element from 2 to 4 is :",x[1:5])
print("the element from 5 to end element is :",x[4:])
print("the element from 1 to 3 is :",x[:4])
print("the reverse slicing :",x[-3:-1])
print("the element from 2 to 5 and i value incremented by 2 is :",x[1:5:2])
