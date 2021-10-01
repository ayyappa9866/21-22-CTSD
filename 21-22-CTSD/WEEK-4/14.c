#include<stdio.h>
int calFine(int d1,int m1,int y1,int d2,int m2,int y2)
{
    int fine=0;
    if(y1>y2)
    fine=10000;
    else if(y1==y2 && m1>m2)
    fine=500*(m1-m2);
    else if(y1==y2 && m1==m2 && d1>d2)
    fine=(d1-d2)*15;
    else
    fine=0;
    return fine;
}
int main()
{
    int d1,m1,y1,d2,m2,y2,ans;
    scanf("%d%d%d",&d1,&m1,&y1);
    scanf("%d%d%d",&d2,&m2,&y2);
    ans=calFine(d1,m1,y1,d2,m2,y2);
    printf("%d",ans);
    return 0;   
}
