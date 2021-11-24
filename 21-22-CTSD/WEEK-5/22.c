#include<stdio.h>
void DisplayTable(int num)
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i!=num)
		printf("%d * %d = %d\n",num,i,num*i);
	}
}
int main()
{
	int n1,n2;
	printf("enter any  2 numbers");
	scanf("%d",&n1,&n2);
	DisplayTable(n1);
	printf("\n");
	DisplayTable(n2);
	return 0;
}
