#include<stdio.h>
void sum()
{
	static int a=10;
	static int b=24;
	printf("%d %d \n",a,b);//1st o/p=10 24,2nd o/p=11 25,3nd o/p=12 26
	a=a+1;//1st_a=11,2nd_a=12
	b=b+1;//1st_b=25,2nd_b=26
}
void main()
{
	int i;
	sum();
	sum();
	sum();
}
