# Write a Python program to combine two dictionary adding values for common keys. d1=
# {'a':100,'b':200,'c':300}, d2={'a':300,'b':200,'c':400} Sample output: Counter({'a': 400, 'b': 400, 
# 'd': 400, 'c': 300})


from collections import Counter as cnt

dict1 = {'a': 100, 'b': 200, 'c': 300, 'd':400, 'e': 100}
dict2 = {'a': 300, 'b': 200, 'c': 400, 'd':100, 'f': 210}

print("\n\n Dictionary 1 is -> ",dict1)
print(" Dictionary 2 is -> ",dict2)

# Method 1
dict3 = cnt(dict1) + cnt(dict2)

# Method 2 if only x = y
# for x, y in dict1.items():
#     for i, j in dict2.items():
#         if x == i:
#             dict3[x] = (y+j)


print("\n Sum of both Dicitionaries is -> ",dict3)
