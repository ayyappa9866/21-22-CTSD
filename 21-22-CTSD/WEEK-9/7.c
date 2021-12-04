#include<stdio.h>
void SherlockandArray(int n,int a[])
{
    int i,first=0,last=0;
        for(i=1;i<n;i++){
            last=last+a[i];
        }
        for(i=0;i<n-1;i++){
            if(first==last){
                printf("YES\n");
                break;
            }            
            first=first+a[i];
            last=last-a[i+1];
        }
        if(i==n-1&&n!=1)
            printf("NO\n");
        if(n==1)
            printf("YES\n");
}
int main(){
    int t,n,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
     SherlockandArray(n,a);  
    }
    return 0;
}

