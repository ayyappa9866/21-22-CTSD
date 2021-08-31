#include"stdio.h"
float simpleInterest(int,int,float); // prototype declaration of a function
int main()
{
   int p,t;
   float r,ans;
   p=700000;
   t=4;
   r=12.5;
   ans=p+simpleInterest(p,t,r); // function calling
   printf("Amout need to pay=%.2f",ans);
   return 0;
}
float simpleInterest(int p1,int t1,float r1) // function body
{
    float res;
    res= (p1 * t1 * r1)/100;
    return res;
}