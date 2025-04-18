# WAP to remove all the duplicate element from list by using single list.

def remove_dublicate():
    print("\n\n\n Given List is -> ",l1)
    l2 = []
    for i in l1:
        if i not in l2:
            l2.append(i)
    print("\n After Removing Dublicate elements -> ",l2)


global li
l1 = [1,2,3,2,4,6,3,8,15,4,21,21,45,36,45,72]
remove_dublicate()
