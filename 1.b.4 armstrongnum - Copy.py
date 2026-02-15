print("\t\tarmstrong number")
n=input("Enter a number:")
p=len(n)
n=eval(n)
sum=0
t=n
while(n>0):
    d=n%10
    d=d**p
    sum=sum+d
    n=n//10
if (t==sum):
    print("The given number is armstrong number")
else:
    print("The given number is not armstrong number")
 
