#include<stdio.h>
void TimeConversion(int h,int m,int s,char c1)
{
	if(c1=='P'&&h!=12)
    h=h+12;
    if(c1=='A'&&h==12&&m>0)
        h=h-12;
    if(c1=='A'&&m==0,s==0)
        h=0;
    printf("%02d:%02d:%02d",h,m,s);
}
int main()
{
    int h,m,s;
    char c1,c2;
    scanf("%d:%d:%d%c%c",&h,&m,&s,&c1,&c2);
    TimeConversion(h,m,s,c1);
    return 0;
}
