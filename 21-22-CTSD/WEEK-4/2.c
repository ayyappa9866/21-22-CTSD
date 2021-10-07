#include<stdio.h>
void display(long int d,long int oc,long int of,long int od,long int cs,long int cb,long int cm,long int cd)
{
    long int onlinecost,clasiccost;
    if(d<=of)
    onlinecost=oc;
    else
    onlinecost=oc+(d-of)*od;
    clasiccost=cb+(d/cs)*cm+d*cd;
    if(onlinecost<=clasiccost)
    printf("Online Taxi");
    else
    printf("Classic Taxi");
}
int main()
{
    long int d1,oc1,of1,od1,cs1,cb1,cm1,cd1;
    scanf("%ld%ld%ld%ld%ld%ld%ld%ld",&d1,&oc1,&of1,&od1,&cs1,&cb1,&cm1,&cd1);
    display(d1,oc1,of1,od1,cs1,cb1,cm1,cd1);
    return 0;
}
