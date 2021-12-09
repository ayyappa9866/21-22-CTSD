#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100000];
        scanf("%s",s);
    int vc[5]={0},res,i;
    long long tot=1;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a')
        vc[0]=1;
        else if(s[i]=='e')
        vc[1]=1;
        else if(s[i]=='i')
        vc[2]=1;
        else if(s[i]=='o')
        vc[3]=1;
        else if(s[i]=='u')
        vc[4]=1;
        else if(s[i]=='_')
        {
        res=vc[0]+vc[1]+vc[2]+vc[3]+vc[4];
        tot=tot*res;
        }
    }
    printf("%lld\n",tot);
    }
    return 0;
}
