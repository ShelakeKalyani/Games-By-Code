'''
    Program Name = OTP generator.
    Programming Language = Python
    Guided By = Amol Bhavsar Sir
    Developer Name = Shelake Kalyani Rajendra
    Date = 04-08-2022
'''

import random

number = int(input("Enter your 10 digit mobile number = "))

OTP = ''
L = []
List = ['0','1','2','3','4','5','6','7','8','9']

#First digit should not be '0'
num = random.randint(1,9)
L.append(num)

#Password have 6 digits hance choose random 6 digits from List(0,9)
for i in range(5):
    num = random.choice(List)
    L.append(num)

#Convert list into string
for i in L:
    OTP = OTP+str(i)    

#Print OTP   
print(f"Your OTP is {OTP}")


'''
output:
        Enter your 10 digit mobile number = 986549032
        Your OTP is 184823
'''
