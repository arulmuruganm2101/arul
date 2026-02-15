print("\t\tfinding minimum number in a list")
n=eval(input("enter how many elements"))
s=[]
for i in range(0,n):
       x=eval(input("enter element"))
       s.append(x)
print("given list is ",s)
for i in range(0,n-1):
    for j in range(i+1,n):
        if(s[i]>s[j]):
            s[i],s[j]=s[j],s[i]
print("minimum element without build in() ",s[0])
print("minimum element with build() ",min(s))
