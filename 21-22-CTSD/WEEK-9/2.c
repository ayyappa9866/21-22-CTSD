#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the no of elements in the array:\n");
    scanf("%d",&n);
    int v[n],sum[2]={0},i;
    for(i=0;i<n;i++)
    {
    scanf("%d",&v[i]);
    if(i%2==0)
    sum[0]=sum[0]+v[i];
    else
    sum[1]=sum[1]+v[i];
}
int va=(sum[0]-sum[1])/2;
va=abs(va);
if (sum[0]>sum[1])
    printf("arwin %d",va);
    else
    printf("suhas %d",va);
}
