#include<stdio.h>
#include<string.h>
char NumberOfUpperCase(char str[],int i)
{
    if(str[i]>='A' && str[i]<='Z')
        return str[i];
    if(i>=0)
    NumberOfUpperCase(str, i-1);
}
int main()
{
    char str[30],ans;
    printf("Enter your String:");
    scanf("%[^\n]",str);
    ans=NumberOfUpperCase(str,strlen(str)-1);
    printf("%c is capital among the string",ans);
    return 0;
}
