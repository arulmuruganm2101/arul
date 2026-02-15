def shift(a,n):
    c=0
    for i in range(0,n):
        if(a[i]!=0):
            a[i],a[c]=a[c],a[i]
            c+=1
    print("\nlist after shifting")
    print(a)
a=[]
print("\tshifting of zero at the end of list")
n=eval(input("enter how manny elements"))
for i in range(0,n):
    x=eval(input("enter value"))
    a.append(x)
print("\nthe given list is")
print(a)
shift(a,n)
