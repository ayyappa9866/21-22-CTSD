#include<stdio.h>
int CalcDays(int ,int ,int );
int CalcDays(int x,int m,int d)
{
	int res;
	if (x+d<(m*x))
{
	res=x+d;
	}	
	else
	{
		res=m*x;
	}
	return res;
}
int main()
	{
		int x1,m1,d1,ans;
		x1=2;
		m1=2;
		d1=3;
		ans=CalcDays(x1,m1,d1);
		printf("the maximum days to complete work=%d",ans);
		return 0;
	}

