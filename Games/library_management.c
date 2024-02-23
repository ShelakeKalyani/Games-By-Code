//project name:Library System 
//devolper name: Shelake Kalyani Rajendra
// Date of Started: 29/sep/2021

#include<stdio.h>

void Insert_FYS(int);
void Insert_SYS(int);
void Insert_TYS(int);

void Display_FYS(int);
void Display_SYS(int);
void Display_TYS(int);

void Insert_FYB(int);
void Insert_SYB(int);
void Insert_TYB(int);

void Display_FYB(int);
void Display_SYB(int);
void Display_TYB(int);

void Del_FYS(int);
void Del_SYS(int);
void Del_TYS(int);

void Del_FYB(int);
void Del_SYB(int);
void Del_TYB(int);

void Search_FYS(int);
void Search_SYS(int);
void Search_TYS(int);

void Search_FYB(int);
void Search_SYB(int);
void Search_TYB(int);

struct stud
{
	int roll_no;
	char F_name[20];
	char M_name[20];
	char L_name[20];
	char add[50];
}S[10],S1[10],S2[10];

struct Book
{
	int Book_id;
	char Book_name[15];
	char Book_author[20];
	int Book_price;
}B[10],B1[10],B2[10];

int num = 0,num1 = 0,num2 = 0,nb,nb1,nb2;

int main()
{
	int choice = 0;
	while(1)
	{
		printf("\n**** KALYANI Library System ****\n");
		puts("1.Insert");
		puts("2.Delete");
		puts("3.Display");
		puts("4.Search");
		puts("5.Exit");
		
		printf("Enter Your Choice = ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
					printf("1.Student\n");
					printf("2.Book\n");
					
					printf("Enter Your Choice = ");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											printf("Enter how many students you want to insert = ");
											scanf("%d",&num);
										
											Insert_FYS(num);
											break;
									case 2:
											printf("Enter how many students you want to insert = ");
											scanf("%d",&num1);
											
											Insert_SYS(num1);
											break;
									case 3:
											printf("Enter how many students you want to insert = ");
											scanf("%d",&num2);
											
											Insert_TYS(num2);
											break;
									default:
											printf("Invalid choice..\n");
								}
									break;
						case 2:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											printf("Enter how many Books you want to insert = ");
											scanf("%d",&nb);
											Insert_FYB(nb);
											break;
									case 2:
											printf("Enter how many Books you want to insert = ");
											scanf("%d",&nb1);
											Insert_SYB(nb1);
											break;
									case 3:
											printf("Enter how many Books you want to insert = ");
											scanf("%d",&nb2);
											Insert_TYB(nb2);
											break;
									default:
											printf("Invalid choice..\n");
								}
									break;
						default:
								printf("Invalid choice..\n");
					}
					break;
			case 2:
					printf("1.Student\n");
					printf("2.Book\n");
					
					printf("Enter Your Choice = ");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											Del_FYS(num);
											num--;
											break;
									case 2:
											Del_SYS(num1);
											num1--;
											break;
									case 3:
											Del_TYS(num2);
											num2--;
											break;
									default:
											printf("Invalid choice..\n");
								}
								break;
						case 2:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											Del_FYB(nb);
											nb--;
											break;
									case 2:
											Del_SYB(nb1);
											nb1--;
											break;
									case 3:
											Del_TYB(nb2);
											nb2--;
											break;
									default:
											printf("Invalid choice..\n");
								}
								break;
						default :
								printf("Invalid choice..\n");
					}
					break;
			case 3:
					printf("1.Student\n");
					printf("2.Book\n");
					
					printf("Enter Your Choice = ");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											Display_FYS(num);
											break;
									case 2:
											Display_SYS(num1);
											break;
									case 3:
											Display_TYS(num2);
											break;
									default:
											printf("Invalid choice..\n");
								}
									break;
						case 2:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											Display_FYB(nb);
											break;
									case 2:
											Display_SYB(nb1);
											break;
									case 3:
											Display_TYB(nb2);
											break;
									default:
											printf("Invalid choice..\n");
								}
									break;
					}
					break;
			case 4:
					printf("1.Student\n");
					printf("2.Book\n");
					
					printf("Enter Your Choice = ");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											Search_FYS(num);
											break;
									case 2:
											Search_SYS(num1);
											break;
									case 3:
											Search_SYS(num2);
											break;
									default:
											printf("Invalid choice..\n");
								}
									break;
						case 2:
								printf("1.FY\n");
								printf("2.SY\n");
								printf("3.TY\n");
								
								printf("Enter Your Choice = ");
								scanf("%d",&choice);
								
								switch(choice)
								{
									case 1:
											Search_FYB(num);
											break;
									case 2:
											Search_SYB(num1);
											break;
									case 3:
											Search_TYB(num2);
											break;
									default:
											printf("Invalid choice..\n");
								}
									break;
					}
					break;
			case 5:
					return 0;
			default:
					printf("Invalid Choice..\n");
					
		}
	
	}
	return 0;
}

