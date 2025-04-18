# Write a python program to create dictionary of binary number up to given range. If user 
# enter 15 than store binary number of 1 to 15 into dictionary and print it in proper format.

limit = int(input("\n\n Enter Limit to Convert Numbers into Binary Number : "))

binary_dict = {}

for i in range(1,limit+1):
    copy = i
    binary_list = []
    binary_num = [0] * i
    j = 0
    while (i > 0):

        binary_num[j] = i % 2
        binary_list.append(binary_num[j])
        i = int(i / 2)
        j += 1
    binary_dict[copy] = binary_list[::-1]

print("\n Binary Number from 1 to %d in the form of Dictionary is -> \n "%limit,binary_dict)
