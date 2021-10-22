#include<stdio.h>
int nextPowerOf2(int);
int nextPowerOf2(int n)
{
	int result,c=0;
	while(n>0)
	{
		c++;
		n=n>>1;
	}
	result=1<<c;// This is going to calculate pow(2,c)
	return result;
}
int main()
{
	int num1,ans;
	printf("Enter any number=");
	scanf("%d",&num1);
	ans=nextPowerOf2(num1);
	printf("%d NEXT POWER OF 2=%d",num1,ans);
	return 0;
}

