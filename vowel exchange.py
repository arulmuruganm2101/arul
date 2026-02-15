a=[]
b=["a","e","i","o","u"]
c=input("enter srting")
for i in c:
    if(i in b):
        a.append(i)
i=0
j=len(a)-1
while (i<j):
    a[i],a[j]=a[j],a[i]
    i+=1
    j-=1
j=0
for i in c:
    if (i in b):
        print(a[j])
        j+=1
    else:
        print(i)
