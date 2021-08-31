#include<stdio.h>
float calHours(int,int);
float calHours(int n,int t)
{
	float res;
	res=(n*(n+1)/2)*t/60.0;
	return res;
}
int main()
{
	int days,x;
	float ans;
	days=7;
	x=20;
	ans=calHours(days,x);
	printf("No of hours required to slove problems=%f",ans);
	return 0;
}

