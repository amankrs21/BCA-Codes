# Program to read file and Print only that Words which is Greater than 20 Character

# first we open file in read mode and store in a variable
file = open("words.txt", "r")

# now we convert file in the String and Replacing new line by a space " "
line = file.read().replace("\n", " ")
# here we are closing file because we already store the data in the line variable
file.close()

# here we split the string and store in the List
List = line.split()

print("\n Words that is Greater than 8 from the file is -> \n")

# now we are accesing the list word by word by using for loop
for i in range(0,len(List)):
    # here we are cheking if word is greater than 10 then only it will print
    if(len(List[i]) > 8):
        print(List[i])
