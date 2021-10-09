#include<stdio.h>
long long int findPower(int x,int y)
{
	long long int p=1,i;
	if(y==0)
	{
		return 1;
	}
	else
	{
		i=1;
		while(i<=y)
		{
			p=x*p;
			i++;
		}
		return p;
	}
}
int main()
{
	int test;
	printf("Enter nof test cases=");
	scanf("%d",&test);
	while(test--)
	{
		int base,exp;
		long long int ans;
		printf("Enter Base and Exponent=");
		scanf("%d %d",&base,&exp);
		ans=findPower(base,exp);
		printf("%lld\n",ans);
	}
	return 0;
}
