#include<stdio.h>
#include<math.h>
int amstrong(int n)
{
	int nd=0,sum=0,rem,n1;
	n1=n;
	while(n1!=0)
	{
		nd++;
		n1=n1/10;
	}
	while(n!=0)
	{
		rem=n%10;
		sum=sum+pow(rem,nd);
		n=n/10;
	}
	return sum;
}
int main()
{
	int num,ans;
	printf("Enter Any Number=");
	scanf("%d",&num);
	ans=amstrong(num);
	if(num==ans)
	printf("AMSTRONG\n");
	else
	printf("NOT AN AMSTRONG NUMBER\n");
	return 0;
}
