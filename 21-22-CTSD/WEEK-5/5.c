#include<stdio.h>
int isPerfect(int);
int isPerfect(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
int main()
{
	int num,ans;
	printf("Enter any number=");
	scanf("%d",&num);
	ans=isPerfect(num);
	if(ans==num)
	printf("Perfect Number");
	else
	printf("Not a Perfect Number");
	return 0;
}
