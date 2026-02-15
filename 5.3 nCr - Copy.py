def fact(x):
    if (x==0 or x==1):
        return 1
    else:
        return x*fact(x-1)
print("\tcalculate nCr using nCr formula")
n=eval(input("enter value of n :"))
r=eval(input("enter value of r :"))
if(r>n):
    print("r must be smaller than n")
else:
    print(fact(n)//(fact(r)*fact(n-r)))
