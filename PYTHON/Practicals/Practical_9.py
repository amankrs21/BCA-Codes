# WAP to solve quadratic equation (ax2 + bx + c)
# take an example as a = 1, b = 5 and c = 6

import math
import os

print("\n Quadractic equation is in the form of ax^2 + bx + c = 0")
a = int(input(" Enter Coeficient of a : "))
b = int(input(" Enter Coeficient of b : "))
c = int(input(" Enter Coeficient of c : "))

det = math.sqrt((b**2) - (4*a*c))
d = 2*a

root1 = (-b + det)/d
root2 = (-b - det)/d

os.system('cls')    #this is used to clear the screen

print("\n Value of Root 1 is : ",root1)
print(" Value of Root 2 is : ",root2)
