#include<stdio.h>
int fabonacci(int n)
{
	int newnum=0,rem;
	while(n!=0)
	{
		rem=n%10;
		newnum=newnum*10+rem;
		n=n/10;
	}
	return newnum;
}
int main()
{
	int n,ans;
	printf("Enter any number=");
	scanf("%d",&n);
	ans=fabonacci(n);
	printf("%d\n",ans);
	if(ans==n)
	printf("PALINDRONE");
	else 
	printf("NOT A PALINDRONE");
	return 0;
}
