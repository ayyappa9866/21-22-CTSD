#include<stdio.h>
#include<limits.h>
void minMax(FILE*);
void minMax(FILE *fp1)
{
	int score[5],num,min=INT_MAX,max=INT_MIN,total=0;
	printf("Enter 5 scores=");
	scanf("%d%d%d%d%d",&score[0],&score[1],&score[2],&score[3],
	&score[4]);
	fprintf(fp1,"%d %d %d %d %d",score[0],score[1],score[2],score[3],
	score[4]);
	fclose(fp1);
	fp1=fopen("kuldeep.txt","r");
	
	fscanf(fp1,"%d",&num);
	total=total+num;
	min=num<min?num:min;
	max=num>max?num:max;
	
	fscanf(fp1,"%d",&num);
	total=total+num;
	min=num<min?num:min;
	max=num>max?num:max;
	
	fscanf(fp1,"%d",&num);
	total=total+num;
	min=num<min?num:min;
	max=num>max?num:max;
	
	fscanf(fp1,"%d",&num);
	total=total+num;
	min=num<min?num:min;
	max=num>max?num:max;
	
	fscanf(fp1,"%d",&num);
	total=total+num;
	min=num<min?num:min;
	max=num>max?num:max;
	
	printf("Total Score=%d\n",total);
	printf("Minimum Score=%d\n",min);
	printf("Maximum Score=%d\n",max);
	fclose(fp1);
}
int main()
{
	FILE *fp;
	fp=fopen("kuldeep.txt","w");
	if(fp==NULL)
	{
		printf("File not Created");
	}
	else
	{
		minMax(fp);	
	}
	return 0;
}
