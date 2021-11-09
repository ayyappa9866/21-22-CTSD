#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
{
	//int rem=0,res=0;
	int rem=0;
	rem=a%b;
	if(rem==0)
	return b;
	else
	{
		//printf("a=%d,b=%d and res=%d\n",a,b,res);
		//res=gcd(b,rem);
		//printf("a=%d,b=%d and res=%d\n",a,b,res);
		// return res;
		return gcd(b,rem);
	}
}
int main()
{
	int a,b,ans;
	printf("Enter any 2 numbers=");
	scanf("%d%d",&a,&b);
	ans=gcd(a,b);
	printf("GCD of %d and %d is=%d",a,b,ans);
	return 0;
}
