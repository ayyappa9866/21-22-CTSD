#include<stdio.h>
void display(int);
void display(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
	printf("\nout of for loop");
}
int main()
{
	int num;
	printf("Enter any number=");
	scanf("%d",&num);
	display(num);
	return 0;
}
