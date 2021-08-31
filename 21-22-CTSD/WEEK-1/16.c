#include<stdio.h>
float calBill(int,int); // prototype declaration of a function
int main()
{
    int penc,choc;
    float ans;
    penc=10;
    choc=5;
    ans=calBill(penc,choc); // function calling
    printf("Remaining amount=%f",ans);
    return 0;
}
float calBill(int pc,int cc) // function body
{
    float res,total;
    total= 1.5 * pc + 10 * cc;
    res=100-total;
    return res;
}