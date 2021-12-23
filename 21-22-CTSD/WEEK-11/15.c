#include<stdio.h>
struct ADDRESS
{
	char city[30];
	int pincode;
	char state[30];
};
struct employees
{
	char name[30];
	struct ADDRESS add;
};
int main()
{
	struct employees e[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter employee-%d details:\n",i+1);
		printf("Enter name of employee:\n");
		scanf("%s",e[i].name);
		printf("Enter city,pincode and state:\n");
		scanf("%s%d%s",e[i].add.city,&e[i].add.pincode,e[i].add.state);
	}
	printf("Display Employee Details:\n");
	for(i=0;i<3;i++)
	{
	    printf("Display employee-%d details:\n",i+1);
		printf("Name:%s\n",e[i].name);
		printf("City:%s\nPincode:%d\nState:%s\n"
		,e[i].add.city,e[i].add.pincode,e[i].add.state);
	}
	return 0;	
}
