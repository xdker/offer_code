#coding=utf-8 
import pandas as pd
import os
with open("l.csv","r",encoding='utf-8') as f:
    data=pd.read_csv(f)
for i in range(len(data.name.values)):
    if not os.path.exists(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i])):
        os.makedirs(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i]))