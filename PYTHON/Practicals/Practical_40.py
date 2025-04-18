# Create a dictionary which shows the occurrence/ frequency of each character present in 
# string. [hint : if user enter ³wel come to parul university´than your dictionary contain 
# {a:1,b:0,c:1,d:0,e:3, f:0««`like this

str1 = input("\n\n Enter the String : ")
print("\n Given String is -> ",str1)
dic = {}
for i in range(97,123):
    dic[chr(i)] = 0
for n in str1:
    keys = dic.keys()
    if n in keys:
        dic[n] += 1
    else:
        dic[n] = 1
print("\n Frequency of each charcter is -> \n",dic)
