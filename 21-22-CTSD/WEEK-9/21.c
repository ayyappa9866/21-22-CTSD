#include<stdio.h>
int main()
{
	int m,n,p,q;
	printf("Enter matrix A Size:\n");
	scanf("%d%d",&m,&n);
	printf("Enter matrix B Size:\n");
	scanf("%d%d",&p,&q);
	int A[m][n],B[p][q],sum[m][n],i,j;
	if((m==p)&&(n==q))
	{
		printf("Enter Matrix A elements:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("Enter Matrix B elements:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				sum[i][j]=A[i][j]+B[i][j];
			}
		}
		printf("Addition result:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}
	}//if
	else
	{
		printf("Matrix addition is not possible\n");
	}//else
	
	return 0;
}//main