void Insert_FYS(int num)
{	
	int i;
	for(i=0;i<num;i++)
	{
		S[i].roll_no = i+10;
		printf("Enter First name = ");
		scanf("%s",&S[i].F_name);
		printf("Enter Middle name = ");
		scanf("%s",&S[i].M_name);
		printf("Enter Last name = ");
		scanf("%s",&S[i].L_name);
		printf("Enter Address = ");
		scanf("%s",&S[i].add);
	}
	return;
}

void Display_FYS(int num)
{
	int i;
	if(num==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("now num = %d\n",num);
	printf("\n Information of FY students :-");
	printf("\nroll_no\t\t first name\t mid name\tlast name\tAddress");
	
	for(i=0;i<num;i++)
	{
	printf("\n %d\t\t %s\t\t%s\t\t %s\t\t %s",S[i].roll_no,S[i].F_name,S[i].M_name,S[i].L_name,S[i].add);
    }
 }
    return;
}

void Insert_SYS(int num1)
{	
	int i=0;
	for(i=0;i<num1;i++)
	{
		S1[i].roll_no = i+10;
		printf("Enter First name = ");
		scanf("%s",&S1[i].F_name);
		printf("Enter Middle name = ");
		scanf("%s",&S1[i].M_name);
		printf("Enter Last name = ");
		scanf("%s",&S1[i].L_name);
		printf("Enter Address = ");
		scanf("%s",&S1[i].add);
	}
	return;
}

void Display_SYS(int num1)
{
	int i;
	if(num1==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("\n Information of SY students :-");
	printf("\nroll_no\t\t first name\t mid name\tlast name\tAddress");
	
	for(i=0;i<num1;i++)
	{
	printf("\n %d\t\t %s\t\t%s\t\t %s\t\t %s",S1[i].roll_no,S1[i].F_name,S1[i].M_name,S1[i].L_name,S1[i].add);
    }
 }
    return;
}

void Insert_TYS(int num2)
{	
	int i;
	
	for(i=0;i<num2;i++)
	{
		S2[i].roll_no = i+10;
		printf("Enter First name = ");
		scanf("%s",&S2[i].F_name);
		printf("Enter Middle name = ");
		scanf("%s",&S2[i].M_name);
		printf("Enter Last name = ");
		scanf("%s",&S2[i].L_name);
		printf("Enter Address = ");
		scanf("%s",&S2[i].add);
	}
	return;
}

void Display_TYS(int num2)
{
	int i;
	if(num2==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("\n Information of TY students :-");
	printf("\nroll_no\t\t first name\t mid name\tlast name\tAddress");
	
	for(i=0;i<num2;i++)
	{
	printf("\n %d\t\t %s\t\t%s\t\t %s\t\t %s",S2[i].roll_no,S2[i].F_name,S2[i].M_name,S2[i].L_name,S2[i].add);
    }
 }
    return;
}

void Insert_FYB(int nb)
{
	int i;
	for(i=0;i<nb;i++)
	{
		B[i].Book_id = i+100;
		printf("Enter Book name = ");
		scanf("%s",&B[i].Book_name);
		fflush(stdin);
		printf("Enter Book Author name = ");
		scanf("%s",&B[i].Book_author);
		fflush(stdin);
		printf("Enter Book price = ");
		scanf("%d",&B[i].Book_price);
		fflush(stdin);
	}
	return;
}

