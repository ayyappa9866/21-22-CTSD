#include<stdio.h>
void calPercentage(float,int,int,int);
int main()
{
    float total;
    int bc,mc,msc;
    total=4000;
    bc=3100;
    mc=350;
    msc=150;
    calPercentage(total,bc,mc,msc);
    return 0;
}
void calPercentage(float tc,int btc,int mtc,int mscc)
{
    float bp,mp,msp,phdp;
    int phdc;
    phdc=tc-btc-mtc-mscc;
    bp=(btc/tc)*100;
    mp=(mtc/tc)*100;
    msp=(mscc/tc)*100;
    phdp=(phdc/tc)*100;
    printf("No of students registred in PhD=%d",phdc);
    printf("\n prcentage of students joined in B.Tech=%f",bp);
    printf("\n prcentage of students joined in M.Tech=%f",mp);
    printf("\n prcentage of students joined in M.S=%f",msp);
    printf("\n prcentage of students joined in PhD=%f",phdp);
}