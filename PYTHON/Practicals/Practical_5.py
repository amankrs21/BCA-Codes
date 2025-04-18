# WAP to find power and square root of given number without using inbuilt function. (note :
# find power using ** operator and square root using 0.5 value)

num = int(input(" Enter any Number : "))
power = int(input(" Enter the Power : "))
root = int(input(" Enter Number to find Square Root : "))

print(" Square is --> ",num**power)
print(" Square Root is : ",root**0.5)

# 0.5 is multiplied with root because it means 81^(0.5) and (1/2) is 0.5 so its print
# half of the number that is 9
# we can also import math funtion and use sqrt funtion for calculation of root