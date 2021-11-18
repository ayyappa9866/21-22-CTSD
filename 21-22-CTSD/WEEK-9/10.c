#include<stdio.h>
int main()
{
    int v,n;
    scanf("%d",&v);
    scanf("%d",&n);
    int arr[n],i,index=-1,low=0,high=n-1,mid;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while((low<=high)&&(index==-1))
    {
        mid=(low+high)/2;
        if(arr[mid]==v)
        {
            index=mid;
        }
        else if(arr[mid]<v)
        low=mid+1;
        else 
        high=mid-1;
        
    }
    printf("%d",index);
    return 0;
    
}
