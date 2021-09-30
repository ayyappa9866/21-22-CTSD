#include<stdio.h>
void display(int n)
{
    if(n==1)
    printf("one");
    else if(n==2)
    printf("two");
    else if(n==3)
    printf("three");
    else if(n==4)
    printf("four");
    else if(n==5)
    printf("five");
    else if(n==6)
    printf("six");
    else if(n==7)
    printf("seven");
    else if(n==8)
    printf("eight");
    else if(n==9)
    printf("nine");
    else 
    printf("Greater than 9");   
}
int main()
{
    int n1;
    scanf("%d",&n1);
    display(n1);
    return 0;
}
