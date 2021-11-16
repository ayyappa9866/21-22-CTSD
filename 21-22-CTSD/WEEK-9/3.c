#include<stdio.h>
int main()
{
	int rows,columns;
	printf("Enter noof rows and columns:\n");
	scanf("%d%d",&rows,&columns);
	int arr[rows][columns],i,j,sum=0;
	printf("Enter Array Elements:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("Sum of elements=%d",sum);
	return 0;
}
/*#include<stdio.h>
int sumOfElements(int arr[5][5],int rows,int columns)
{
	int i,j,sum=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	return sum;
}
int main()
{
	int rows,columns;
	printf("Enter noof rows and columns:\n");
	scanf("%d%d",&rows,&columns);
	int arr[rows][columns],i,j,ans=0;
	printf("Enter Array Elements:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	ans=sumOfElements(arr,rows,columns);
	printf("Sum of elements=%d",ans);
	return 0;
}*/
