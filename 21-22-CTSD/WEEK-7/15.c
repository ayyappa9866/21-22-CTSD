#include<stdio.h>
#include<math.h>
int prime(int n,int i)
{
    if(i!=1)
    {
        
        if(n%i!=0)
         {
            return prime(n,i-1);
         }
        else 
		{
            return 0;
        }
    }
        else 
            return 1;
}
int main()
{
    int num,ans;
    scanf("%d", &num);
    ans=prime(num,sqrt(num));
    if (ans== 1)
        printf("yes");
    else
        printf("no");

    return 0;
}
