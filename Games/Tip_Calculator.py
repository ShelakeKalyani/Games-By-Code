''' Program Name = Tip Calculator
    Language = Python
    Guided By = Amol Bhavsar Sir
    Developer Name = Shelake Kalyani
    Date = 21-07-2022 '''


Total_Amount = int(input("Enter total amount = "))                  #Total Bill
Tip = int(input("Enter tip in percent = "))                         #Tip


while(Tip>100 or Tip<0):                                            #Tip should be in 0 to 100%
    print("Wrong Tip..!!Please enter tip between 0 to 100%...")
    Tip = int(input("Enter tip in percent = "))

else:
    People = int(input("Enter total number of peoples = "))         #How many peoples are present


    Tip_per = (Tip/100)*(Total_Amount)              #convert tip in percentage and multiply it by total bill
    final = (Total_Amount+Tip_per)/People           #total bill + tip and calculate how many rupees pay each person
    bill = round(final,2)                           #Round it upto 2 decimal digits

    print("Each person will pay {}".format(bill))


'''
Output:
        Enter total amount = 2000
        Enter tip in percent = 20
        Enter total number of peoples = 5
        Each person will pay 480.0
'''
