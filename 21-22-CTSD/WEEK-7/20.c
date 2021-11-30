#include<stdio.h>
int CalDigits(int n)
{
	int count=0;
	if(n==0)
	return 0;
	else 
	{
	   count=1+CalDigits(n/10);
	}
	return count;
}
int main()
{
	int n,ans;
	printf("Enter any number=");
	scanf("%d",&n);
	ans=CalDigits(n);
	printf("%d",ans);
	return 0;
}
