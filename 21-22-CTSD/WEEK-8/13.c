#include <stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = num-1; i>=0;i--)
        printf("%d ",arr[i]);
    return 0;
}

