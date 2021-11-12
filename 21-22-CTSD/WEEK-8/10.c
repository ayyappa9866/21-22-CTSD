/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter noof elements into array:\n");
	scanf("%d",&n);
	int *ptr,sum=0,i;
	ptr=(int*)malloc(n*sizeof(int));// memory allocation
	if(ptr==NULL)// checking
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		printf("Enter Array Elements:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));
		}
		for(i=0;i<n;i++)
		{
			sum=sum+*(ptr+i);
		}
		printf("Sum of numbers=%d",sum);
		free(ptr);//de-allocation
   }
   return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not allocated");
    }
    else 
    {
        for(i=0;i<n;i++)
        {
           scanf("%d",(ptr+i));
        }
        for(i=0;i<n;i++)
        {
            sum=sum+*(ptr+i);
        }
        printf("%d",sum);
        free(ptr);
    }
   return 0; 
}
