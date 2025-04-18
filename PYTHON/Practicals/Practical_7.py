#WAP menu driven program to find area of triangle, circle, rectangle, square and cylinder.

pi = 3.14
print("\n--------------------------------------")
print(" Press 1 --> For Area of Traingle")
print(" Press 2 --> For Area of Circle")
print(" Press 3 --> For Area of Rectangle")
print(" Press 4 --> For Area of Square")
print(" Press 5 --> For Area of Cylinder")
print("--------------------------------------")

ch = int(input(" Enter your Choice : "))

if ch == 1:
    base = int(input("\n Enter Base of the Triangle : "))
    height = int(input(" Enter Height of the Traingle : "))
    area_tri = (0.5)*base*height
    print("\n Area of the Triangle is --> ",area_tri)

elif ch == 2:
    radius = int(input("\n Enter Radius of Circle : "))
    area_cir = pi*radius*radius
    print("\n Area of the Circle is --> ",area_cir)

elif ch == 3:
    length = int(input("\n Enter length of the Rectangle : "))
    breadth = int(input(" Enter Breadth of the Rectangle : "))
    area_rec = 2*length*breadth
    print("\n Area of the Rectangle is --> ",area_rec)

elif ch == 4:
    side = int(input("\n Enter Side of the Square : "))
    area_sq = side*side
    print("\n Area of the Circle is --> ",area_sq)

elif ch == 5:
    radius = float(input("\n Enter Radius of the Cylinder : "))
    height = float(input(" Enter Height of the Cylinder : "))
    area_cyl = 2*pi*radius*(height+radius)
    print("\n Area of the Cylinder is --> ",area_cyl)

else:
    print("\n Please enter valid choice...")