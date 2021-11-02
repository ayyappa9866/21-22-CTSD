#include<stdio.h>
int factorial(int);
int factorial(int n)
{
	int fact;
	if(n==0)
	return 1;
	else
	{
		//printf("n=%dandfact=%d\n",n,fact);
		fact=n*factorial(n-1);
		//printf("n=%dandfact=%d\n",n,fact);
		return fact;
	}
}
int main()
{
	int n,ans;
	printf("Enter any number=");
	scanf("%d",&n);
	ans=factorial(n);
	printf("Factorial of %d is=%d",n,ans);
	return 0;
}
