#include<stdio.h>
struct point
{
	int x;
	int y;
};
/*
int main()
{
	struct point p[4];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter %d point",i+1);
		scanf("%d %d",&p[i].x,&p[i].y);
		if(p[i].x>0&&p[i].y>0)
		printf("The coordinate point (%d,%d) lies in First quadrant\n",p[i].x,p[i].y);
		else if(p[i].x<0&&p[i].y>0)
		printf("The coordinate point (%d,%d) lies in second quadrant\n",p[i].x,p[i].y);
		else if(p[i].x<0&&p[i].y<0)
		printf("The coordinate point (%d,%d) lies in third quadrant\n",p[i].x,p[i].y);
		else if(p[i].x==0&&p[i].y==0)
		printf("The C=coordinate point (%d,%d) lies at origin\n",p[i].x,p[i].y);
		else
		printf("The coordinate point (%d,%d) lies in fourth quadrant\n",p[i].x,p[i].y);
	}
	return 0;
}*/
void Coordinate(struct point *p)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(p[i].x>0&&p[i].y>0)
		printf("The coordinate point (%d,%d) lies in First quadrant\n",p[i].x,p[i].y);
		else if(p[i].x<0&&p[i].y>0)
		printf("The coordinate point (%d,%d) lies in second quadrant\n",p[i].x,p[i].y);
		else if(p[i].x<0&&p[i].y<0)
		printf("The coordinate point (%d,%d) lies in third quadrant\n",p[i].x,p[i].y);
		else if(p[i].x==0&&p[i].y==0)
		printf("The coordinate point (%d,%d) lies at origin\n",p[i].x,p[i].y);
		else
		printf("The coordinate point (%d,%d) lies in fourth quadrant\n",p[i].x,p[i].y);
	}
}
int main()
{
	struct point p[4];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter %d point",i+1);
		scanf("%d %d",&p[i].x,&p[i].y);
	}
	Coordinate(p);
	return 0;
}
