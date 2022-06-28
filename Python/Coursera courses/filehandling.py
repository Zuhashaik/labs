a=open("Desktop/file.csv","r")
x = a.readlines()
#for i in x:
 #   print(i.replace(","," "))

import pandas as pd

df = pd.read_csv("Desktop/file.csv")

print(df.to_string())