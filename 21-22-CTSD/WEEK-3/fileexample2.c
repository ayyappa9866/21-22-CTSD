/* Write a C program to read 4 integers from a file 
and print sum on console */
#include<stdio.h>
int main()
{
	FILE *fp1;
	int num,sum=0;
	fp1=fopen("input3.txt","r");// file is in same folder
	//fp1=fopen("path of the file","r"); file is in different location
	if(fp1==NULL)
	{
		printf("File not exists");
	}
	else
	{
		fscanf(fp1,"%d",&num);
		sum=sum+num;
		
		fscanf(fp1,"%d",&num);
		sum=sum+num;
		
		fscanf(fp1,"%d",&num);
		sum=sum+num;
		
		fscanf(fp1,"%d",&num);
		sum=sum+num;
		printf("Sum is=%d",sum);
		fclose(fp1);
	}
	return 0;
}
