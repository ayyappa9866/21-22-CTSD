#include<stdio.h>
float calAverage(FILE*);
float calAverage(FILE *fp1)
{
	int num[10],temp;
	float sum=0,res;
	printf("Enter 10 resistance values=");
	scanf("%d%d%d%d%d%d%d%d%d%d",
	&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],
	&num[7],&num[8],&num[9]);
	fprintf(fp1,"%d %d %d %d %d %d %d %d %d %d",
	num[0],num[1],num[2],num[3],num[4],num[5],num[6],
	num[7],num[8],num[9]);
	fclose(fp1);
	fp1=fopen("res.txt","r");
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	fscanf(fp1,"%d",&temp);
	sum=sum+temp;
	res=sum/10;
	return res;
}
int main()
{
	FILE *fp;
	float ans;
	fp=fopen("res.txt","w");
	if(fp==NULL)
	{
		printf("FILE does not exists");
	}
	else
	{
		ans=calAverage(fp);
		printf("Average Resistance=%f",ans);
		//fclose(fp);	
	}
	return 0;
}
