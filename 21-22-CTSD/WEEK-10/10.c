#include<stdio.h>
#include<strings.h>
int main()
{
    char str[100000];
    int lens,i,count=0;
    scanf("%s",str);
    lens=0;
    while(str[lens]!='\0')
    lens++;
    for(i=0;i<lens;i++)
    {
        if('A'<=str[i]&&str[i]<='Z')
        {
            count++;
        }
    }
    if(count!=0)
    count++;
    printf("%d",count);
}
