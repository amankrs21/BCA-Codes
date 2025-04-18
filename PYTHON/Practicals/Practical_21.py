# WAP which shows use of datetime package of python.


import datetime as dt    # This directory will help in all datetime activity

datetime_object = dt.datetime.now()
date_object = dt.date.today()
print("\n Todays Date and Time is : ",end="")
print(datetime_object)
print("\n Todays Date is : ",end="")
print(date_object)

# # Method to print date
date = dt.date(2001,2,21)
print("\n Birth Date of mine is -> ",date)

# # second method to print date
# def print_date():
#     from datetime import date
#     d = date(2002,4,4)
#     print("\n Birth Date of Roshni -> ",d)
# print_date()

# def normally():
#     print(x.year)
# print(x.strftime("%d"),x.strftime("%B"),x.strftime(%y))

# normally()


# calendar package
# import calendar as cal
# yy = int(input(" Enter the Year : "))
# mm = int(input(" Enter the Month : "))

# print(cal.month(yy,mm))
# print(cal.month(2021,2))
