def upper_vowel(str):
     
    n = len(str)
     
    str1 =""
    for i in range(n):
        if (str[i] == 'a' or str[i] == 'e' or
            str[i] == 'i' or str[i] == 'o' or
            str[i] == 'u'):
            c = (str[i]).upper()
            str1 += c
        else:
            str1 += str[i]
 
    print(str1)
 
# Driver Code
if __name__ == '__main__':
     
    List = ['audi', 'tesla', 'bmw', 'tata', 'range rover']
     
    upper_vowel(List)