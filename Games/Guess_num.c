/*
    Program Name = Guess number Game.
    Programming Language = C
    Name = Shelake Kalyani Rajendra
    Date = 06-09-2022
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num,guess,i;
	
	//Generate random number between 1 to 100
	srand(time(0));
	num = rand()%100;
		
	//printf("%d \n",num);
	
	//User can try 5 times to guess number
	for(i=0;i<=4;i++)
	{
		printf("Enter your guess number = ");
		scanf("%d",&guess);
		
		//check, If user guess is correct
		if(num==guess)
		{
			printf("Congratulations...!!your guess is correct..\n");
			break;
		}
		
		//Check, if user guess is larger than computer guess
		else if(guess>num)
		{
			printf("Select a number smaller than %d.\n\n",guess);
		}
		
		//Check, if user guess is smaller than computer guess
		else
		{
			printf("Select a number greater than %d.\n\n",guess);
		}
	}
	
	
	//Display output who will winner
	if(i==5)
	{
		printf("OOPS....You Loss..!!\n");
		printf("Computer chose the number %d.\n",num);
	}
	
}





/*
Output:
		Enter your guess number = 80
		Select a number smaller than 80.
		
		Enter your guess number = 70
		Select a number smaller than 70.
		
		Enter your guess number = 60
		Select a number smaller than 60.
		
		Enter your guess number = 40
		Select a number smaller than 40.
		
		Enter your guess number = 30
		Select a number smaller than 30.
		
		OOPS....You Loss..!!
		Computer chose the number 26.
		
		
Output:
		Enter your guess number = 90
		Select a number smaller than 90.
		
		Enter your guess number = 60
		Select a number greater than 60.
		
		Enter your guess number = 70
		Select a number smaller than 70.
		
		Enter your guess number = 65
		Select a number smaller than 65.
		
		Enter your guess number = 64
		Congratulations...!!your guess is correct..
		
*/
