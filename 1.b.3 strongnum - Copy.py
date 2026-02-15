print("\t\tstrong number")
a=eval(input("enter any number"))
sum=0
t=a
while(a>0):
    d=a%10
    f=1
    for i in range(1,d+1):
        f=f*i
    sum=sum+f
    a=a//10
if(t==sum):
        print("the given number is strong")
else:
        print("the given number is not strong")
