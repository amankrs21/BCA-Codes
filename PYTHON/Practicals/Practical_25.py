# WAP which shows use slicing on string and any other data structure of python.

# slicing on String
var1 = 'Welcome to Parul University'
print("\n Given String is -> ",var1)
print(" Data Type of Variable is -> ",type(var1))
print(" String in the Reverse Form -> ",var1[::-1])
print(" Printing Welcome -> ",var1[0:7])
print(" Printing Parul in the Reverse Form -> ",var1[-11:-17:-1])

# slicing on List
var2 = [1,2,3,'hii','hello',21.4]
print("\n Given List is -> ",var2)
print(" Data Type of Variable is -> ",type(var2))
print(" List in the Reverse Form -> ",var2[::-1])
print(" Printing hii and hello -> ",var2[3:5])
print(" Printing hello in the reverse form -> ",var2[4][::-1])

# slicing on tuple
var3 = (21,22,'welcome','hello',2.4,25)
print("\n Given Tuple is -> ",var3)
print(" Data Type of Variable is -> ",type(var3))
print(" Tuple in the Reverse Form -> ",var3[::-1])
print(" Printing hello and welcome -> ",var3[2:4])
print(" Printing welcome in the reverse form -> ",var3[2][::-1])
