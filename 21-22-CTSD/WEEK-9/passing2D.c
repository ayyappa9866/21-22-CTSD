/*#include<stdio.h>
const int r=3,c=3;// constant global variables 
int main()
{
	printf("%d %d",r++,c); // changing the value of constant variable r is not allowed
	return 0;
}*/
/*#include<stdio.h>
#define R 3// macros
#define C 3
int main()
{
	printf("%d %d",R++,C);
	return 0;
}*/
#include<stdio.h>
void display(int r,int c,int a[][c])
{
	int i,j;
	printf("2D Array Elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void print(int b[],int c)// passing single row in 2D array
{
	int i;
	printf("\nROW\n");
	for(i=0;i<c;i++)
	{
		printf("%d ",b[i]);
	}
}
int main()
{
	int r,c;
	printf("Enter noof rows and columns:\n");
	scanf("%d%d",&r,&c);
	int arr[r][c],i,j;
	printf("Enter array Elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		//print(arr[i],c);
	}
	display(r,c,arr); // passing 2D array
	print(arr[0],c);  // passsing oth row in 2D array
	print(arr[1],c);  // passing 1st row in 2D array
	print(arr[2],c);  // passing 2nd row in 2D array 
	return 0;	
}



