#include<stdio.h>
void findQuadrant(int,int);
void findQuadrant(int x1,int y1)
{
	if(x1>0 && y1>0)
	printf("Q-1");
	else if(x1<0 && y1>0)
	printf("Q-2");
	else if(x1<0 && y1<0)
	printf("Q-3");
	else if(x1>0 && y1<0)
	printf("Q-4");
	else if(x1==0 && y1==0)
	printf("Origin");
}
int main()
{
	int x,y;
	printf("Enter x and y=");
	scanf("%d%d",&x,&y);
	findQuadrant(x,y);// function calling
	return 0;
}
