import matplotlib.pyplot as plt
import pandas as pd
df=pd.read_csv("mark.csv")
df=df.dropna()
mean1=df['marks'].mean()
sum1=df['marks'].sum()
max1=df['marks'].max()
min1=df['marks'].min()
median1=df['marks'].median()
count1=len(df)
print("\tstudents marks statements")
print("mean mark is                      : ",mean1)
print("sum of mark is                    : ",sum1)
print("maximum number of mark   : ",max1)
print("minimum number of mark    : ",min1)
print("median of mark is                : ",median1)

x=[5,8,12,25,36,40,56]
y=[10,8,30,92,5,44,5]
plt.title("modern scripting languages")
plt.xlabel("number of students")
plt.ylabel("students marks")
plt.plot(x,y)
plt.show()
