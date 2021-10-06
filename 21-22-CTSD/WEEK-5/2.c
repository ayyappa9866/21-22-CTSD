#include<stdio.h>
void reverseOrder(int);
void reverseOrder(int n)
{
	int i;
	i=n;
	while(i>0)
	{
		printf("%d\t",i);
		i--;
	}
	printf("\nout of while loop");
}
int main()
{
	int num;
	printf("Enter any number=");
	scanf("%d",&num);
	reverseOrder(num);
	return 0;
}
