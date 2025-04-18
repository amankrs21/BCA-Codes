# Write a Python script to concatenate following dictionaries to create a new one. Sample 
# Dictionary : dic1={1:10, 2:20} dic2={3:30, 4:40} dic3={5:50,6:60}

dict1 = {1:1,2:4,3:9}
dict2 = {4:16,5:25,6:36}
dict3 = {7:49,8:64,9:81}

print("\n\n Dictionary 1 is -> ",dict1)
print(" Dictionary 2 is -> ",dict2)
print(" Dictionary 3 is -> ",dict3)

all_dic = {}
all_dic.update(dict1)
all_dic.update(dict2)
all_dic.update(dict3)

print("\n After Concatenation of all Dictionaries,\n Final Dictionary is -> ",all_dic)
