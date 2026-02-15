print("\tdictionary operations")
product=[]
n=eval(input("enter how many products : "))
for i in range(0,n):
    print("enter the product value of ",i+1)
    pid=int(input("enter the product id : "))
    pname=input("enter the product name : ")
    cost=float(input("enter the unit cost : "))
    quantity=int(input("enter the quantity : "))
    p={"productid": pid,
        "name":pname,
        "cost":cost,
        "quantity":quantity}
    product.append(p)
for i in range (0,n):
    print(product[i])
x=int(input("enter product id to search"))
f=False
for i in range(0,n):
    if(product[i]["productid"]==x):
        print(product[i])
        f=True
        break
if not f:
    print("the product id ",x," is not found")
high=max(product,key=lambda y: y["cost"]*y["quantity"])
print("product with highest total amount is ")
print(high)
print("total amount is : ",int(high["cost"]*high["quantity"]))
