#include<stdio.h>
float midDistance(float);
float midDistance(float dist)
{
	float miles,res;
	miles=dist/2;
	res=miles * 1.6;
	return res;
}
int main()
{
	float distance,ans;
	distance=50;
	ans=midDistance(distance);
	printf("Distance need to travel both=%f",ans);
	return 0;
}
