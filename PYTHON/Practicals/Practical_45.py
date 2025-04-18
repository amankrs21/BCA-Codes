# WAP to write your introduction like name, birth date, email id, address, contact details into 
# file. And also print it in proper format after reading the data.

# open() will open the file by using the location of that file
file = open("PYTHON/Practicals/file_1.txt", "r")

# it will fetch the row from that file
for i in file:
    print(i, end="")

file.close()