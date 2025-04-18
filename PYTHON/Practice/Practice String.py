# String is immutable it can't change it can replace or delete
# All the Program in this file are related to string operation

# Methods to define a string
# 1st method
s1 = 'Hello this is the 1st method to define a string'
# 2nd Method
s2 = 'Hello this is the 2nd method to define a string'
# 3rd Method
s3 = """Hello 
                This is 3rd method
                                    to define a string"""
print(s1)
print(s2)
print(s3)

# Accesing string using index value
s4 = "Hello, Welcome to the Parul University"
print(s4[6::1])
# print it into reverse form
print(s4[::-1])

# length of the string
print(" Length of the String is -> ",len(s4))

# Counting elements in the string
print(" Number of element 't' in the string -> ",s4.count('t'))
# Countinf elements in the given limit
print(" Number of Element 't' in the String -> ",s4.count('t', 16, 37))

# finding elements
# it will return the first element find
print(" Element 'e' found at -> ",s4.find('e'))
print(" Element 'e' found at -> ",s4.find('e',6,-1))

# Capital the first character of string
s5  = 'hello'
print(" After capitalization of First character -> ",s5.capitalize())

# check string is numbers or not
print(" In the Given string number are available -> ",s5.isdigit())

# check string is in lower case or not
print(" String is in lower case -> ",s5.islower())

# check string is in upper case or not
print(" Strong is in upper case -> ",s5.isupper())

# convert string into upper case
print(" String in Upper case -> ",s5.upper())

# convert string in lower case
s6 = "THANK YOU"
print(" String in Lower Case -> ",s6.lower())

# Thats all thank you