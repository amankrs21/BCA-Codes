# WAP to create list of words and convert only those words into upper case which start with 
# vowels (a,e,I,o,u) other remain as it is.


List = ['audi', 'tesla', 'bmw', 'alto', 'tata','egg']
vowels = ['a','e','i','o','u']
count = 0
print("\n Original List -> ",List)
for i in List:
    if (i[0] in vowels):
        List[count] = i.upper()
    count += 1
print(" After Converting vowels into Upper Case -> ",List)
