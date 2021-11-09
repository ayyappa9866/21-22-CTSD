#include<stdio.h>
void print(int);
void print(int n)
{
	if(n==0)
	{
		
	}
	else
	{
		printf("%d ",n);
		print(n-1);
		//printf("%d ",n); 1 to n printing
		//return;
	}
}
int main()
{
	int n;
	printf("Enter n value=");
	scanf("%d",&n);
	print(n);
	return 0;
}
