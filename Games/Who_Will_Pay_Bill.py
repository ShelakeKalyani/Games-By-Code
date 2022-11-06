'''
    Program Name = Accept your friends name and find who will pay bill of hotel(randomly).
    Programming Language = Python
    Guided By = Amol Bhavsar Sir
    Developer Name = Shelake Kalyani Rajendra
    Date = 01-08-2022
'''

#Import random pakage since we use "choices" function
import random

#Accept friends name from user
name = input("Enter your friends name with giving spaces = ")

#Convert accepted name into string 
name = name.split()

#print name list
print(name)

#Find random name in list
rand = random.choice(name)

#Print name of the person who will pay bill 
print(f"{rand} Will pay bill of today's Party..!")


'''
Output:
        Enter your friends name with giving spaces = Ram Sham Sita Laxman
        ['Ram', 'Sham', 'Sita', 'Laxman']
        Laxman Will pay bill of today's Party..!
'''