void Display_FYB(int nb)
{
	int i;
	if(nb==0)
	{
		printf("No any book is present..!!\n");
	}
	else
 {
	printf("\n Information of FY Books :-");
	printf("\nBook id \t Book name\t\t Book author\t\t Book price");
	
	for(i=0;i<nb;i++)
	{
		printf("\n %d \t\t %s\t\t\t %s \t\t\t %d",B[i].Book_id,B[i].Book_name,B[i].Book_author,B[i].Book_price);
	}
 }
	return;
}

void Insert_SYB(int nb1)
{
	int i;
	for(i=0;i<nb1;i++)
	{
		B1[i].Book_id = i+100;
		printf("Enter Book name = ");
		scanf("%s",&B1[i].Book_name);
		fflush(stdin);
		printf("Enter Book Author name = ");
		scanf("%s",&B1[i].Book_author);
		fflush(stdin);
		printf("Enter Book price = ");
		scanf("%d",&B1[i].Book_price);
		fflush(stdin);
	}
	return;
}

void Display_SYB(int nb1)
{
	int i;
	if(nb1==0)
	{
		printf("No any book is present..!!\n");
	}
	else
 {
	printf("\n Information of FY Books :-");
	printf("\nBook id \t Book name\t\t Book author\t\t Book price");
	
	for(i=0;i<nb1;i++)
	{
		printf("\n %d \t\t %s\t\t\t %s \t\t\t %d",B1[i].Book_id,B1[i].Book_name,B1[i].Book_author,B1[i].Book_price);
	}
 }
	return;
}

void Insert_TYB(int nb2)
{
	int i;
	if(nb2==0)
	{
		printf("No any book is present..!!\n");
	}
	else
 {
	for(i=0;i<nb2;i++)
	{
		B2[i].Book_id = i+100;
		printf("Enter Book name = ");
		scanf("%s",&B2[i].Book_name);
		fflush(stdin);
		printf("Enter Book Author name = ");
		scanf("%s",&B2[i].Book_author);
		fflush(stdin);
		printf("Enter Book price = ");
		scanf("%d",&B2[i].Book_price);
		fflush(stdin);
	}
 }
	return;
}

void Display_TYB(int nb2)
{
	int i;
	if(nb2==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("\n Information of FY Books :-");
	printf("\nBook id \t Book name\t\t Book author\t\t Book price");
	
	for(i=0;i<nb2;i++)
	{
		printf("\n %d \t\t %s\t\t\t %s \t\t\t %d",B2[i].Book_id,B2[i].Book_name,B2[i].Book_author,B2[i].Book_price);
	}
 }
	return;
}

void Del_FYS(int num)
{
	int rs_no = 0,i,j,flag = 0;
	
	if(num==0)
	{
		printf("No any student is present..!\n");
	}
	else
 {
	printf("Enter roll no. that you want to delete = ");
	scanf("%d",&rs_no);
	
	for(i=0;i<num;i++)
	{
		if(rs_no==S[i].roll_no)
		{
			flag = 1;
			break;
		}	
	}
	if(flag==1)
	{
		for(j=i;j<num;j++)
			{
				S[j] = S[j+1];
			//	num--;
			}
			printf("Record deleted succesfully...\n");
	}
	else
	{
		printf("Roll no. not found..\n");
	}
 }
	return;
}

void Del_SYS(int num1)
{
	int rs_no = 0,i,j,flag = 0;
	
	if(num1==0)
	{
		printf("No any student is present..!\n");
	}
	else
 {
	printf("Enter roll no. that you want to delete = ");
	scanf("%d",&rs_no);
	
	for(i=0;i<num1;i++)
	{
		if(rs_no==S1[i].roll_no)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		for(j=i;j<num1;j++)
			{
				S1[j] = S1[j+1];
			//	num1--;
			}
		printf("Record deleted succesfully...\n");
	}
	else
	{
		printf("Roll no. not found..\n");
	}
 }
	return;
}

void Del_TYS(int num2)
{
	int rs_no = 0,i,j,flag = 0;
	
	if(num2==0)
	{
		printf("No any student is present..!\n");
	}
	else
 {
	printf("Enter roll no. that you want to delete = ");
	scanf("%d",&rs_no);
	
	for(i=0;i<num2;i++)
	{
		if(rs_no==S2[i].roll_no)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		for(j=i;j<num2;j++)
			{
				S2[j] = S2[j+1];
			//	num2--;
			}
		printf("Record deleted succesfully...\n");
	}
	else
	{
		printf("Roll no. not found..\n");
	}
 }
	return;
}

