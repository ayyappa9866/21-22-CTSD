#include<stdio.h>
int numberOfCuts(int n,int m)
{
	return (n*m)-1;
}
int main()
{
	int n,m,ans;
	scanf("%d%d",&n,&m);
	ans=numberOfCuts(n,m);
	printf("%d",ans);
	return 0;
}
