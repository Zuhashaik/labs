
import pandas as pd
import numpy as np
df=pd.DataFrame(pd.read_csv("/Users/prasanna/Desktop/programs/Python/pandas/Book1.csv"),index=[0,1,2,3,4])

#ILOC

# print(x.iloc[:,0:4]) this will print columns from 0th index(which is column which has row index)  to the (4-1)th index of column 
                      # and this will print all rows if unspecified

#print(x.iloc[:,:]) # prints all contents of the table

# print(x.iloc[0:1,:]) #similar to prev one

# print(x.iloc[0,:]) does similar to the prev one but prints only the 0th column 

# the orientation of tables vary in the prev two commands

#LOC

# print(x.loc[:,:]) #similar to print (x.iloc[:,:])

#print(x.loc[0:5,:]) #exactly like x.iloc except for the fact the in iloc it displays  till (5-1)th column but in .loc it prints till 5th column

#print(x.loc[:,:"Age"]) #prints all rows and columns till Age 

#print(x.loc[:,["Age","College"]]) #prints all the rows of the specified columns of the ARRAY in the column paramter

# in x.loc[] if only one parameter is passed (without adding " , ") then it will consider it as argument for index
     
 
                                                                    # BOOLEAN INDEXING

# df = pd.DataFrame(pd.read_csv("nba.csv"), index = [True, False, True, False]) 

# df.loc[True] will return the values with index True only

# df.iloc[1] will return the values with index True only as "1" is true , and if true is passed error will be raised



#data = pd.read_csv("nba.csv", index_col ="Name")
#This is the new parameter in read in pandas, in this we can make a column into a python index
#But after this we cannot call the column which we made as label/index 
              
'''                 For instance say data = pd.read_csv("nba.csv", index_col ="Name") command is given then the command : print(data["Name"]) will raise error                '''
     
# to add new column use: dataframe_name['new columns name']=[elements of the column]



'''# new_row = pd.DataFrame({'Name':'Geeks', 'Team':'Boston', 'Number':3,
                        'Position':'PG', 'Age':33, 'Height':'6-2',
                        'Weight':189, 'College':'MIT', 'Salary':99999},
                                                            index =[0]) 

data.concat([new_row, df]).reset_index(drop = True) #resets index adhered to it and adds 2 new rows'''

'''                                                                            DATA CLEAING                                                                                '''
 
#Droping

#Droping Column

#data.drop(["Team", "Weight"],axis=1,inplace=True) #the inplace parameter modifies the actual data 

#data = pd.read_csv("nba.csv", index_col ="Name" )

#data.drop(["Avery Bradley", "John Holland", "R.J. Hunter","R.J. Hunter"], inplace = True) #axis by default is 0, ie points to rows

# data.drop(data.columns[[0, 4, 2]], axis = 1, inplace = True) #to drop columns of column index 0 4 and 2

# data.drop(data.loc[:, 'Name':'Age'], axis = 1) drops columns name and age


'''x=["Age","Name"]
    for col in data.columns:
        for y in x:
         if y in col:
               data.drop([col],axis=1,inplace=True)''' #Drop columns using iteration 

#print(data.describe())

"""print(list(df))

r=["Name"]

for c in df.columns:
 df[c].fillna(int(df[c].mean()), inplace=True)

print((df))"""


#data.to_csv("/Users/prasanna/Desktop/programs/Python/pandas/Book1.csv")


