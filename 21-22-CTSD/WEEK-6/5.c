#include<stdio.h>
int onesCount(int n)
{
	int onescount=0;
	while(n>0)
	{
		if((n & 1)==1)
		onescount++;
		n=n>>1;
	}
	return onescount;
}
int main()
{
	int num,ans;
	printf("Enter Any Number=");
	scanf("%d",&num);
	ans=onesCount(num);
	if(ans%2==0)
	printf("James wins");
	else
	printf("Tom wins");
	return 0;
}
