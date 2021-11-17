#include<stdio.h>
void calpercentage(float marks,float total)
{
	float percentage;
	percentage=(marks/total)*100;
	printf(" %f",percentage);
	if(percentage<=25){
		printf("the grade of the studentfor %f percrntage=F",percentage);
	}
	else if(25<percentage&& percentage<=45){
		printf("the grade of the studentfor %f percrntage=E",percentage);
	}
	else if(45<percentage&& percentage<=50){
		printf("the grade of the studentfor %f percrntage=D",percentage);
	}
	else if(50<percentage&& percentage<=60){
		printf("the grade of the studentfor %f percrntage=C",percentage);
	}
	else if(60<percentage&& percentage<=80){
		printf("the grade of the studentfor %f percrntage=B",percentage);
	}
	else {
		printf("the grade of the studentfor %f percrntage=A",percentage);
	}
}
int main()
{
	float m,t;
	printf("enter the marks obtained by the student and total marks=");
	scanf("%f%f",&m,&t);
	calpercentage(m,t);
	return 0;
}
