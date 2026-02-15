a=[]
print("\tmaximum frequency of a number")
n=eval(input("enter how many elements to insert "))
for i in range(0,n):
    x=eval(input("enter value"))
    a.append(x)
m=0
ans=0
for i in a:
    count=a.count(i)
    if count>m or (count==m and i>ans):
        m=count
        ans=i
print("the maximum freguency of ",ans," is ",m," times")
