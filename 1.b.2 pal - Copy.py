print("\t\tpalindrome")
a=input("enter any number")
b=len(a)
a=int (a)
t=a
rev=0
for i in range(0,b):
    if (a!=0):
        x=int(a%10)
        rev=int(rev*10+x)
        a=int(a//10)
print("the given number is ",t)
if(t==rev):
    print("the given number is palindrome")
else:
    print("the given number is not palindrome")
