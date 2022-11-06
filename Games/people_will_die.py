'''
    Program Name = Enter your age and find out your remaning days,weeks,months and years.
    Programming Language = Python
    Guided By = Amol Bhavsar Sir
    Developer Name = Shelake Kalyani Rajendra
    Date = 29-07-2021
'''

#Accept age from user
Age = int(input("Enter your age = "))

#Here, we consider people will live 90 year.
if(Age==90):
    print("You are very close to the death.")
elif(Age<=0):
    print("You are not exist in this world..!!You have to born first..")
elif(Age>90):
    print("You are already dead..!")


else:
    #Life span of user is 90 year hence we calculate remaining age by subtracting user age from 90 
    Remaining_age = 90 - Age

    #In one year there is 365 days, hence remaning days = 365*Remaining_age
    Days = 365*Remaining_age

    #In one year there is 52 weeks, hence remaning weeks = 52*Remaining_age
    Weeks = 52*Remaining_age

    ##In one year there is 12 Months, hence remaning months = 12*Remaining_age
    Months = 12*Remaining_age

    #Print Remaning days,weeks,months and year
    print(f"You have {Days},{Weeks} Weeks,{Months} months and {Remaining_age} years")


'''
Output:
    Enter your age = 20
    You have 25550,3640 Weeks,840 months and 70 years.

Output:
    Enter your age = 90
    You are very close to the death.

Output:
    Enter your age = 100
    You are already dead..!

Output:
    Enter your age = -9
    You are not exist in this world..!!You have to born first..
'''
