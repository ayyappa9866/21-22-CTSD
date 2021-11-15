#include<stdio.h>
float calcPercentage(float *,float);
float calPercentage(float *arr,float tot)
{
	float res;
	res=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])*100/tot;
	return res;
}
int main()
{
	float  a[5],ans,total;
	printf("enter the marks obtained in each subject and toatl marks=");
	scanf("%f%f%f%f%f%f",&a[0],&a[1],&a[2],&a[3],&a[4],&total);
	ans=calPercentage(a,total);
	printf("\nthe percentage of marks obtained=%.4f",ans);
	return 0;
}

