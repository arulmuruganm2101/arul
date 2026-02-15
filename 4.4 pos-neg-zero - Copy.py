print("generate three list with positive & negative element")
x=[]
l1=[]
l2=[]
l3=[]
n=eval(input("in each list there are 3 elements,\nhow many list to be create:"))
for i in range(0,n):
        d=eval(input("enter the value :"))
        c=eval(input("enter the value :"))
        e=eval(input("enter the value :"))
        x.append([d,c,e])
        print(i+1,"list created")
print("the given list is :",x)
for i in x:
    for j in i:
        if(j>0):
            l1.append(j)
        elif(j<0):
            l2.append(j)
        else:
            l3.append(j)
print(l1)
print(l2)
print(l3)
