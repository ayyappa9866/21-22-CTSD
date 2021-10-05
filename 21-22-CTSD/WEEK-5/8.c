#include<stdio.h>
long long int fibonacci(int);
long long int fibonacci(int n)
{
	long long int f1=1,f2=2,f,i;
	long long int sum=f2;
	printf("%lld\t%lld\t",f1,f2);
	for(i=3;i<=n;i++)
	{
		f=f1+f2;
		printf("%lld\t",f);
		if(f%2==0)
		{
			sum=sum+f;
		}
		f1=f2;
		f2=f;
	}
	return sum;
}
int main()
{
	int not;
	long long int ans;
	printf("Enter no of terms=");
	scanf("%d",&not);
	ans=fibonacci(not);
	printf("\nEven terms sum=%lld",ans);
	return 0;
}

