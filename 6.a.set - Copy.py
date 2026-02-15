print("\tset operations")
a=set()
b=set()
c=set()
for i in range (0,3):
    if(i==0):
        n=eval(input("enter limit of a : "))
        for j in range (0,n):
            x=eval(input("enter value : "))
            a.add(x)
    if(i==1):
        n=eval(input("enter limit of b : "))
        for j in range (0,n):
            x=eval(input("enter value : "))
            b.add(x)
    if(i==2):
        n=eval(input("enter limit of c : "))
        for j in range (0,n):
            x=eval(input("enter value : "))
            c.add(x)
print("the set value of a is : ",a)
print("the set value of b is : ",b)
print("the set value of c is : ",c)
print("the intersection of a and b is :",a.intersection(b,c))
print("the union of a and b is :",a.union(b))
print("the difference of b and a is :",b.difference(a))
print("the disjoint of a and b is :",a.isdisjoint(b))
print("the superset of a and b is :",a.issuperset(b))
print("the subset of a and b is :",a.issubset(b))
