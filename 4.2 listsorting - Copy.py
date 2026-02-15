print("\t\tsorting program")
n=eval(input("enter how many elements"))
s=[]
for i in range(0,n):
       x=eval(input("enter element"))
       s.append(x)
print("given list is ",s)
print("list sorting without using build in function")
for i in range(0,n-1):
    for j in range(i+1,n):
        if(s[i]>s[j]):
            s[i],s[j]=s[j],s[i]
print("list sorting is ",s) 
print("list sorting using build function : ",sorted(s))
