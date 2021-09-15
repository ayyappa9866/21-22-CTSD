#include<stdio.h>
float calAverage(FILE*);
float calAverage(FILE *fp1)
{
	int num;
	float res,sum=0;
	// writing data into a file
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	printf("Enter resistance=");
	scanf("%d",&num);
	fprintf(fp1,"%d\n",num);
	fclose(fp1);
	// reading data from a file
	fp1=fopen("res.txt","r");
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	fscanf(fp1,"%d",&num);
	sum=sum+num;
	//printf("sum is=%f",sum);
	res=sum/10;
	fclose(fp1);
	
	return res;	
}
int main()
{
	FILE *fp;
	float ans;
	fp=fopen("res.txt","w");
	if(fp==NULL)
	{
		printf("FILE not created");
	}
	else
	{
		ans=calAverage(fp);
		printf("Average Resistance=%f",ans);
		//fclose(fp);	
	}
	return 0;
}
