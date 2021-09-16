#include<stdio.h>
#include<limits.h>
void minMax(FILE*);
void minMax(FILE *fp1)
{
	int num,total=0,min=INT_MAX,max=INT_MIN;
	printf("Enter score="); 
	scanf("%d",&num);
	fprintf(fp1,"%d ",num); // writing data into a file
	
	printf("Enter score=");
	scanf("%d",&num);
	fprintf(fp1,"%d ",num);
	
	printf("Enter score=");
	scanf("%d",&num);
	fprintf(fp1,"%d ",num);
	
	printf("Enter score=");
	scanf("%d",&num);
	fprintf(fp1,"%d ",num);
	
	printf("Enter score=");
	scanf("%d",&num);
	fprintf(fp1,"%d ",num); // writing data into a file
	
	fclose(fp1);
	fp1=fopen("kuldeep.txt","r");
	
	fscanf(fp1,"%d",&num); // reding data from a file
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
	
	printf("Total score=%d\n",total);
	printf("Minimum Score=%d\n",min);
	printf("Maximum Score=%d\n",max);
	
	fclose(fp1);
}
int main()
{
	FILE *fp;// file pointer declaraction
	fp=fopen("kuldeep.txt","w");
	if(fp==NULL)
	{
		printf("File is not created");
	}
	else
	{
		minMax(fp);
	}
	return 0;
}

