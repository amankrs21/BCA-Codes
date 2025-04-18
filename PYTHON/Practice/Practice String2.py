# # Write a Python function that takes a list of words and returns the length of 
# # the longest one
# Str = input("\n Enter any String : ")
# List = Str.split()
# List2 = []
# for i in List:
#     List2.append(len(i))
# Max = max(List2)
# Ind = List2.index(Max)
# print("\n Longest length is -> %d and word is -> "%Max,List[Ind])

# # Write a Python script that takes input from the user and displays that input 
# # back in upper and lower cases
# Str = input("\n Enetr String : ")
# print("\n String in Upper case -> ",Str.upper())
# print("\n String in Lower case -> ",Str.lower())

# # Write a Python function to reverses a string if it's length is a multiple of 2.
# Str = input("\n Enetr String : ")
# if (len(Str) % 2 == 0):
#     print("\n String in Upper Case -> ",Str.upper())
# else:
#     print("\n Length of String is NOT even")

# # Write a Python program to check whether a string starts with specified 
# # characters.
# Str = input("\n Enetr String : ")
# spe = input(" Enter word to check with : ")
# print("\n String is Specified -> ",Str.startswith(spe))

# # Write a Python program to add a prefix text to all of the lines in a string.
# Dt = input("\n Enter String : ")
# List = Dt.split()
# for i in range(len(List)):
#     List[i] = '@'+List[i]
# Dt = ' '.join(List)
# print("\n After adding '@' in every Words of the String -> \n",Dt)

# # Write a Python program to add a postfix text to all of the lines in a string.
# Dt = input("\n Enter String : ")
# List = Dt.split()
# for i in range(len(List)):
#     List[i] = List[i] + '$'
# Dt = ' '.join(List)
# print("\n After adding '@' in every Words of the String -> \n",Dt)

# Write a Python program to count numbers of vowels in the string.
