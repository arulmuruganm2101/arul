s=input("enter string")
n=len(s)
print("the given string is : ",s)
s=list(s)
s.append(" ")
i=0
while(i<n):
    j=i
    c=1
    while(s[j]==s[j+1]):
        c=c+1
        j=j+1
    print("the char : ",s[i],c)
    i=j+1
          
