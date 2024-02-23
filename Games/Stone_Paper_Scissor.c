/*
    Program Name = Stone-Paper-Scissor Game.
    Programming Language = C
    Name = Shelake Kalyani Rajendra
    Date = 06-09-2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int choice,rand_no;
	
	srand(time(0));
	rand_no = rand()%3;
	    
    printf("Random number = %d\n",rand_no);
    
	printf("**********Welcome to Stone-Paper-Scissor Game***********\n");
	puts("0.Stone");
	puts("1.Paper");
	puts("2.Scissor");
	
	printf("Enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 0:	
				if(rand_no==choice)
				{
					printf("Computer select a stone and you select a Stone.\n\n");
					printf("Match Dropped...!");
				}
				else if(rand_no==1)
				{
					printf("Computer select a Paper and you select a Stone.\n\n");
					printf("You Loss..!Computer winner..\n");
				}
				else if(rand_no==2)
				{
					printf("Computer select a Scissor and you select a Stone.\n\n");
					printf("Congratulations..!!You are winner..\n");
				}
				break;
		case 1:
				if(rand_no==choice)
				{
					printf("Computer select a Paper and you select a Paper.\n\n");
					printf("Match Dropped...!");
				}
				else if(rand_no==0)
				{
					printf("Computer select a Stone and you select a Paper.\n\n");
					printf("Congratulations..!!You are winner..\n");
				}
				else if(rand_no==2)
				{
					printf("Computer select a Scissor and you select a Paper.\n\n");
					printf("You Loss..!Computer winner..\n");
				}
				break;
		case 2:
				if(rand_no==choice)
				{
					printf("Computer select a Scissor and you select a Scissor.\n\n");
					printf("Match Dropped...!");
				}
				else if(rand_no==0)
				{
					printf("Computer select a Stone and you select a Scissor.\n\n");
					printf("You Loss..!Computer winner..\n");
				}
				else if(rand_no==1)
				{
					printf("Computer select a Paper and you select a Scissor.\n\n");
					printf("Congratulations..!!You are winner..\n");
				}
				break;
		default:
				printf("Please Enter valid number..!!\n");
	}
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    printf("%d ", rand()%3);
   return 0;
}
*/








































