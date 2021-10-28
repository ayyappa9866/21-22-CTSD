/*#include<stdio.h>
int main()
{
	int n,noofbits=0,p;
	printf("Enter any number=");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		noofbits++;
		n>>=1;
	}
	printf("No of leading zeros for the given %d decimal number=%d"
	,p,32-noofbits);
	return 0;
}*/
#include<stdio.h>
int countBits(int n)
{
	int noofbits;
	while(n>0)
	{
		noofbits++;
		n>>=1;
	}
	return noofbits;
}
int main()
{
	int num,ans;
	printf("Enter any number=");
	scanf("%d",&num);
	ans=countBits(num);
	printf("No of leading zeros for the given %d decimal number=%d",
	num,32-ans);
	return 0;
}
