# In this program we wil practice on the Dictionary Data Structure

# Method 1 to create a dictionary
dict1 = dict()
dict1['one'] = 1
dict1['two'] = 2
dict1['three'] = 3
print(dict1)

# Method 2 to create a dictionary
dict2 = {1: 'aman', 2:'yash', 3:'varun', 4:'digpal', 5:'kartik'}
print(dict2)

# Method 3 to create a dicionary
list_key = ['one', 'two', 'three']
list_value = [1, 2, 3]
dict3 = dict(zip(list_key, list_value))
print(dict3)

# accessing the dicitonary
print(dict2[1])
print(dict2.get(2))
print(dict2.get(6,'Element Not Found'))

# adding new values in the dicitonary
dict2[6] = 'kalpesh'
print(dict2)

# updating dictionary
dict2[6] = 'Subhash'
print(dict2)

# dicitonary is case sensitive
dict1['One'] = 1
print(dict1)

# printing only items, keys and values
print(dict1.items())
print(dict1.keys())
print(dict1.values())

# delete or remove element from dicitonary
squares = {1:1, 2:4, 3:9, 4:16, 5:25}
print(squares)
print(squares.pop(4))
print(squares.popitem())
del squares[2]
print(squares)
squares.clear()
print(squares)

# access elements of dicitonary using for loop
Employee={"Name":"Vidhi","Age":29,"salary":25000,"Company":"GOOGLE"}
for i in Employee:
    print(i)
for i in Employee.values():
    print(i)
for x, y in Employee.items():
    print(x,"->", y)

# sorting in dictionary
a = [['Aman',18,'Enginner'], ['Yash',19,'Developer'],['Varun',17,'Gamer'],['Kartik',20,'Sports']]
print(a)
import operator as op
a.sort(key=op.itemgetter(0))
print(a)
a.sort(key=op.itemgetter(1))
print(a)
a.sort(key=op.itemgetter(1), reverse=True)
print(a)
squares = {1:1, 2:4, 3:9, 4:16, 5:25}
sorted_r = dict(sorted(squares.items(), key = op.itemgetter(1), reverse = True))
print(" Elements in Descending order according to values -> ",sorted_r)
