#include<stdio.h>
void selection()
{
	int ch1,ch2,ch3;
	printf("MENU of Schools\n");
	printf("1.School of Computer Science\n");
	printf("2.School of Business\n");
	printf("Enter your choice(School selection)=");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			printf("MENU of Departments(Computer Science)\n");
			printf("1.Department of Informatics\n");
			printf("2.Department of Machine Learning\n");
			printf("Enter your choice(Department selection)=");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
					printf("Department of Informatics\n");
					break;
				case 2:
					printf("Department of Machine Learning\n");
					break;
				default:
					printf("Invalid choice\n");
					break;
			}// case1 switch
			break;
		case 2:
			printf("MENU of Departments(School Business)\n");
			printf("1.Department of Commerce\n");
			printf("2.Department of Purchasing\n");
			printf("Enter your choice(Department selection)=");
			scanf("%d",&ch3);
			switch(ch3)
			{
				case 1:
					printf("Department of Commerce\n");
					break;
				case 2:
					printf("Department of Purchasing\n");
					break;
				default:
					printf("Invalid choice\n");
					break;
			}// case2 switch
			break;
			default:
				printf("Invalid choice\n");
				break;
	}//outer switch
	
}// function
int main()
{
	selection();
	return 0;
 } 
