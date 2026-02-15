print("\t\tpalindrome program")
a=input("enter the string ")
i=0
s=list(a)
j=len(s)-1
print(s)
while(i<j):
    s[i],s[j]=s[j],s[i]
    i=i+1
    j=j-1
s=''.join(s)
if (a==s):
    print("the given string is palindrome")
else:
    print("the given string is not palindrome")



