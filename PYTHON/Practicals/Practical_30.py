# WAP to program to find binary of inputted number and store it into list and print it.


def binary(n):
    copy = n

    binary_num = [0] * n
    binary_list = []
    i = 0
    while (n > 0):

        binary_num[i] = n % 2
        binary_list.append(binary_num[i])
        # print(binary_list)
        n = int(n / 2)
        i += 1
    # print(binary_num)
    print("\n Binary Number of",copy," is : ",binary_list[::-1])

num = int(input("\n Enter Number to Convert Number into Binary form : "))

binary(num)
