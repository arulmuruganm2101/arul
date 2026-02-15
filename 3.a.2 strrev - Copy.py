print("\t\treverse string")
s=input("enter the string")
i=0
j=len(s)-1
s=list(s)
print(s)
while i<j:
    s[i],s[j]=s[j],s[i]
    i=i+1
    j=j-1
s=" ".join(s)
print("the reverse string is\n",s)
