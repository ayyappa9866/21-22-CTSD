#include <stdio.h>
int main()

{ 

    char s1[100001],s2[100001];
    scanf("%s %s",s1,s2);
    int x=0,y=0,count=0,ans,i,lens1,lens2;
	lens1=0;
    while(s1[lens1]!='\0')
    lens1++;
	lens2=0;
    while(s2[lens2]!='\0')
    lens2++;
    for(i=0;i<lens1;i++)
    {

        if(s1[i]=='1'){

            x++;
        }
        if(s2[i]=='1'){
            y++;
        }
        if(s1[i]!=s2[i]){
            count++;
        }
    }
    if(x!=y)
    {
        printf("%d",-1);
        return 0;
    }
    
    else
    {
		printf("%d",count/2);
    }
}
