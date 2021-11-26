#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int x1,y1,x2,y2,x,y;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        x=x2*2-x1;
        y=y2*2-y1;
        printf("%d %d\n",x,y);
    }
    return 0;
}