void Search_FYS(int num)
{
	int rs_no = 0,flag = 0,i = 0;
	
	if(num==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter roll no. that you want to search = ");
	scanf("%d",&rs_no);
	
	for(i=0;i<num;i++)
	{
		if(rs_no==S[i].roll_no)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Student found.\n");
	}
	else
	{
		printf("Student not found.\n");
	}
 }
	return;
}

void Search_SYS(int num1)
{
	int rs_no = 0,flag = 0,i = 0;
	
	if(num1==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter roll no. that you want to search = ");
	scanf("%d",&rs_no);
	
	for(i=0;i<num1;i++)
	{
		if(rs_no==S1[i].roll_no)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Student found.\n");
	}
	else
	{
		printf("Student not found.\n");
	}
 }
	return;
}

void Search_TYS(int num2)
{
	int rs_no = 0,flag = 0,i = 0;
	
	if(num2==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter roll no. that you want to search = ");
	scanf("%d",&rs_no);
	
	for(i=0;i<num2;i++)
	{
		if(rs_no==S2[i].roll_no)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Student found.\n");
	}
	else
	{
		printf("Student not found.\n");
	}
 }
	return;
}

void Search_FYB(int nb)
{
	int id = 0,flag = 0,i = 0;
	
	if(nb==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter roll no. that you want to search = ");
	scanf("%d",&id);
	
	for(i=0;i<num;i++)
	{
		if(id==B[i].Book_id)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Book found.\n");
	}
	else
	{
		printf("Book not found.\n");
	}
 }
	return;
}

void Search_SYB(int nb1)
{
	int id = 0,flag = 0,i = 0;
	
	if(nb1==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter roll no. that you want to search = ");
	scanf("%d",&id);
	
	for(i=0;i<num1;i++)
	{
		if(id==B1[i].Book_id)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Book found.\n");
	}
	else
	{
		printf("Book not found.\n");
	}
 }
	return;
}

void Search_TYB(int num2)
{
	int id = 0,flag = 0,i = 0;
	
	if(nb2==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter roll no. that you want to search = ");
	scanf("%d",&id);
	
	for(i=0;i<num2;i++)
	{
		if(id==B2[i].Book_id)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Book found.\n");
	}
	else
	{
		printf("Book not found.\n");
	}
 }
	return;
}

void Del_FYB(int nb)
{
	int id = 0,i = 0,j,flag = 0;
	if(nb==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter book id that you want to delete = ");
	scanf("%d",&id);
	
	for(i=0;i<nb;i++)
	{
		if(id==B[i].Book_id)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		for(j=i;j<nb;j++)
			{
				B[j] = B[j+1];
			//	nb--;
			}
		printf("Record deleted succesfully...\n");
	}
	else
	{
		printf("Book id not found..\n");
	}
 }
	return;
}

void Del_SYB(int nb1)
{
	int id = 0,i,j,flag = 0;
	
	if(nb1==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter book id that you want to delete = ");
	scanf("%d",&id);
	
	for(i=0;i<nb1;i++)
	{
		if(id==B1[i].Book_id)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		for(j=i;j<nb1;j++)
			{
				B1[j] = B1[j+1];
			//	nb1--;
			}
		printf("Record deleted succesfully...\n");
	}
	else
	{
		printf("Book id not found..\n");	
	}
 }
	return;
}

void Del_TYB(int nb2)
{
	int id = 0,i,j,flag = 0;
	
	if(nb2==0)
	{
		printf("No any student is present..!!\n");
	}
	else
 {
	printf("Enter book id that you want to delete = ");
	scanf("%d",&id);
	
	for(i=0;i<nb2;i++)
	{
		if(id==B2[i].Book_id)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		for(j=i;j<nb2;j++)
			{
				B2[j] = B2[j+1];
			//	nb2--;
			}
		printf("Record deleted succesfully...\n");
	}
	else
	{
		printf("Book id not found..\n");
	}
 }
	return;
}
