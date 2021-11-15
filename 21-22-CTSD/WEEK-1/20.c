#include<stdio.h>
int swapNumbers(int,int);
int swapNumbers(int x,int y)
{
	int c;
    c=x;
	x=y;
	y=c;
	printf("x,y values after swaping =%d,%d",x,y);
}
int main()
{
	int a,b;
	a=20;
	b=10;
	swapNumbers(a,b);
	return 0;
}


