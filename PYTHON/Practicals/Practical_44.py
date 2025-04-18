# Write a menu driven program which shows the use of all inbuilt method of dictionary


global dic
dic = {'aman':159, 'yash':131, 'varun':167, 'digpal':161, 'kartik':171, 'kalpesh':121}

def menu():
    print("\n\n Given Dictonary is -> ",dic)
    print("\n +-------------------------------+")
    print(" | Press 1 For Add in Dictonary  |")
    print(" | Press 2 For Searching         |")
    print(" | Press 3 For Finding EN        |")
    print(" | Press 4 For Sorting           |")
    print(" | Press 5 For Convert into List |")
    print(" | Press 6 For Print in Row      |")
    print(" | Press 7 For Deleting          |")
    print(" | Press 8 Exit                  |")
    print(" +-------------------------------+")

    ch = int(input("\n Enter Your Choice : "))
    if ch == 1:
        ele = input("\n Enter name to add in Dic : ")
        enr = int(input(" Enter EN of the Name : "))
        dic[ele] = enr
        print("\n New Dic",dic)
    elif ch == 2:
        ele = input("\n Enter Name to Search : ")
        if ele in dic:
            print("\n Name Found in the Dictonary")
        else:
            print("\n Name NOT Found")
    elif ch == 3:
        ele = input("\n Enter Name to Find its Enrollrnment No : ")
        if ele in dic:
            print("\n Enrollnment Number of %s is -> "%ele,dic[ele])
        else:
            print("\n Name NOT Found")
    elif ch == 4:
        print("\n After Sorting Dictonary -> ",sorted(dic))
    elif ch == 5:
        print("\n After Converting Dictionary into List -> ",list(dic))
    elif ch == 6:
        print("\n Dictonary in the Row -> ")
        for x in dic:
            print(" Name is -> ",x, "and his Enrollnment Number is -> ", dic[x])
    elif ch == 7:
        ele = input("\n Enter Name for Delete : ")
        if ele in dic:
            del dic[ele]
            print("\n New Dictonary is -> ",dic)
        else:
            print("\n Name NOT Found")
    elif ch == 8:
        exit()
    else:
        print("\n Enter Valid Input")
        menu()

    ch2 = input("\n\n Want to GO Back\n\t[y|n] -> ")
    if ch2 == 'y' or 'Y':
        menu()
    else:
        exit()

menu()
