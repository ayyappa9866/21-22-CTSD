#include<stdio.h>
int calSumofDigits(int);
int calSumofDigits(int num)
{
	int sum=0,rem;
	
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	
	return sum;	
}
int main()
{
	int n,ans;
	printf("Enter any 3 digit positive number=");
	scanf("%d",&n);
	ans=calSumofDigits(n); // function calling
	printf("Sum of digits of a given number=%d",ans);
	return 0;
}

