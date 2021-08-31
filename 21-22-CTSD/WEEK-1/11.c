#include<stdio.h>
int calTime(int,int,int,int);
int calTime(int h1,int m1,int h2,int m2)
{
	int res;
	res=(h2*60+m2)-(h1*60+m1);
	return res;
}
int main()
{
	int hr1,min1,hr2,min2,ans;
	hr1=15;
	min1=10;
	hr2=16;
	min2=5;
	ans=calTime(hr1,min1,hr2,min2);
	printf("Time taken to slove a problem=%d",ans);
	return 0;
}

