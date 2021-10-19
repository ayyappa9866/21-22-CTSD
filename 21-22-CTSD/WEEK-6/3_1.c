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
	if(ans==1)
	printf("%d is Power of 2 ",num);
	else
	printf("%d is not Power of 2 ",num);
	return 0;
}
