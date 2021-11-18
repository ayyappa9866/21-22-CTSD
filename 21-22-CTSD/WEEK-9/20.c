#include<stdio.h>
int main()
{
	char arr[3][3]={{'H','H','H'},{'H','H','H'},{'H','H','H'}};
	int n,i,j,rem;
	printf("Enter n value:\n");
	scanf("%d",&n);
	for(i=2;i>=0;i--)
	{
		/*if(n==0)
		break;*/
		for(j=2;j>=0;j--)
		{
			rem=n%2;
			if(rem)
			arr[i][j]='T';
			n=n>>1;// n=n/2;
			/*if(n==0)
			break;*/
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
