#include<stdio.h>
#include<limits.h>
int main()
{
	int rows,columns;
	printf("Enter noof rows and columns:\n");
	scanf("%d%d",&rows,&columns);
	int arr[rows][columns],i,j,sum=0,minindex,
	maxindex,max=INT_MIN,min=INT_MAX;
	printf("Enter Array Elements:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<columns;i++)
	{
		sum=0;
		for(j=0;j<rows;j++)
		{
			sum=sum+arr[j][i];
		}
		//printf("Column-%d sum=%d\n",i,sum);
		if(sum>max)
		{
			max=sum;
			maxindex=i;
		}
		if(sum<min)
		{
			min=sum;
			minindex=i;
		}
	}
	printf("Minimum column sum(%d) index=%d\n",min,minindex);
	printf("Maximum column sum(%d) index=%d\n",max,maxindex);
	return 0;
}
