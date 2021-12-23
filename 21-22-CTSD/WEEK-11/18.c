#include<stdio.h>
struct student
{
	int rollno;
	char name[30];
	int marks;
};/*
int main()
{
	
	int n,i,j;
	printf("Enter any number");
	scanf("%d",&n);
	struct student arr[n],temp;
	for(i=0;i<n;i++)
	{
		printf("Enter student-%d info as rollno,name,marks\n",i+1);
		scanf("%d %s %d",&arr[i].rollno,&arr[i].name,&arr[i].marks);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j].marks<arr[j+1].marks)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d %s %d\n",arr[i].rollno,arr[i].name,arr[i].marks);
	}
}*/
void StudentRank(int n,struct student *arr)
{
	struct student temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j].marks<arr[j+1].marks)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	printf("Enter any number");
	scanf("%d",&n);
	struct student arr[n],temp;
	for(i=0;i<n;i++)
	{
		printf("Enter student-%d info as rollno,name,marks\n",i+1);
		scanf("%d %s %d",&arr[i].rollno,&arr[i].name,&arr[i].marks);
	}
	StudentRank(n,arr);
	for(i=0;i<n;i++)
	{
		printf("%d %s %d\n",arr[i].rollno,arr[i].name,arr[i].marks);
	}
}
