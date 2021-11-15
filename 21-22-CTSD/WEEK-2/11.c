#include<stdio.h>
long long int calcSum(long long int);
long long int calcSum(long long int phoneno)
{
	long long int res;
	res=(phoneno/100000000)+(phoneno%100);
	return res;
}
int main()
{
	long long int phonen,ans;
    printf("enter the phoneno=");
    scanf("%lld",&phonen);
	ans=calcSum(phonen);
	printf("the sum of first 2 digits and last 2 digits=%lld",ans);
	return 0;
}

