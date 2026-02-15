import matplotlib.pyplot as plt
import pandas as pd
Aqi=pd.read_csv('AQI_rawdata.csv')
df=pd.DataFrame(Aqi)
newdf=df.dropna()
Aqi_Label=['PM2.5','PM10','NO','NO2','NOx','NH3','CO','SO2','O3','Benzene','Toluene','Xylene']
m1=newdf.iloc[:,2].mean()
m2=newdf.iloc[:,3].mean()
m3=newdf.iloc[:,4].mean()
m4=newdf.iloc[:,5].mean()
m5=newdf.iloc[:,6].mean()
m6=newdf.iloc[:,7].mean()
m7=newdf.iloc[:,8].mean()
m8=newdf.iloc[:,9].mean()
m9=newdf.iloc[:,10].mean()
m10=newdf.iloc[:,11].mean()
m11=newdf.iloc[:,12].mean()
m12=newdf.iloc[:,13].mean()
values=[m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12]
plt.pie(values,labels=Aqi_Label)
plt.title("air quality analysis")
plt.show()
