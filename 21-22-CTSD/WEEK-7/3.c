#include<stdio.h>
int fib(int n)
{
	int res=0;
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	{
		//printf("n=%d and res=%d\n",n,res);
		res=fib(n-1)+fib(n-2);
		//printf("n=%d and res=%d\n",n,res);
		return res;	
	}
}
int main()
{
	int n,ans;
	printf("Enter any number=");
	scanf("%d",&n);
	ans=fib(n);
	printf("Nth fibonacci term=%d",ans);
	return 0;
}
