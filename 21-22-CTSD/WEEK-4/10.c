#include<stdio.h>
void display(int);
void display(int n)
{
    if(n%2==1)
    printf("Weird");
    else if(n>=2 && n<=5)
    printf("Not Weird");
    else if(n>=6 && n<=20)
    printf("Weird");
    else 
     printf("Not Weird");
}
int main()
{
    int num;
    scanf("%d",&num);
    display(num);
    return 0;
}
