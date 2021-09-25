#include<stdio.h>
void arrangeASC(float,float,float);
void arrangeASC(float num1,float num2,float num3)
{
	float min1=num1,min2=num1,max1=num1;
	if(num2<min1)
	{
		min2=min1;
		min1=num2;
	}
	else if(num2<min2)	
	min2=num2;
	if(num3<min1)
	{
		min2=min1;
		min1=num3;
	}
	else if(num3<min2)	
	min2=num3;
	
	if(num2>max1)
	max1=num2;
	if(num3>max1)
	max1=num3;
   printf("%f %f %f",min1,min2,max1);	
	
}
int main()
{
	float n1,n2,n3;
	printf("Enter any three numbers=");
	scanf("%f%f%f",&n1,&n2,&n3);
	arrangeASC(n1,n2,n3);
	return 0;	
}

