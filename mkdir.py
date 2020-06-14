#coding=utf-8 
import pandas as pd
import os
with open("jianzhi_offer.csv","r",encoding='utf-8') as f:
    data=pd.read_csv(f)
for i in range(len(data.name.values)):
    if not os.path.exists(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i])):
        os.makedirs(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i]))
    if not os.path.exists(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i],"problem.md")):
        f=open(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i],"problem.md"),"w")
        f.close()
    if not os.path.exists(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i],"solution.md")):
        f=open(os.path.join("jianzhi_offer",data.number[i]+" "+data.name[i],"solution.md"),"w")
        f.close()
    