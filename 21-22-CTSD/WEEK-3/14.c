#include<stdio.h>
int bomb();
int p;
int sum=5;
int main()
{
	p=bomb();p=6
	printf("%d %d",sum,p);//o/p 6,6
	return 0;
}
int bomb()
{
	sum=sum+1;//sum=6
	return (sum);
}
