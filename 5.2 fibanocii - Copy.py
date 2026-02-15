def fib(x,y,n):
    if(n<3):return
    c=x+y
    print(c)
    fib(y,c,n-1)
print("fibonacci series")
n=eval(input("enter limit"))
l=0
h=1
print(l)
print(h)
fib(l,h,n)
