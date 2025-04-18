# WAP to create list of cube and square for upto given number. E.g. if user enter 10 than store 
# cube and square to 1 to 10 into list.

def cube_square(num):
    cube = []
    square = []
    for i in range (1,num+1):
        cube_num = i*i*i
        cube.append(cube_num)
        square_num = i*i
        square.append(square_num)
    print(" Cube List is   -> ",cube)
    print(" Square List is -> ",square)


num = int(input("\n Enter Limit : "))
cube_square(num)
