/* super digit */
#include<stdio.h>
int superDigit(char super[],int i)
{
    int sum;
    if(super[i]=='\0')
    return 0;
    else
    {
        sum=(super[i]-'0')+superDigit(super,i+1);
        return sum;
     } 
}
int main()
{
    char super[100000];
    int i,sum=0,k;
    scanf("%s %d",super,&k);
    i=0;
    /*while(super[i]!='\0')
    {
        sum=sum+(super[i]-'0');
        i++;
    }*/
    sum=superDigit(super,i);
    sum=((sum%9)*(k%9))%9;
    if(sum==0)
    printf("9");
    else 
    printf("%d",sum);
    return 0;
}

