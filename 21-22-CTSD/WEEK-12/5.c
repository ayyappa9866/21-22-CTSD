#include<stdio.h>
#include<limits.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
void push(int value)
{
	top++;
	stack[top]=value;
}
int Minimum()
{
	int min=INT_MAX,i;
	for(i=0;i<=top;i++)
	min=(stack[i]<min)?stack[i]:min;
	return min;
}
int main()
{
	int i,n,ans;
	printf("Enter number of elements");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		push(arr[i]);
	}
	ans=Minimum();
	printf("%d",ans);
	return 0;
}
