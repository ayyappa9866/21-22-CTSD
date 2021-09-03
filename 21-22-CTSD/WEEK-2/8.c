#include<stdio.h>
int whichDay(int);
int whichDay(int num)
{
	int res;
	res=2 * num - 1;
	return res;
}
int main()
{
	int n,ans;
	printf("Enter nth Golden egg=");
	scanf("%d",&n);
	ans=whichDay(n);
	printf("The %dth golden egg is available in %dth day",n,ans);
	return 0;
}
