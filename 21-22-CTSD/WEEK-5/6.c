#include<stdio.h>
void fib(int);
void fib(int n)
{
	int f0=0,f1=1,f,i;
	printf("%d\t%d\t",f0,f1);	
	for(i=2;i<=n;i++)
	{
		f=f1+f0;
		printf("%d\t",f);
		f0=f1;
		f1=f;	
	}	
}
int main()
{
	int not;
	printf("Enter no of terms=");
	scanf("%d",&not);
	fib(not);
	return 0;
}
