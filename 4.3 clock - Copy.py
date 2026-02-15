print("clockwise rotation")
a=[10,'mca',23.5,89]
n=len(a)
print (a)
for j in range (0,5):
       t=a[0]
       for i in range(0,n-1):
              a[i]=a[i+1]
       a[n-1]=t
       print(a)
