#include<stdio.h>
float convertTemp(float); //prototype declaration of a function
int main()
{
    float degrees,ans; // declaration of variables
    degrees=100;
    ans=convertTemp(degrees); // function calling
    printf("Temparature in Fa=%f",ans);
    return 0;
}
float convertTemp(float c) // function body
{
    float res;
    res= (9/5.0)*c+32;
    return res;
}