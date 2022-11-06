'''
    Program Name = Stone-Paper-Scissor Game.
    Programming Language = Python
    Guided By = Amol Bhavsar Sir
    Developer Name = Shelake Kalyani Rajendra
    Date = 09-08-2022
'''


#Import random pakage since we use "choices" function
import random

Stone = '''
    __________
---'   _______)
      (________)
      (________)
      (_______)
---.__(______)
'''

Paper = '''

    _________
---'   ______)_____
            _______)
            ________)
          ________)
---.____________)
'''

Scissor = '''

    ________
---'  ______)____
           ______)
       ___________)
      (______)
---.__(_____)

'''

#Ask user how many times he/she want to play this game
num = int(input("Enter how many times you want to play this game = "))

#Make a list, 0-->Stone   1--->Paper   2--->Scissor
L = ['Stone','Paper','Scissor']

#Play the game as long as user wants to play the game 
for i in range(num):
    
    string = "WELCOME....Let's play Stone-Paper-Scissor Game..!!!"
    print('\n\n',string.center(115,'*'))

    print("Press 0 ----->  for Stone")
    print("Press 1 ----->  for Paper")
    print("Press 2 ----->  for Scissor")
    print("Press 3 ----->  for Exit")

    #Ask user to his/her choice
    choose = int(input("Please choose any one of the above(By entering respective numbers) = "))

    #Exit from game if user enter 3
    if(choose==3):
        exit()
        
    #Give warning to user if he/she enter choice<0 or choice>3
    elif(choose<0 or choose>3):
         print("Please enter valid number..!!")
         continue

    #Print 'stone' if user choose 0
    elif(L[choose]=='Stone'):
        print(Stone)
        print("You choose a Stone.")
        
    #Print 'paper' if user choose 1
    elif (L[choose]=='Paper'):
        print(Paper)
        print("You choose a Paper.")

    #Print 'Scissor' if user choose 2
    elif (L[choose]=='Scissor'):
        print(Scissor)
        print("You choose a Scissor.")

    #Random choice for computer it may be stone,paper or scissor
    abc = random.choice(L)

    if(abc=='Stone'):
        print(Stone)
        print("Computer choose a Stone.\n\n")
    elif (abc=='Paper'):
        print(Paper)
        print("Computer choose a Paper.\n\n")
    else:
        print(Scissor)
        print("Computer choose a Scissor.\n\n")

    #Check Conditions when user will win
    if((L[choose]=='Stone' and abc=='Scissor') or (L[choose]=='Paper' and abc=='Stone') or (L[choose]=='Scissor' and abc=='Paper')):
        print("Congratulations.....!!!You is winner.")

    ##Check Conditions when user will loss
    elif((abc=='Stone' and L[choose]=='Scissor') or (abc=='Paper' and L[choose]=='Stone') or (abc=='Scissor' and L[choose]=='Paper')):
        print("So bad...!You are loser,Computer is winner.")

    #Match dropped if both user an computer choose same thing
    else:
        print("Match Dropped!! (Both choosed same thing)\n\n")


print("Your chances are over..!!")


'''
Output:
        Enter how many times you want to play this game = 2


 ********************************WELCOME....Let's play Stone-Paper-Scissor Game..!!!********************************
Press 0 ----->  for Stone
Press 1 ----->  for Paper
Press 2 ----->  for Scissor
Press 3 ----->  for Exit
Please choose any one of the above(By entering respective numbers) = 0

    __________
---'   _______)
      (________)
      (________)
      (_______)
---.__(______)

You choose a Stone.


    _________
---'   ______)_____
            _______)
            ________)
          ________)
---.____________)

Computer choose a Paper.


So bad...!You are loser,Computer is winner.


 ********************************WELCOME....Let's play Stone-Paper-Scissor Game..!!!********************************
Press 0 ----->  for Stone
Press 1 ----->  for Paper
Press 2 ----->  for Scissor
Press 3 ----->  for Exit
Please choose any one of the above(By entering respective numbers) = 1


    _________
---'   ______)_____
            _______)
            ________)
          ________)
---.____________)

You choose a Paper.

    __________
---'   _______)
      (________)
      (________)
      (_______)
---.__(______)

Computer choose a Stone.


Congratulations.....!!!You is winner.
Your chances are over..!!

'''

    

    
