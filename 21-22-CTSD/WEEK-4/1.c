#include<stdio.h>
float calBMI(float,float);
float calBMI(float weight,float height)
{
	float res;
	res=(weight*0.45359237)/(height*0.0254)*(height*0.0254);
	return res;
}
int main()
{
	float w,h,ans;
	printf("Enter Weight in pounds and Height in inches=");
	scanf("%f%f",&w,&h);
	ans=calBMI(w,h);
	printf("BMI=%f",ans);
	return 0;
}
