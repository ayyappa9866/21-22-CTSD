#include<stdio.h>
int migratery(int *h)
{
	int  res,max=h[1],i;
    for(i=2;i<6;i++)
    {
        if(max<h[i])
        {
            max=h[i];
            res=i;
        }
    }
    return res;
}
int main()
{
    int n,ans,i;
    printf("Enter no of elements=");
    scanf("%d",&n);
    int a[n],h[6]={0};
    printf("Enter the array elements=");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      h[a[i]]++;  
    }
   ans=migratery(h);
   printf("%d",ans);
    return 0;
}

