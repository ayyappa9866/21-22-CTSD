#include<stdio.h>
int predictNumber(int);
int predictNumber(int n)
{
	int res;
	if (n>0)
	{
		res=1000;
	}
	else
	{
	    if (n<0)
	    {
			res=-200;
	    }
	    else
	    {
		    res=5000;
	    }
	}
	return res;
}
int main()
{
	int x,ans;
	x=10;
	ans=predictNumber(x);
	if(ans>0)
	{
		printf("the credits given to the user=%d",ans);
	}
	else
    {
	
		if(ans<0)
		{
			printf("the credits given to the user=%d",ans);
		}
		else
		printf("the credits given to the user=%d",ans);
	}
	return 0;
}

