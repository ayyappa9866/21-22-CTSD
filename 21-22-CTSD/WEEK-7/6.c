#include<stdio.h>
int power(int,int);
/*int power(int base,int exp)
{
	int res=0;
	if(exp==0)
	return 1;
	else
	{
		res=base*power(base,exp-1);
		return res;
	}
}*/
int power(int base,int exp)
{
	int res=0;
	if(exp==0)
	return 1;
	else if(exp==1)
	return base;
	res=power(base,exp/2);
	if(exp%2==0)
	return res*res;
	else
	return base*res*res;
}
int main()
{
	int x,y,ans;
	printf("Enter any 2 numbers=");
	scanf("%d%d",&x,&y);
	ans=power(x,y);
	printf("%d power of %d is=%d",x,y,ans);
	return 0;
}
