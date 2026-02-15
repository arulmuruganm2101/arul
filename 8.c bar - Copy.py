import matplotlib.pyplot as plt
import pandas as pd
cat=pd.read_csv("CAT_data.csv")
df=pd.DataFrame(cat)
newdf=df.dropna()
sub_code=newdf.loc[:,'Subcode']
passper=newdf.iloc[:,7]
max=newdf.iloc[:,8]
min=newdf.iloc[:,9]
mean=newdf.iloc[:,10]
median=newdf.iloc[:,11]
above_mean=newdf.iloc[:,12]
below_mean=newdf.iloc[:,13]
equal_mean=newdf.iloc[:,14]
plt.suptitle("CAT Analysis")
plt.subplots_adjust(left=0.051,
                    bottom=0.097,
                    right=1,
                    top=0.9,
                    wspace=0.22,
                    hspace=0.773)

plt.subplot(3,3,1)
plt.title("Subject VS Pass%")
plt.bar(sub_code,passper,color="Green")
plt.xticks(rotation=20,ha='right')

plt.subplot(3,3,2)
plt.title("Subject VS Max")
plt.bar(sub_code,max,color="Red")
plt.xticks(rotation=20,ha='right')

plt.subplot(3,3,3)
plt.title("Subject VS Min")
plt.bar(sub_code,min,color="blue")
plt.xticks(rotation=20,ha='right')

plt.subplot(3,3,4)
plt.title("Subject VS Mean")
plt.bar(sub_code,mean,color="Pink")
plt.xticks(rotation=20,ha='right')

plt.subplot(3,3,5)
plt.title("Subject VS Median")
plt.bar(sub_code,median,color="Yellow")
plt.xticks(rotation=20,ha='right')

plt.subplot(3,3,6)
plt.title("Subject VS Above Mean")
plt.bar(sub_code,above_mean,color="Purple")
plt.xticks(rotation=20,ha='right')

plt.subplot(3,3,7)
plt.title("Subject VS Below Mean")
plt.bar(sub_code,below_mean,color="Orange")
plt.xticks(rotation=20,ha='right')

plt.subplot(3,3,8)
plt.title("Subject VS Equal Mean")
plt.bar(sub_code,equal_mean,color="brown")
plt.xticks(rotation=20,ha='right')
plt.show()
