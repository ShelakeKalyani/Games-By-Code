'''
    Program Name = Accept number of digit,charcter and special symbol from user and giver password.
    Programming Language = Python
    Guided By = Amol Bhavsar Sir
    Developer Name = Shelake Kalyani Rajendra
    Date = 03-08-2022
'''


#Here,we use "choice" function from random module hence we import random module
import random
digit = ['0','1','2','3','4','5','6','7','8','9']
character = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
Special_symbol = ['!','@','#','$','%','^','&','*','?']

#Create list to store password
List = []
Pass = ''

#Accepts how many number of digits user require in his/her password 
digit_no = int(input("Enter how many digits you want = "))

#Accepts how many number of characters user require in his/her password 
char_no = int(input("Enter how many characters you want = "))

#Accepts how many number of special symbols user require in his/her password 
Sp_no = int(input("Enter how many special symbol you want = "))

for i in range(digit_no):
    List.append(random.choice(digit))       #Accep random number which is eqal to "digit_no" from "digit" list and append it on List

for i in range(char_no):
    List.append(random.choice(character))   #Accep random characters which is eqal to "char_no" from "character" list and append it on List

for i in range(Sp_no):
    List.append(random.choice(Special_symbol))  ##Accep random special symbols which is eqal to "Sp_no" from "Special_symbol" list and append it on List

random.shuffle(List)            # Now shuffle list

for i in List:
    Pass = Pass+str(i)      # convert password string format
    
print(f"Your Password is = '{Pass}'")



'''
Outpt:
        Enter how many digits you want = 2
        Enter how many characters you want = 3
        Enter how many special symbol you want = 2
        Your Password is = 't$s*r98'
'''



