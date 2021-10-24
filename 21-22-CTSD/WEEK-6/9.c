/*#include<stdio.h>
int main()
{
	int n,rev=0,rem,p;
	printf("Enter any number=");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		rem=(n&1);
		rev=rev<<1|rem;
		n=n>>1;//n>>=1
	}
	if(p==rev)
	printf("Palindrome");
	else
	printf("Not a Palindrome");
	return 0;
} */
#include<stdio.h>
void palindrome(int n)
{
	int p,rem,rev=0;
	p=n;
	while(n>0)
	{
		rem=(n&1);
		rev=rev<<1|rem;
		n=n>>1;//n>>=1
	}
	if(p==rev)
	printf("Palindrome");
	else
	printf("Not a Palindrome");
}
int main()
{
	int num1;
	printf("Enter any number=");
	scanf("%d",&num1);
	palindrome(num1);
	return 0;
}
