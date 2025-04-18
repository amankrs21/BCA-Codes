myfile = open("PYTHON/Practice/file.txt", "a")

# # read
# content =myfile.read(9)
# print(type(content))
# print(content)

# # readline
# content = myfile.readline()
# print(type(content))
# print(content)

# # example of file attribute
# print("Name of the file: ",myfile.name)
# print("Closed or not : ",myfile.closed) 
# print("Opening mode : ",myfile.mode )
# # print("Softspace flag : ",myfile.softspace)

# # write method
# myfile.write("Hello This is Aman Singh")

# # append method
# myfile.write("\nHey How are you all")

# # file pointer position using tell() method
# print(" The filepointer is a byte : ",myfile.tell())
# content = myfile.read()
# print(" After reading, the filepointer is at : ",myfile.tell())

# # reset/modify the file pointer position using seek() method
# print(" The Filepointer is a byte : ",myfile.tell())
# myfile.seek(10)
# print(" After reading the filepointer is at : ",myfile.tell())



myfile.close()      # closing the file
