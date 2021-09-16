#include<stdio.h>
void employee(FILE*);
void employee(FILE *fp1)
{
	int empid;
	char ename[30];
	long long int esalary;
	char egender;
	printf("Enter empid,ename,esalary,egender=");
	scanf("%d%s%lld %c",&empid,ename,&esalary,&egender);
	fprintf(fp1,"%d\n%s\n%lld\n%c\n",empid,ename,esalary,
	egender);
	fclose(fp1);
}
int main()
{
	FILE *fp;
	fp=fopen("input5.txt","a");
	if(fp==NULL)
	{
		printf("File not created");
	}
	else
	{
		employee(fp);	
	}
	return 0;
}

