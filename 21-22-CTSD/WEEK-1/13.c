#include<stdio.h>
#include<math.h>
float getDistance(int,int,int,int,int);
float getDistance(int ax,int ay,int bx,int by,int d)
{
	float res;
	res=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay))+d;
	return res;	
}
int main()
{
	int x1,y1,x2,y2,dis;
	float ans;
	x1=1;
	y1=1;
	x2=2;
	y2=3;
	dis=2;
	ans=getDistance(x1,y1,x2,y2,dis);
	printf("Distance from A to C Via B=%f",ans);
	return 0;
}
