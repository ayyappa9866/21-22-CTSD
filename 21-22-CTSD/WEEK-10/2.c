#include<stdio.h>
int Password(char*str,int lens) 
{    
    int l=0;
    int u=0;
    int n=0;
    int s=0;
    int i;
    for(i=0;i<lens; i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            l++;//lower case
        else if(str[i]>='A'&&str[i]<='Z')
           u++;//upper Case
        else if(str[i] >='0'&&str[i]<='9')
          n++;//number
        else
            s++;//special case
    }//for
    int count = 0;
    if(l==0)
        count++;
    if(u==0)
        count++;
    if(n== 0)
        count++;
    if(s== 0)
        count++;
    lens=lens+count;
    if(lens<6)
        count=count+6-(lens);
    return count;
}//Password
int main() {
    int ans,lens; 
    char str[50];
    printf("Enter the string elements");
    scanf("%s", str);
    lens=0;
    while(str[lens]!='\0')
    lens++;
    ans=Password(str,lens);
    printf("the minimum number of characters to get a strong password=%d\n", ans);
    return 0;
}//main
