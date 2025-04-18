# Program to undestand type conversion funtion
# there three types of type conversion funtion
#   1). int()
#   2). float()
#   3). str()

integer_value = 21
float_value = 4.0
string_value = '214'

print("\n Given Integer Value is ->",integer_value)
print(" Given Float Value ->",float_value)
print(" Given String Value ->",string_value)

print("\n Integer into Float\n ",integer_value," --> ",float(integer_value),type(float(integer_value)))
print(" Integer into String\n ",integer_value," --> ",str(integer_value),type(str(integer_value)))

# in the conversion of float into integer, output value will not be round of it just remove the decimal value and print it.
print("\n Float into Integer\n ",float_value," --> ",int(float_value),type(int(float_value)))
print(" Float into String\n ",float_value," --> ",str(float_value),type(str(float_value)))

# if we convert any alphabets into float and integer then it gives us error
print("\n String into Integer\n ",string_value," --> ",int(string_value),type(int(string_value)))
print(" String into Float\n ",string_value," --> ",float(string_value),type(float(string_value)))