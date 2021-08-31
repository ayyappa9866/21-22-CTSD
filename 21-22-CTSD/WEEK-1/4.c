#include<stdio.h>
#include<math.h>
float calDistance(float,float);//prototype declaration of a function
float calDistance(float d,float h) // defination of a function
{
	float res,rad;
	rad= d * 3.14 /180;
	res=h/tan(rad);
	return res;	
}
int main()
{
	float deg,height,ans;
	deg=40;
	height=45;
	ans=calDistance(deg,height); // function calling
	printf("Distance=%f",ans);
	return 0;
}
