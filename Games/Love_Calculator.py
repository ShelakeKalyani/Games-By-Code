'''
    Program Name = Love Calculator.
    Programming Language = Python
    Guided By = Amol Bhavsar Sir
    Developer Name = Shelake Kalyani Rajendra
    Date = 09-08-2022
'''

#Accept user name
name1 = input("Enter your name = ")

#Acept user's friend name
name2 = input("Enter your friend name = ")

#Conacat this two strings
name = name1+name2


#print(f"{name}")

#Convert all string in uppercase
Final = name.upper()

#Calculate count of T,R,U and E in concated string
T = Final.count('T')
R = Final.count('R')
U = Final.count('U')
E = Final.count('E')

#Calculate count of L,O,V and E in concated string
L = Final.count('L')
O = Final.count('O')
V = Final.count('V')
E = Final.count('E')

#Total count of TRUE
Tcount = T+R+U+E

#Total count LOVE
Lcount = L+O+V+E

#Concat count of TRUE and count of LOVE
Total = str(Tcount)+str(Lcount)

#Print Love in Percentage
print(f"Your Love is {Total}%.")




'''Output:
    Enter your name = Kalyani
    Enter your friend name = Vrushali
    Your Love is 23%.
'''


