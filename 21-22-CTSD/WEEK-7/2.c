#include<stdio.h>
int sumOfNaturalNumbers(int n)
{
	int sum=0;
	if(n==0)
	return 0;
	else
	{
		//printf("n=%d and sum=%d\n",n,sum);
		sum=n+sumOfNaturalNumbers(n-1);
		//printf("n=%d and sum=%d\n",n,sum);
		return sum;
	}
}
int main()
{
	int n,ans;
	printf("Enter any number=");
	scanf("%d",&n);
	ans=sumOfNaturalNumbers(n);
printf("Sum of first %d natural numbers=%d",n,ans);
	return 0;
}
