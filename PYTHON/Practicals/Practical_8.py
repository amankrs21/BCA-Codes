# Write a menu driven program to convert kilometer to miles, Celsius to Fahrenheit, meter to 
# centimeter, acer to square meter.

print("\n----------------------------------------------")
print(" Press 1 -> To convert kilometer into miles")
print(" Press 2 -> To convert Celcius inro Fahrenheit")
print(" Press 3 -> To convert meter to centimeter")
print(" Press 4 -> To convert acer to square meter")
print("----------------------------------------------\n")

ch = int(input(" Enter your Choice : "))

if ch == 1:
    km = float(input(" Enter value of kilometer : "))
    print(km,"km = ",km*0.621,"miles")

elif ch == 2:
    Celcius = float(input(" Enter value of Celcius : "))
    print(Celcius,"Celcius = ",Celcius+33.8,"Fahrenheit")

elif ch == 3:
    meter = float(input(" Enter value of meter : "))
    print(meter,"m = ",meter*100,"cm")

elif ch == 4:
    acer = float(input(" Enter value of acer : "))
    print(acer,"acer = ",acer*4046.86,"sq meter")

else:
    print("\n please enter valid choice...")