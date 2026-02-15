print("\t\tbmi calculation program")
e=input("enter your name : ")
f=input("enter your id : ")
add=input("enter your address : ")
a=eval(input("enther your weight in kgs"))
b=eval(input("enter you height in meters"))
c=a/b**2
if(c<18.5):
    d="under weight"
elif(c>18.5 and c<24.9):
    d="normal weight"
elif(c>25.0 and c<29.9):
    d="over weight"
elif(c>30):
    d="obesity"
print(f," ",e," ",add,"your bmi is :{:.2f}".format(c)," ",d)
