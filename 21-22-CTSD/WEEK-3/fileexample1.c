#include<stdio.h>
int main()
{
	FILE *fp1;// file pointer declaration
	int num;
	fp1=fopen("input1.txt","w");// opening a file
	
	printf("Enter a number=");
	scanf("%d",&num);
	fprintf(fp1,"%d\t",num);// to write data into a file
	
	printf("Enter a number=");
	scanf("%d",&num);
	fprintf(fp1,"%d\t",num);
	
	printf("Enter a number=");
	scanf("%d",&num);
	fprintf(fp1,"%d\t",num);
	
	printf("Enter a number=");
	scanf("%d",&num);
	fprintf(fp1,"%d\t",num);
	fclose(fp1);// to close a file
	return 0;
}
