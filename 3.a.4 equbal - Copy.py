print("\t\tbalanced equation program")
a=input("give any expression ")
i=j=0
b=[20]
for x in a:
    if(x=="(" or x==")"):
        b.append(x)
for e in b:
    if (e=="("):
        i+=1
    if(e==")"):
        j+=1
if (i==j and i!=0):
    print(a," is balanced equation")
else:
    print(a," is not balanced equation")
