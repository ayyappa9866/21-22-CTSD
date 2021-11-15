#include<stdio.h>
float calcVolume(float,float);
float calcVolume(float r,float h)
{
	float res;
	res=(3.14)*(r*r*h)/3;
	return res;
}
int main()
{
	float radius,height,ans;
	printf("enter the radius=");
	scanf("%f",&radius);
	printf("enter the height=");
	scanf("%f",&height);
	ans=calcVolume(radius,height);
	printf("the volume of cone=%f",ans);
	return 0;
}

