print("\t\treverse number")
a=input("enter any number")
b=len(a)
a=int (a)
rev=0
for i in range(0,b):
    if (a!=0):
        x=int(a%10)
        rev=int(rev*10+x)
        a=int(a//10)
print(rev)
