#include<stdio.h>
int main()
{
	int m,n,p,q;
	printf("Enter Matrix A size:\n");
	scanf("%d%d",&m,&n);
	printf("Enter Matrix B size:\n");
	scanf("%d%d",&p,&q);
	int A[m][n],B[p][q],mul[m][q],i,j,k;
	if(n==p)
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
			for(j=0;j<q;j++)
			{
				mul[i][j]=0;
				for(k=0;k<n;k++)
				{
					mul[i][j]=mul[i][j]+A[i][k]*B[k][j];
				}
			}
		}
		printf("Multiplication Result:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d ",mul[i][j]);
			}
			printf("\n");
		}
	}//if
	else
	{
		printf("MATRIX MULTIPLICATION NOT POSSIBLE\n");
	}//else
	return 0;
}//main
