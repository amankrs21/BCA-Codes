# Write a Python script to generate and print a dictionary that contains a number (between 1 
# and n) in the form (x, x*x). Expected Output : {1: 1, 2: 4, 3: 9, 4: 16, 5: 25} where value of n is 
# enter by user

limit = int(input("\n\n Enter Limit of Dictionary : "))

dic = {}
for i in range(1,limit+1):
    dic[i] = i**2

print("\n Number and its Square in the Form of Dictinary is -> \n",dic)

# dic = {x: x**2 for x in range(1,limit+1)}  ----> Second Method
