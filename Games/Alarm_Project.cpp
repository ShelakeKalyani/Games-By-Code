#include<stdio.h>
#include<stdlib.h>
int main()
{
	int h=0,m=0,s=0,h1=0,m1=0,s1=0;
	double i;
	printf("Enter time in format HH:MM:SS\n\n");
	scanf("%d%d%d",&h,&m,&s);

	printf("set alaram in HH:MM:SS\n\n");
	scanf("%d%d%d",&h1,&m1,&s1);
	
	if(h<24 && m<60 && s<60)
	{
		start:
		for(h;h<24;h++)
		{
			for(m;m<60;m++)
			{
				for(s;s<60;s++)
				{
					system("cls");
					printf("%d:%d:%d",h,m,s);
			
					if(h<12)
					{
						printf("PM");
					}
					else
					{
						printf("AM");
					}
					
					if(h==h1 && m==m1 && s==s1)
					{
						printf("\a");
					}
					for(i=0;i<99999999;i++)
					{
						i++;
						i--;
					}
				
				}
				s=0;
			}
			m=0;
		}
		h=0;
	goto start;
}
else
{
	printf("Enter correct time format in HH:MM:SS\n");
}
}
