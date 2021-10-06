#include<stdio.h>
void jump(int);
void jump(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
int main()
{
	int num;
	printf("Enter any number=");
	scanf("%d",&num);
	jump(num);
	return 0;
}
