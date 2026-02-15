print("\t\t frequency of character program")
s=input("enter the string")
n=len(s)
k=input("enter the character to be checked")
s=list(s)
c=0
for i in s:
    if(i==k):
        c=c+1
if(c!=0):
    print("the character ",k," is available ",c," times")
else:
    print("the character ",k," is not available in the given string")
