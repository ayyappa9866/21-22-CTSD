#include<stdio.h>
#include<limits.h>
    struct subscriber
	{
		char name[30];
		int mb[12];
	};
int main()
{
	struct subscriber client[3];
	int i,j,max=INT_MIN,min=INT_MAX;
	float avg=0.0;
	for(i=0;i<3;i++)
	{
		printf("Enter subscriber-%d details:\n",i+1);
		printf("Enter name of a subscriber=");
		scanf("%s",client[i].name);
		printf("Enter subscriber-%d monthly bills:\n",i+1);
		for(j=0;j<12;j++)
		{
			scanf("%d",&client[i].mb[j]);
		}	
	}
	for(i=0;i<3;i++)
	{
		avg=0.0;
		max=INT_MIN,min=INT_MAX;
		printf("subscriber-%d Avarage Bill,Maximum bill and Minimum bill:\n",
		i+1);
		printf("Name of a subscriber=%s\n",client[i].name);
		for(j=0;j<12;j++)
		{
			avg=avg+client[i].mb[j];
			if(client[i].mb[j]>max)
			max=client[i].mb[j];
			if(client[i].mb[j]<min)
			min=client[i].mb[j];
		}
		avg=avg/12;
		printf("Average Bill=%f\n",avg);
		printf("Minimum Bill=%d\n",min);
		printf("Maximum Bill=%d\n",max);	
	}
	return 0;	
}//main
