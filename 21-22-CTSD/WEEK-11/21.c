#include<stdio.h>
#include<limits.h>
struct employee
{
	int empid;
	char name[30];
	int salary;
};
int main()
{
	int n,i,max=INT_MIN,sum=0;
	printf("Enter any number:\n");
	scanf("%d",&n);	
	struct employee arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d",&arr[i].empid,arr[i].name,&arr[i].salary);
		max=(arr[i].salary>max)?arr[i].salary:max;
		sum=sum+arr[i].salary;
	}
	printf("highest salary =%d\nTotal salary of employees=%d",max,sum);
	return 0;
}
