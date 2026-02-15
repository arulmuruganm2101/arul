print("\t\tall pair combination of 2 tuple")
t1=[]  
t2=[]
n=eval(input("enter t1 limit :"))
for i in range (0,n):
    x=eval(input("enter value :"))
    t1.append(x)
m=eval(input("enter t2 limit :"))
for i in range(0,m):
    x=eval(input("enter value"))
    t2.append(x)
a=list(t1)
b=list(t2)
print("the given list is\t",a,b)
s=[]
for i in a:
    for x in b:
        s.append((i,x))
for i in b:
    for x in a:
        s.append((i,x))
print("the resultant list is\n",s)
