# WAP to create set of numbers and perform updating and deletion operation using its all 
# inbuilt function.

def menu():
    print("\n +----------------------------+")
    print(" | Press 1 for Print the Set  |")
    print(" | Press 2 for Update the Set |")
    print(" | Press 3 for Delete the Set |")
    print(" | Press 4 for Exit           |")
    print(" +----------------------------+")

    choice = int(input("\n Enter Your Choice -> "))
    if choice == 1:
        print_set(set_var)
    elif choice == 2:
        update_set(set_var)
    elif choice == 3:
        delete_set(set_var)
    elif choice == 4:
        exit()
    else:
        print("\n Please Enter Valid Choice")

    choice2 = input("\n Want to Go Back\n\t(yes/no) -> ")
    if choice2 == 'yes':
        menu()
    else:
        exit()

# UDF that print set
def print_set(set_var):
    print("\n Given Set is -> ",set_var)

# UDF that add elements in the Set
def update_set(set_var):
    limit = int(input("\n Enter Limit of Element you want to update : "))
    print(" Enter the Elements : ")
    for i in range(limit):
        updating = int(input(" "))
        set_var.update([updating])
    print("\n Updated Set is -> ",set_var)

# UDF that delete elements from the Set
def delete_set(set_var):
    removing = int(input("\n Enter ELement to Remove : "))
    set_var.remove(removing)
    print("\n After Removing element from Set -> ",set_var)

# Creating a set
set_var = set([1,2,3,4,5,6])

menu()      # Calling of main funtion
