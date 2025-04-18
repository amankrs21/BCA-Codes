# WAP to traverse string using for loop

def reverse_string(x):
    return x[::-1]

string = input("\n Enter the String : ")
print("\n Your Input is ->",string)

def reverse_string2(str):  
    str1 = ""   # Declaring empty string to store the reversed string  
    for i in str:  
        str1 = i + str1  
    return str1 

def reverse_string3(str):  
    reverse_String = ""  # Empty String  
    count = len(str) # Find length of a string and save in count variable  
    while count > 0:   
        reverse_String += str[ count - 1 ] # save the value of str[count-1] in reverseString  
        count = count - 1 # decrement index 
    return reverse_String

print(" Reverse of the String (Using Methos 1) is -> ",reverse_string(string))
print(" Reverse of the String (Using Methos 2) is -> ",reverse_string2(string))
print(" Reverse of the String (Using Methos 3) is -> ",reverse_string3(string))
