# WAP to find list of prime numbers from tuple and store it into list.


Tuple = (1,2,3,4,5,6,7,11,13,17,21,25,30,59)
print("\n\n Given Tuple is -> ",Tuple)

List = [1,2]
flag = 0
for x in Tuple:
    for j in range(2, x):
        if (x % j == 0):
            flag = 0
            break
        else:
            flag = 1
    if (flag == 1):
        List.append(x)

print("\n List of Prime Numbers from Tuple is -> ",List)
