#include<stdio.h>
void printxy(int x, int y)
{
int *ptr;
x=0;
ptr=&x;
y=*ptr;
*ptr=1;
printf("%d,%d",x,y);
}
void main()
{
	printxy(1,1);
}

// output : 1,0
