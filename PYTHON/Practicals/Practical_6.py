# WAP to find simple interest for given principal amount. Take input of principal amount, rate
# of interest and year from user. (Intrest=(PRN)/100)

pri_amt = int(input(" Enter the Principal Amount : Rs"))
rate = int(input(" Enter the Rate of Interest : "))
time = int(input(" Enter the Time (in year): "))

simple_interest = (pri_amt * rate * time)/100

print("\n Simple Interest is : Rs",simple_interest)