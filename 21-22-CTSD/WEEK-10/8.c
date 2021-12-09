#include<stdio.h>
int main()
{
    char str[1000000];
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%s",str);
    int i,lens;
    lens=0;
    while(str[lens]!='\0')
    lens++;
    for(i=0;i<lens;i++)
    {
        if(i%2==0)
        {
            printf("%c",str[i]);
        }
    }
    printf(" ");
    for(i=0;i<lens;i++)
    {
        if(i%2!=0)
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
}
}
