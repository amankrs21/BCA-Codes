# First Method
limit = int(input("\n Enter the Limit : "))

sum = 0
for i in range(1,limit*2,2):
    sum += i
    print(i,end=" + ")

print(" = ",sum)

# Second Method
limit = int(input("\n Enter the Limit : "))

List = []
for i in range(1,limit*2):
    if i % 2 == 1:
        List.append(i)
        if len(List) == limit:
            break
    
sum = 0
for i in List:
    sum += i
    print(i, end=" + ")
print(" = ",sum)