#include<stdio.h>
int noOfCho(int);
int noOfCho(int n)
{
	int res;
	res=n*(n+1)/2;
	return res;
}
int main()
{
	int N,ans;
	printf("Enter days=");
	scanf("%d",&N);
	ans=noOfCho(N);
	printf("Total no of cho=%d",ans);
	return 0;
	
}

