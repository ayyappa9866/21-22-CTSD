#include<stdio.h>
#include<limits.h>
struct studentdetails
{
    char str[30];
    int regdno;
    int marks[4];
    int sum;
    float percentage;
    int max;
};/*
int main()
{
	struct studentdetails p1,p2;
	p1.max=INT_MIN;
	p2.max=INT_MIN;
	p1.sum=0;
	p2.sum=0;
	int i;
	printf("Enter student-1 name regdno=");
	scanf("%s %d",p1.str,&p1.regdno);
	printf("Enter student-1 marks in each subject");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&p1.marks[i]);
	}
	printf("Enter student-2 name regdno=");
	scanf("%s %d",p2.str,&p2.regdno);
	printf("Enter student-2 marks in each subject");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&p2.marks[i]);
	}
	for(i=0;i<4;i++)
	{
		p1.max=(p1.marks[i]>p1.max)?p1.marks[i]:p1.max;
		p2.max=(p2.marks[i]>p2.max)?p2.marks[i]:p2.max;
		p1.sum=p1.sum+p1.marks[i];
		p2.sum=p2.sum+p2.marks[i];	
	}
    p1.percentage=((p1.sum)/400.0)*100;
    p2.percentage=((p2.sum)/400.0)*100;
    printf("Student-1 details\n");
    printf("Name=%s\nRegdNo=%d\nPercentgeofmarks=%f\nMaximummarks=%d\n",p1.str,p1.regdno,p1.percentage,p1.max);
    printf("Student-2 details\n");
    printf("Name=%s\nRegdNo=%d\nPercentgeofmarks=%f\nMaximummarks=%d\n",p2.str,p2.regdno,p2.percentage,p2.max);
    if(p1.percentage>p2.percentage)
    printf("Hightest percentage among student is Roll no:%d,Name:%s,MaxPercentage=%.2f",p1.regdno,p1.str,p1.percentage);
    else
    printf("Hightest percentage among student is Roll no:%d,Name:%s,MaxPercentage=%.2f",p2.regdno,p2.str,p2.percentage);
    return 0;
}*/
void MaxPercentage(struct studentdetails p1,struct studentdetails p2)
{
	int i;
	p1.max=INT_MIN;
	p2.max=INT_MIN;
	p1.sum=0;
	p2.sum=0;
	for(i=0;i<4;i++)
	{
		p1.max=(p1.marks[i]>p1.max)?p1.marks[i]:p1.max;
		p2.max=(p2.marks[i]>p2.max)?p2.marks[i]:p2.max;
		p1.sum=p1.sum+p1.marks[i];
		p2.sum=p2.sum+p2.marks[i];	
	}
    p1.percentage=((p1.sum)/400.0)*100;
    p2.percentage=((p2.sum)/400.0)*100;
    printf("Student-1 details\n");
    printf("Name=%s\nRegdNo=%d\nPercentgeofmarks=%f\nMaximummarks=%d\n",p1.str,p1.regdno,p1.percentage,p1.max);
    printf("Student-2 details\n");
    printf("Name=%s\nRegdNo=%d\nPercentgeofmarks=%f\nMaximummarks=%d\n",p2.str,p2.regdno,p2.percentage,p2.max);
    if(p1.percentage>p2.percentage)
    printf("Hightest percentage among student is Roll no:%d,Name:%s,MaxPercentage=%.2f",p1.regdno,p1.str,p1.percentage);
    else
    printf("Hightest percentage among student is Roll no:%d,Name:%s,MaxPercentage=%.2f",p2.regdno,p2.str,p2.percentage);
}
int main()
{
	struct studentdetails p1,p2;
	int i;
	printf("Enter student-1 name regdno=");
	scanf("%s %d",p1.str,&p1.regdno);
	printf("Enter student-1 marks in each subject");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&p1.marks[i]);
	}
	printf("Enter student-2 name regdno=");
	scanf("%s %d",p2.str,&p2.regdno);
	printf("Enter student-2 marks in each subject");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&p2.marks[i]);
	}
	MaxPercentage(p1,p2);
	return 0;	
}
