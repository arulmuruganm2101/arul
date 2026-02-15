n=input("Enter a Name:")
id=input("Enter id:")
ad=input("Enter Address:")
w=float(input("Enter Your Weight:"))
h=float(input("Enter Your Height:"))
bmi=w/h**2;
if(bmi<=18.5):
    c="Underweight"
elif(18.5<bmi<=24.9):
    c="Normal Weight"
elif(25<bmi<=29.9):
    c="Overweight"
else:
    c="Obesity"
    
print("***** Body Mass Index Value *****")
print("Name : ",n)
print("ID :",id)
print("Address : ",ad)
print("Weight : ",w)
print("Height : ",h)
print("Body Mass Index :",bmi)
print(c)
