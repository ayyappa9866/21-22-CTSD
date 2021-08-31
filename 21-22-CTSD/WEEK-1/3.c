#include<stdio.h>
#include<math.h>
float calTan(float);
int main()
{
    float degree,ans,dist;
    degree=45;
    ans=calTan(degree);
    dist=tan(ans);
    printf("%f",dist);
    return 0;
}
float calTan(float d)
{
    float res;
    res=(d * 3.14)/180;
    return res;
}