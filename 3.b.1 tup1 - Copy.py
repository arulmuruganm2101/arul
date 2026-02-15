print("\t\ttuple addition program")
x=[]
s=[]
n=eval(input("enter how many tuple :"))
for i in range(0,n):
        d=eval(input("enter the value :"))
        c=eval(input("enter the value :"))
        e=eval(input("enter the value :"))
        x.append((d,c,e))
print("the tuple is :",tuple(x))
for i in x:
    sum=0
    for j in i:
        sum=sum+j
    s.append(sum)
print("the resultant tuple is:\t",tuple(s))
