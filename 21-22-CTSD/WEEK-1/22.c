#include<stdio.h>
int calcAmount(int,int,int);
int calcAmount(int x,int a,int b)
{
	int res;
	res=a+(b*(100-x));
	return res;
}
int main()
{
	int X,A,B,ans;
	X=35;
	A=120;
	B=2;
	ans=calcAmount(X,A,B);
	printf("the maximum amount of sugar that can desolve in 1L of water=%d",ans);
	return 0;
}

