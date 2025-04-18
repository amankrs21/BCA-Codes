# WAP program to covert list of word form given sentence by using split() method and also 
# find position of entered word in list if it present in list else print appropriate message.


variable = " Welcome to Parul University"
print("\n My String is -> ",variable)
new_var = []
new_var = variable.split()
print(" After Spliting of String -> ",new_var)

# for i in new_var:
#     print(" Index Value is -> ",new_var.index(i)," and Value is -> ",i)

word = input("\n Enter word to Search : ")
if (word in new_var):
    print("\n",word,"Found at Index Value ",new_var.index(word))
else:
    print("\n Word Not Found")
