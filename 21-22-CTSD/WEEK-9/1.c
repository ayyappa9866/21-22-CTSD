#include<stdio.h>
void GameResult(int n,int a[n],int s[n])
{
	int s1=0,s2=0,i;
	for(i=0;i<n;i++)
	{
		s1=s1+a[i];
	}
	for(i=0;i<n;i++)
	{
		s2=s2+s[i];
	}
	if(s1>s2)
	printf("Arwin Wins");
	else if(s1<s2)
	printf("Suhas Wins");
	else 
	printf("Draw");
}
int main()
{
	int n,i;
	printf("Enter any number=");
	scanf("%d",&n);
	int a[n],s[n];
	printf("Enter Arwin score:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Suhas score:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	GameResult(n,a,s);
	return 0;
}
